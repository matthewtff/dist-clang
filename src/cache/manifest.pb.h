// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cache/manifest.proto

#ifndef PROTOBUF_cache_2fmanifest_2eproto__INCLUDED
#define PROTOBUF_cache_2fmanifest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace dist_clang {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cache_2fmanifest_2eproto();
void protobuf_AssignDesc_cache_2fmanifest_2eproto();
void protobuf_ShutdownFile_cache_2fmanifest_2eproto();

class Manifest;

// ===================================================================

class Manifest : public ::google::protobuf::Message {
 public:
  Manifest();
  virtual ~Manifest();

  Manifest(const Manifest& from);

  inline Manifest& operator=(const Manifest& from) {
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
  static const Manifest& default_instance();

  void Swap(Manifest* other);

  // implements Message ----------------------------------------------

  Manifest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Manifest& from);
  void MergeFrom(const Manifest& from);
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

  // repeated string headers = 1;
  inline int headers_size() const;
  inline void clear_headers();
  static const int kHeadersFieldNumber = 1;
  inline const ::std::string& headers(int index) const;
  inline ::std::string* mutable_headers(int index);
  inline void set_headers(int index, const ::std::string& value);
  inline void set_headers(int index, const char* value);
  inline void set_headers(int index, const char* value, size_t size);
  inline ::std::string* add_headers();
  inline void add_headers(const ::std::string& value);
  inline void add_headers(const char* value);
  inline void add_headers(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& headers() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_headers();

  // optional bool snappy = 2 [default = false];
  inline bool has_snappy() const;
  inline void clear_snappy();
  static const int kSnappyFieldNumber = 2;
  inline bool snappy() const;
  inline void set_snappy(bool value);

  // optional bool stderr = 100 [default = false];
  inline bool has_stderr() const;
  inline void clear_stderr();
  static const int kStderrFieldNumber = 100;
  inline bool stderr() const;
  inline void set_stderr(bool value);

  // optional bool object = 101 [default = true];
  inline bool has_object() const;
  inline void clear_object();
  static const int kObjectFieldNumber = 101;
  inline bool object() const;
  inline void set_object(bool value);

  // optional bool deps = 102 [default = true];
  inline bool has_deps() const;
  inline void clear_deps();
  static const int kDepsFieldNumber = 102;
  inline bool deps() const;
  inline void set_deps(bool value);

  // @@protoc_insertion_point(class_scope:dist_clang.proto.Manifest)
 private:
  inline void set_has_snappy();
  inline void clear_has_snappy();
  inline void set_has_stderr();
  inline void clear_has_stderr();
  inline void set_has_object();
  inline void clear_has_object();
  inline void set_has_deps();
  inline void clear_has_deps();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> headers_;
  bool snappy_;
  bool stderr_;
  bool object_;
  bool deps_;
  friend void  protobuf_AddDesc_cache_2fmanifest_2eproto();
  friend void protobuf_AssignDesc_cache_2fmanifest_2eproto();
  friend void protobuf_ShutdownFile_cache_2fmanifest_2eproto();

  void InitAsDefaultInstance();
  static Manifest* default_instance_;
};
// ===================================================================


// ===================================================================

// Manifest

// repeated string headers = 1;
inline int Manifest::headers_size() const {
  return headers_.size();
}
inline void Manifest::clear_headers() {
  headers_.Clear();
}
inline const ::std::string& Manifest::headers(int index) const {
  // @@protoc_insertion_point(field_get:dist_clang.proto.Manifest.headers)
  return headers_.Get(index);
}
inline ::std::string* Manifest::mutable_headers(int index) {
  // @@protoc_insertion_point(field_mutable:dist_clang.proto.Manifest.headers)
  return headers_.Mutable(index);
}
inline void Manifest::set_headers(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:dist_clang.proto.Manifest.headers)
  headers_.Mutable(index)->assign(value);
}
inline void Manifest::set_headers(int index, const char* value) {
  headers_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:dist_clang.proto.Manifest.headers)
}
inline void Manifest::set_headers(int index, const char* value, size_t size) {
  headers_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:dist_clang.proto.Manifest.headers)
}
inline ::std::string* Manifest::add_headers() {
  return headers_.Add();
}
inline void Manifest::add_headers(const ::std::string& value) {
  headers_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:dist_clang.proto.Manifest.headers)
}
inline void Manifest::add_headers(const char* value) {
  headers_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:dist_clang.proto.Manifest.headers)
}
inline void Manifest::add_headers(const char* value, size_t size) {
  headers_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:dist_clang.proto.Manifest.headers)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Manifest::headers() const {
  // @@protoc_insertion_point(field_list:dist_clang.proto.Manifest.headers)
  return headers_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Manifest::mutable_headers() {
  // @@protoc_insertion_point(field_mutable_list:dist_clang.proto.Manifest.headers)
  return &headers_;
}

// optional bool snappy = 2 [default = false];
inline bool Manifest::has_snappy() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Manifest::set_has_snappy() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Manifest::clear_has_snappy() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Manifest::clear_snappy() {
  snappy_ = false;
  clear_has_snappy();
}
inline bool Manifest::snappy() const {
  // @@protoc_insertion_point(field_get:dist_clang.proto.Manifest.snappy)
  return snappy_;
}
inline void Manifest::set_snappy(bool value) {
  set_has_snappy();
  snappy_ = value;
  // @@protoc_insertion_point(field_set:dist_clang.proto.Manifest.snappy)
}

// optional bool stderr = 100 [default = false];
inline bool Manifest::has_stderr() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Manifest::set_has_stderr() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Manifest::clear_has_stderr() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Manifest::clear_stderr() {
  stderr_ = false;
  clear_has_stderr();
}
inline bool Manifest::stderr() const {
  // @@protoc_insertion_point(field_get:dist_clang.proto.Manifest.stderr)
  return stderr_;
}
inline void Manifest::set_stderr(bool value) {
  set_has_stderr();
  stderr_ = value;
  // @@protoc_insertion_point(field_set:dist_clang.proto.Manifest.stderr)
}

// optional bool object = 101 [default = true];
inline bool Manifest::has_object() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Manifest::set_has_object() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Manifest::clear_has_object() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Manifest::clear_object() {
  object_ = true;
  clear_has_object();
}
inline bool Manifest::object() const {
  // @@protoc_insertion_point(field_get:dist_clang.proto.Manifest.object)
  return object_;
}
inline void Manifest::set_object(bool value) {
  set_has_object();
  object_ = value;
  // @@protoc_insertion_point(field_set:dist_clang.proto.Manifest.object)
}

// optional bool deps = 102 [default = true];
inline bool Manifest::has_deps() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Manifest::set_has_deps() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Manifest::clear_has_deps() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Manifest::clear_deps() {
  deps_ = true;
  clear_has_deps();
}
inline bool Manifest::deps() const {
  // @@protoc_insertion_point(field_get:dist_clang.proto.Manifest.deps)
  return deps_;
}
inline void Manifest::set_deps(bool value) {
  set_has_deps();
  deps_ = value;
  // @@protoc_insertion_point(field_set:dist_clang.proto.Manifest.deps)
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

#endif  // PROTOBUF_cache_2fmanifest_2eproto__INCLUDED