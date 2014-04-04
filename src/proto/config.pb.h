// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#ifndef PROTOBUF_config_2eproto__INCLUDED
#define PROTOBUF_config_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "base.pb.h"
// @@protoc_insertion_point(includes)

namespace dist_clang {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_config_2eproto();
void protobuf_AssignDesc_config_2eproto();
void protobuf_ShutdownFile_config_2eproto();

class Host;
class Verbosity;
class Verbosity_Range;
class Configuration;

// ===================================================================

class Host : public ::google::protobuf::Message {
 public:
  Host();
  virtual ~Host();

  Host(const Host& from);

  inline Host& operator=(const Host& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Host& default_instance();

  void Swap(Host* other);

  // implements Message ----------------------------------------------

  Host* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Host& from);
  void MergeFrom(const Host& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string host = 1;
  inline bool has_host() const;
  inline void clear_host();
  static const int kHostFieldNumber = 1;
  inline const ::std::string& host() const;
  inline void set_host(const ::std::string& value);
  inline void set_host(const char* value);
  inline void set_host(const char* value, size_t size);
  inline ::std::string* mutable_host();
  inline ::std::string* release_host();
  inline void set_allocated_host(::std::string* host);

  // optional uint32 port = 2 [default = 6000];
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 2;
  inline ::google::protobuf::uint32 port() const;
  inline void set_port(::google::protobuf::uint32 value);

  // optional uint32 threads = 3 [default = 2];
  inline bool has_threads() const;
  inline void clear_threads();
  static const int kThreadsFieldNumber = 3;
  inline ::google::protobuf::uint32 threads() const;
  inline void set_threads(::google::protobuf::uint32 value);

  // optional bool disabled = 4 [default = false];
  inline bool has_disabled() const;
  inline void clear_disabled();
  static const int kDisabledFieldNumber = 4;
  inline bool disabled() const;
  inline void set_disabled(bool value);

  // @@protoc_insertion_point(class_scope:dist_clang.proto.Host)
 private:
  inline void set_has_host();
  inline void clear_has_host();
  inline void set_has_port();
  inline void clear_has_port();
  inline void set_has_threads();
  inline void clear_has_threads();
  inline void set_has_disabled();
  inline void clear_has_disabled();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* host_;
  ::google::protobuf::uint32 port_;
  ::google::protobuf::uint32 threads_;
  bool disabled_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_config_2eproto();
  friend void protobuf_AssignDesc_config_2eproto();
  friend void protobuf_ShutdownFile_config_2eproto();

  void InitAsDefaultInstance();
  static Host* default_instance_;
};
// -------------------------------------------------------------------

class Verbosity_Range : public ::google::protobuf::Message {
 public:
  Verbosity_Range();
  virtual ~Verbosity_Range();

  Verbosity_Range(const Verbosity_Range& from);

  inline Verbosity_Range& operator=(const Verbosity_Range& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Verbosity_Range& default_instance();

  void Swap(Verbosity_Range* other);

  // implements Message ----------------------------------------------

  Verbosity_Range* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Verbosity_Range& from);
  void MergeFrom(const Verbosity_Range& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 right = 1;
  inline bool has_right() const;
  inline void clear_right();
  static const int kRightFieldNumber = 1;
  inline ::google::protobuf::uint32 right() const;
  inline void set_right(::google::protobuf::uint32 value);

  // optional uint32 left = 2;
  inline bool has_left() const;
  inline void clear_left();
  static const int kLeftFieldNumber = 2;
  inline ::google::protobuf::uint32 left() const;
  inline void set_left(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:dist_clang.proto.Verbosity.Range)
 private:
  inline void set_has_right();
  inline void clear_has_right();
  inline void set_has_left();
  inline void clear_has_left();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 right_;
  ::google::protobuf::uint32 left_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_config_2eproto();
  friend void protobuf_AssignDesc_config_2eproto();
  friend void protobuf_ShutdownFile_config_2eproto();

  void InitAsDefaultInstance();
  static Verbosity_Range* default_instance_;
};
// -------------------------------------------------------------------

class Verbosity : public ::google::protobuf::Message {
 public:
  Verbosity();
  virtual ~Verbosity();

  Verbosity(const Verbosity& from);

  inline Verbosity& operator=(const Verbosity& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Verbosity& default_instance();

  void Swap(Verbosity* other);

  // implements Message ----------------------------------------------

  Verbosity* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Verbosity& from);
  void MergeFrom(const Verbosity& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Verbosity_Range Range;

  // accessors -------------------------------------------------------

  // optional uint32 error_mark = 1 [default = 20];
  inline bool has_error_mark() const;
  inline void clear_error_mark();
  static const int kErrorMarkFieldNumber = 1;
  inline ::google::protobuf::uint32 error_mark() const;
  inline void set_error_mark(::google::protobuf::uint32 value);

  // repeated .dist_clang.proto.Verbosity.Range levels = 2;
  inline int levels_size() const;
  inline void clear_levels();
  static const int kLevelsFieldNumber = 2;
  inline const ::dist_clang::proto::Verbosity_Range& levels(int index) const;
  inline ::dist_clang::proto::Verbosity_Range* mutable_levels(int index);
  inline ::dist_clang::proto::Verbosity_Range* add_levels();
  inline const ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Verbosity_Range >&
      levels() const;
  inline ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Verbosity_Range >*
      mutable_levels();

  // @@protoc_insertion_point(class_scope:dist_clang.proto.Verbosity)
 private:
  inline void set_has_error_mark();
  inline void clear_has_error_mark();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Verbosity_Range > levels_;
  ::google::protobuf::uint32 error_mark_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_config_2eproto();
  friend void protobuf_AssignDesc_config_2eproto();
  friend void protobuf_ShutdownFile_config_2eproto();

  void InitAsDefaultInstance();
  static Verbosity* default_instance_;
};
// -------------------------------------------------------------------

class Configuration : public ::google::protobuf::Message {
 public:
  Configuration();
  virtual ~Configuration();

  Configuration(const Configuration& from);

  inline Configuration& operator=(const Configuration& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Configuration& default_instance();

  void Swap(Configuration* other);

  // implements Message ----------------------------------------------

  Configuration* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Configuration& from);
  void MergeFrom(const Configuration& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string socket_path = 1;
  inline bool has_socket_path() const;
  inline void clear_socket_path();
  static const int kSocketPathFieldNumber = 1;
  inline const ::std::string& socket_path() const;
  inline void set_socket_path(const ::std::string& value);
  inline void set_socket_path(const char* value);
  inline void set_socket_path(const char* value, size_t size);
  inline ::std::string* mutable_socket_path();
  inline ::std::string* release_socket_path();
  inline void set_allocated_socket_path(::std::string* socket_path);

  // optional uint32 pool_capacity = 2 [default = 16];
  inline bool has_pool_capacity() const;
  inline void clear_pool_capacity();
  static const int kPoolCapacityFieldNumber = 2;
  inline ::google::protobuf::uint32 pool_capacity() const;
  inline void set_pool_capacity(::google::protobuf::uint32 value);

  // optional string cache_path = 3;
  inline bool has_cache_path() const;
  inline void clear_cache_path();
  static const int kCachePathFieldNumber = 3;
  inline const ::std::string& cache_path() const;
  inline void set_cache_path(const ::std::string& value);
  inline void set_cache_path(const char* value);
  inline void set_cache_path(const char* value, size_t size);
  inline ::std::string* mutable_cache_path();
  inline ::std::string* release_cache_path();
  inline void set_allocated_cache_path(::std::string* cache_path);

  // repeated .dist_clang.proto.Host remotes = 4;
  inline int remotes_size() const;
  inline void clear_remotes();
  static const int kRemotesFieldNumber = 4;
  inline const ::dist_clang::proto::Host& remotes(int index) const;
  inline ::dist_clang::proto::Host* mutable_remotes(int index);
  inline ::dist_clang::proto::Host* add_remotes();
  inline const ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Host >&
      remotes() const;
  inline ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Host >*
      mutable_remotes();

  // optional .dist_clang.proto.Host local = 5;
  inline bool has_local() const;
  inline void clear_local();
  static const int kLocalFieldNumber = 5;
  inline const ::dist_clang::proto::Host& local() const;
  inline ::dist_clang::proto::Host* mutable_local();
  inline ::dist_clang::proto::Host* release_local();
  inline void set_allocated_local(::dist_clang::proto::Host* local);

  // repeated .dist_clang.proto.Compiler versions = 6;
  inline int versions_size() const;
  inline void clear_versions();
  static const int kVersionsFieldNumber = 6;
  inline const ::dist_clang::proto::Compiler& versions(int index) const;
  inline ::dist_clang::proto::Compiler* mutable_versions(int index);
  inline ::dist_clang::proto::Compiler* add_versions();
  inline const ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Compiler >&
      versions() const;
  inline ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Compiler >*
      mutable_versions();

  // optional .dist_clang.proto.Host statistic = 7;
  inline bool has_statistic() const;
  inline void clear_statistic();
  static const int kStatisticFieldNumber = 7;
  inline const ::dist_clang::proto::Host& statistic() const;
  inline ::dist_clang::proto::Host* mutable_statistic();
  inline ::dist_clang::proto::Host* release_statistic();
  inline void set_allocated_statistic(::dist_clang::proto::Host* statistic);

  // optional .dist_clang.proto.Verbosity verbosity = 8;
  inline bool has_verbosity() const;
  inline void clear_verbosity();
  static const int kVerbosityFieldNumber = 8;
  inline const ::dist_clang::proto::Verbosity& verbosity() const;
  inline ::dist_clang::proto::Verbosity* mutable_verbosity();
  inline ::dist_clang::proto::Verbosity* release_verbosity();
  inline void set_allocated_verbosity(::dist_clang::proto::Verbosity* verbosity);

  // optional uint64 cache_size = 9 [default = 0];
  inline bool has_cache_size() const;
  inline void clear_cache_size();
  static const int kCacheSizeFieldNumber = 9;
  inline ::google::protobuf::uint64 cache_size() const;
  inline void set_cache_size(::google::protobuf::uint64 value);

  // optional uint32 user_id = 10;
  inline bool has_user_id() const;
  inline void clear_user_id();
  static const int kUserIdFieldNumber = 10;
  inline ::google::protobuf::uint32 user_id() const;
  inline void set_user_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:dist_clang.proto.Configuration)
 private:
  inline void set_has_socket_path();
  inline void clear_has_socket_path();
  inline void set_has_pool_capacity();
  inline void clear_has_pool_capacity();
  inline void set_has_cache_path();
  inline void clear_has_cache_path();
  inline void set_has_local();
  inline void clear_has_local();
  inline void set_has_statistic();
  inline void clear_has_statistic();
  inline void set_has_verbosity();
  inline void clear_has_verbosity();
  inline void set_has_cache_size();
  inline void clear_has_cache_size();
  inline void set_has_user_id();
  inline void clear_has_user_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* socket_path_;
  ::std::string* cache_path_;
  ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Host > remotes_;
  ::dist_clang::proto::Host* local_;
  ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Compiler > versions_;
  ::google::protobuf::uint32 pool_capacity_;
  ::google::protobuf::uint32 user_id_;
  ::dist_clang::proto::Host* statistic_;
  ::dist_clang::proto::Verbosity* verbosity_;
  ::google::protobuf::uint64 cache_size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];

  friend void  protobuf_AddDesc_config_2eproto();
  friend void protobuf_AssignDesc_config_2eproto();
  friend void protobuf_ShutdownFile_config_2eproto();

  void InitAsDefaultInstance();
  static Configuration* default_instance_;
};
// ===================================================================


// ===================================================================

// Host

// required string host = 1;
inline bool Host::has_host() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Host::set_has_host() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Host::clear_has_host() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Host::clear_host() {
  if (host_ != &::google::protobuf::internal::kEmptyString) {
    host_->clear();
  }
  clear_has_host();
}
inline const ::std::string& Host::host() const {
  return *host_;
}
inline void Host::set_host(const ::std::string& value) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(value);
}
inline void Host::set_host(const char* value) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(value);
}
inline void Host::set_host(const char* value, size_t size) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Host::mutable_host() {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  return host_;
}
inline ::std::string* Host::release_host() {
  clear_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = host_;
    host_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Host::set_allocated_host(::std::string* host) {
  if (host_ != &::google::protobuf::internal::kEmptyString) {
    delete host_;
  }
  if (host) {
    set_has_host();
    host_ = host;
  } else {
    clear_has_host();
    host_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional uint32 port = 2 [default = 6000];
inline bool Host::has_port() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Host::set_has_port() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Host::clear_has_port() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Host::clear_port() {
  port_ = 6000u;
  clear_has_port();
}
inline ::google::protobuf::uint32 Host::port() const {
  return port_;
}
inline void Host::set_port(::google::protobuf::uint32 value) {
  set_has_port();
  port_ = value;
}

// optional uint32 threads = 3 [default = 2];
inline bool Host::has_threads() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Host::set_has_threads() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Host::clear_has_threads() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Host::clear_threads() {
  threads_ = 2u;
  clear_has_threads();
}
inline ::google::protobuf::uint32 Host::threads() const {
  return threads_;
}
inline void Host::set_threads(::google::protobuf::uint32 value) {
  set_has_threads();
  threads_ = value;
}

// optional bool disabled = 4 [default = false];
inline bool Host::has_disabled() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Host::set_has_disabled() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Host::clear_has_disabled() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Host::clear_disabled() {
  disabled_ = false;
  clear_has_disabled();
}
inline bool Host::disabled() const {
  return disabled_;
}
inline void Host::set_disabled(bool value) {
  set_has_disabled();
  disabled_ = value;
}

// -------------------------------------------------------------------

// Verbosity_Range

// required uint32 right = 1;
inline bool Verbosity_Range::has_right() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Verbosity_Range::set_has_right() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Verbosity_Range::clear_has_right() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Verbosity_Range::clear_right() {
  right_ = 0u;
  clear_has_right();
}
inline ::google::protobuf::uint32 Verbosity_Range::right() const {
  return right_;
}
inline void Verbosity_Range::set_right(::google::protobuf::uint32 value) {
  set_has_right();
  right_ = value;
}

// optional uint32 left = 2;
inline bool Verbosity_Range::has_left() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Verbosity_Range::set_has_left() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Verbosity_Range::clear_has_left() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Verbosity_Range::clear_left() {
  left_ = 0u;
  clear_has_left();
}
inline ::google::protobuf::uint32 Verbosity_Range::left() const {
  return left_;
}
inline void Verbosity_Range::set_left(::google::protobuf::uint32 value) {
  set_has_left();
  left_ = value;
}

// -------------------------------------------------------------------

// Verbosity

// optional uint32 error_mark = 1 [default = 20];
inline bool Verbosity::has_error_mark() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Verbosity::set_has_error_mark() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Verbosity::clear_has_error_mark() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Verbosity::clear_error_mark() {
  error_mark_ = 20u;
  clear_has_error_mark();
}
inline ::google::protobuf::uint32 Verbosity::error_mark() const {
  return error_mark_;
}
inline void Verbosity::set_error_mark(::google::protobuf::uint32 value) {
  set_has_error_mark();
  error_mark_ = value;
}

// repeated .dist_clang.proto.Verbosity.Range levels = 2;
inline int Verbosity::levels_size() const {
  return levels_.size();
}
inline void Verbosity::clear_levels() {
  levels_.Clear();
}
inline const ::dist_clang::proto::Verbosity_Range& Verbosity::levels(int index) const {
  return levels_.Get(index);
}
inline ::dist_clang::proto::Verbosity_Range* Verbosity::mutable_levels(int index) {
  return levels_.Mutable(index);
}
inline ::dist_clang::proto::Verbosity_Range* Verbosity::add_levels() {
  return levels_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Verbosity_Range >&
Verbosity::levels() const {
  return levels_;
}
inline ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Verbosity_Range >*
Verbosity::mutable_levels() {
  return &levels_;
}

// -------------------------------------------------------------------

// Configuration

// optional string socket_path = 1;
inline bool Configuration::has_socket_path() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Configuration::set_has_socket_path() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Configuration::clear_has_socket_path() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Configuration::clear_socket_path() {
  if (socket_path_ != &::google::protobuf::internal::kEmptyString) {
    socket_path_->clear();
  }
  clear_has_socket_path();
}
inline const ::std::string& Configuration::socket_path() const {
  return *socket_path_;
}
inline void Configuration::set_socket_path(const ::std::string& value) {
  set_has_socket_path();
  if (socket_path_ == &::google::protobuf::internal::kEmptyString) {
    socket_path_ = new ::std::string;
  }
  socket_path_->assign(value);
}
inline void Configuration::set_socket_path(const char* value) {
  set_has_socket_path();
  if (socket_path_ == &::google::protobuf::internal::kEmptyString) {
    socket_path_ = new ::std::string;
  }
  socket_path_->assign(value);
}
inline void Configuration::set_socket_path(const char* value, size_t size) {
  set_has_socket_path();
  if (socket_path_ == &::google::protobuf::internal::kEmptyString) {
    socket_path_ = new ::std::string;
  }
  socket_path_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Configuration::mutable_socket_path() {
  set_has_socket_path();
  if (socket_path_ == &::google::protobuf::internal::kEmptyString) {
    socket_path_ = new ::std::string;
  }
  return socket_path_;
}
inline ::std::string* Configuration::release_socket_path() {
  clear_has_socket_path();
  if (socket_path_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = socket_path_;
    socket_path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Configuration::set_allocated_socket_path(::std::string* socket_path) {
  if (socket_path_ != &::google::protobuf::internal::kEmptyString) {
    delete socket_path_;
  }
  if (socket_path) {
    set_has_socket_path();
    socket_path_ = socket_path;
  } else {
    clear_has_socket_path();
    socket_path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional uint32 pool_capacity = 2 [default = 16];
inline bool Configuration::has_pool_capacity() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Configuration::set_has_pool_capacity() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Configuration::clear_has_pool_capacity() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Configuration::clear_pool_capacity() {
  pool_capacity_ = 16u;
  clear_has_pool_capacity();
}
inline ::google::protobuf::uint32 Configuration::pool_capacity() const {
  return pool_capacity_;
}
inline void Configuration::set_pool_capacity(::google::protobuf::uint32 value) {
  set_has_pool_capacity();
  pool_capacity_ = value;
}

// optional string cache_path = 3;
inline bool Configuration::has_cache_path() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Configuration::set_has_cache_path() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Configuration::clear_has_cache_path() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Configuration::clear_cache_path() {
  if (cache_path_ != &::google::protobuf::internal::kEmptyString) {
    cache_path_->clear();
  }
  clear_has_cache_path();
}
inline const ::std::string& Configuration::cache_path() const {
  return *cache_path_;
}
inline void Configuration::set_cache_path(const ::std::string& value) {
  set_has_cache_path();
  if (cache_path_ == &::google::protobuf::internal::kEmptyString) {
    cache_path_ = new ::std::string;
  }
  cache_path_->assign(value);
}
inline void Configuration::set_cache_path(const char* value) {
  set_has_cache_path();
  if (cache_path_ == &::google::protobuf::internal::kEmptyString) {
    cache_path_ = new ::std::string;
  }
  cache_path_->assign(value);
}
inline void Configuration::set_cache_path(const char* value, size_t size) {
  set_has_cache_path();
  if (cache_path_ == &::google::protobuf::internal::kEmptyString) {
    cache_path_ = new ::std::string;
  }
  cache_path_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Configuration::mutable_cache_path() {
  set_has_cache_path();
  if (cache_path_ == &::google::protobuf::internal::kEmptyString) {
    cache_path_ = new ::std::string;
  }
  return cache_path_;
}
inline ::std::string* Configuration::release_cache_path() {
  clear_has_cache_path();
  if (cache_path_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = cache_path_;
    cache_path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Configuration::set_allocated_cache_path(::std::string* cache_path) {
  if (cache_path_ != &::google::protobuf::internal::kEmptyString) {
    delete cache_path_;
  }
  if (cache_path) {
    set_has_cache_path();
    cache_path_ = cache_path;
  } else {
    clear_has_cache_path();
    cache_path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .dist_clang.proto.Host remotes = 4;
inline int Configuration::remotes_size() const {
  return remotes_.size();
}
inline void Configuration::clear_remotes() {
  remotes_.Clear();
}
inline const ::dist_clang::proto::Host& Configuration::remotes(int index) const {
  return remotes_.Get(index);
}
inline ::dist_clang::proto::Host* Configuration::mutable_remotes(int index) {
  return remotes_.Mutable(index);
}
inline ::dist_clang::proto::Host* Configuration::add_remotes() {
  return remotes_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Host >&
Configuration::remotes() const {
  return remotes_;
}
inline ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Host >*
Configuration::mutable_remotes() {
  return &remotes_;
}

// optional .dist_clang.proto.Host local = 5;
inline bool Configuration::has_local() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Configuration::set_has_local() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Configuration::clear_has_local() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Configuration::clear_local() {
  if (local_ != NULL) local_->::dist_clang::proto::Host::Clear();
  clear_has_local();
}
inline const ::dist_clang::proto::Host& Configuration::local() const {
  return local_ != NULL ? *local_ : *default_instance_->local_;
}
inline ::dist_clang::proto::Host* Configuration::mutable_local() {
  set_has_local();
  if (local_ == NULL) local_ = new ::dist_clang::proto::Host;
  return local_;
}
inline ::dist_clang::proto::Host* Configuration::release_local() {
  clear_has_local();
  ::dist_clang::proto::Host* temp = local_;
  local_ = NULL;
  return temp;
}
inline void Configuration::set_allocated_local(::dist_clang::proto::Host* local) {
  delete local_;
  local_ = local;
  if (local) {
    set_has_local();
  } else {
    clear_has_local();
  }
}

// repeated .dist_clang.proto.Compiler versions = 6;
inline int Configuration::versions_size() const {
  return versions_.size();
}
inline void Configuration::clear_versions() {
  versions_.Clear();
}
inline const ::dist_clang::proto::Compiler& Configuration::versions(int index) const {
  return versions_.Get(index);
}
inline ::dist_clang::proto::Compiler* Configuration::mutable_versions(int index) {
  return versions_.Mutable(index);
}
inline ::dist_clang::proto::Compiler* Configuration::add_versions() {
  return versions_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Compiler >&
Configuration::versions() const {
  return versions_;
}
inline ::google::protobuf::RepeatedPtrField< ::dist_clang::proto::Compiler >*
Configuration::mutable_versions() {
  return &versions_;
}

// optional .dist_clang.proto.Host statistic = 7;
inline bool Configuration::has_statistic() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Configuration::set_has_statistic() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Configuration::clear_has_statistic() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Configuration::clear_statistic() {
  if (statistic_ != NULL) statistic_->::dist_clang::proto::Host::Clear();
  clear_has_statistic();
}
inline const ::dist_clang::proto::Host& Configuration::statistic() const {
  return statistic_ != NULL ? *statistic_ : *default_instance_->statistic_;
}
inline ::dist_clang::proto::Host* Configuration::mutable_statistic() {
  set_has_statistic();
  if (statistic_ == NULL) statistic_ = new ::dist_clang::proto::Host;
  return statistic_;
}
inline ::dist_clang::proto::Host* Configuration::release_statistic() {
  clear_has_statistic();
  ::dist_clang::proto::Host* temp = statistic_;
  statistic_ = NULL;
  return temp;
}
inline void Configuration::set_allocated_statistic(::dist_clang::proto::Host* statistic) {
  delete statistic_;
  statistic_ = statistic;
  if (statistic) {
    set_has_statistic();
  } else {
    clear_has_statistic();
  }
}

// optional .dist_clang.proto.Verbosity verbosity = 8;
inline bool Configuration::has_verbosity() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Configuration::set_has_verbosity() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Configuration::clear_has_verbosity() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Configuration::clear_verbosity() {
  if (verbosity_ != NULL) verbosity_->::dist_clang::proto::Verbosity::Clear();
  clear_has_verbosity();
}
inline const ::dist_clang::proto::Verbosity& Configuration::verbosity() const {
  return verbosity_ != NULL ? *verbosity_ : *default_instance_->verbosity_;
}
inline ::dist_clang::proto::Verbosity* Configuration::mutable_verbosity() {
  set_has_verbosity();
  if (verbosity_ == NULL) verbosity_ = new ::dist_clang::proto::Verbosity;
  return verbosity_;
}
inline ::dist_clang::proto::Verbosity* Configuration::release_verbosity() {
  clear_has_verbosity();
  ::dist_clang::proto::Verbosity* temp = verbosity_;
  verbosity_ = NULL;
  return temp;
}
inline void Configuration::set_allocated_verbosity(::dist_clang::proto::Verbosity* verbosity) {
  delete verbosity_;
  verbosity_ = verbosity;
  if (verbosity) {
    set_has_verbosity();
  } else {
    clear_has_verbosity();
  }
}

// optional uint64 cache_size = 9 [default = 0];
inline bool Configuration::has_cache_size() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Configuration::set_has_cache_size() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Configuration::clear_has_cache_size() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Configuration::clear_cache_size() {
  cache_size_ = GOOGLE_ULONGLONG(0);
  clear_has_cache_size();
}
inline ::google::protobuf::uint64 Configuration::cache_size() const {
  return cache_size_;
}
inline void Configuration::set_cache_size(::google::protobuf::uint64 value) {
  set_has_cache_size();
  cache_size_ = value;
}

// optional uint32 user_id = 10;
inline bool Configuration::has_user_id() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Configuration::set_has_user_id() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Configuration::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Configuration::clear_user_id() {
  user_id_ = 0u;
  clear_has_user_id();
}
inline ::google::protobuf::uint32 Configuration::user_id() const {
  return user_id_;
}
inline void Configuration::set_user_id(::google::protobuf::uint32 value) {
  set_has_user_id();
  user_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace dist_clang

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_config_2eproto__INCLUDED
