#pragma once

#include "base/queue_aggregator.h"

#include "base/locked_queue_impl.h"

namespace dist_clang {
namespace base {

template <class T>
QueueAggregator<T>::QueueAggregator()
  : closed_(false), order_count_(0) {
}

template <class T>
void QueueAggregator<T>::Close() {
  closed_ = true;
  pop_condition_.notify_all();
  done_condition_.notify_all();
  for (auto& thread: threads_) {
    thread.join();
  }
}

template <class T>
void QueueAggregator<T>::Aggregate(LockedQueue<T>* queue) {
  threads_.emplace_back(&QueueAggregator<T>::DoPop, this, queue);
}

template <class T>
bool QueueAggregator<T>::Pop(T& obj) {
  std::unique_lock<std::mutex> lock(orders_mutex_);
  ++order_count_;
  pop_condition_.notify_all();

  done_condition_.wait(lock, [this]{ return closed_ || !orders_.empty(); });
  if (closed_ && orders_.empty()) {
    // FIXME: we lose the tasks this way - I don't know, if it's okey.
    return false;
  }
  obj = std::move(orders_.front());
  orders_.pop_front();
  return true;
}

template <class T>
void QueueAggregator<T>::DoPop(LockedQueue<T>* queue) {
  while (!closed_) {
    {
      std::unique_lock<std::mutex> lock(orders_mutex_);
      pop_condition_.wait(lock, [this]{ return order_count_ || closed_; });
    }

    {
      std::unique_lock<std::mutex> lock(queue->pop_mutex_);
      while(!queue->closed_ && queue->queue_.empty()) {
        queue->pop_condition_.wait(lock);
      }
      if (queue->closed_ && queue->queue_.empty()) {
        break;
      }

      {
        std::unique_lock<std::mutex> lock(orders_mutex_);
        if (order_count_) {
          orders_.emplace_back(std::move(queue->queue_.front()));
          queue->queue_.pop();
          queue->size_.fetch_sub(1);
          --order_count_;
          lock.unlock();
          done_condition_.notify_one();
        }
      }
    }
  }
}

}  // namespace base
}  // namespace dist_clang