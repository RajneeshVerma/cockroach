// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cockroach/util/hlc/timestamp.proto

#ifndef PROTOBUF_cockroach_2futil_2fhlc_2ftimestamp_2eproto__INCLUDED
#define PROTOBUF_cockroach_2futil_2fhlc_2ftimestamp_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace cockroach {
namespace util {
namespace hlc {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_cockroach_2futil_2fhlc_2ftimestamp_2eproto();
void protobuf_AssignDesc_cockroach_2futil_2fhlc_2ftimestamp_2eproto();
void protobuf_ShutdownFile_cockroach_2futil_2fhlc_2ftimestamp_2eproto();

class Timestamp;

// ===================================================================

class Timestamp : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:cockroach.util.hlc.Timestamp) */ {
 public:
  Timestamp();
  virtual ~Timestamp();

  Timestamp(const Timestamp& from);

  inline Timestamp& operator=(const Timestamp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const Timestamp& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Timestamp* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Timestamp* other);

  // implements Message ----------------------------------------------

  inline Timestamp* New() const { return New(NULL); }

  Timestamp* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Timestamp& from);
  void MergeFrom(const Timestamp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Timestamp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 wall_time = 1;
  bool has_wall_time() const;
  void clear_wall_time();
  static const int kWallTimeFieldNumber = 1;
  ::google::protobuf::int64 wall_time() const;
  void set_wall_time(::google::protobuf::int64 value);

  // optional int32 logical = 2;
  bool has_logical() const;
  void clear_logical();
  static const int kLogicalFieldNumber = 2;
  ::google::protobuf::int32 logical() const;
  void set_logical(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cockroach.util.hlc.Timestamp)
 private:
  inline void set_has_wall_time();
  inline void clear_has_wall_time();
  inline void set_has_logical();
  inline void clear_has_logical();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 wall_time_;
  ::google::protobuf::int32 logical_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_cockroach_2futil_2fhlc_2ftimestamp_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_cockroach_2futil_2fhlc_2ftimestamp_2eproto();
  #endif
  friend void protobuf_AssignDesc_cockroach_2futil_2fhlc_2ftimestamp_2eproto();
  friend void protobuf_ShutdownFile_cockroach_2futil_2fhlc_2ftimestamp_2eproto();

  void InitAsDefaultInstance();
  static Timestamp* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Timestamp

// optional int64 wall_time = 1;
inline bool Timestamp::has_wall_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Timestamp::set_has_wall_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Timestamp::clear_has_wall_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Timestamp::clear_wall_time() {
  wall_time_ = GOOGLE_LONGLONG(0);
  clear_has_wall_time();
}
inline ::google::protobuf::int64 Timestamp::wall_time() const {
  // @@protoc_insertion_point(field_get:cockroach.util.hlc.Timestamp.wall_time)
  return wall_time_;
}
inline void Timestamp::set_wall_time(::google::protobuf::int64 value) {
  set_has_wall_time();
  wall_time_ = value;
  // @@protoc_insertion_point(field_set:cockroach.util.hlc.Timestamp.wall_time)
}

// optional int32 logical = 2;
inline bool Timestamp::has_logical() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Timestamp::set_has_logical() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Timestamp::clear_has_logical() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Timestamp::clear_logical() {
  logical_ = 0;
  clear_has_logical();
}
inline ::google::protobuf::int32 Timestamp::logical() const {
  // @@protoc_insertion_point(field_get:cockroach.util.hlc.Timestamp.logical)
  return logical_;
}
inline void Timestamp::set_logical(::google::protobuf::int32 value) {
  set_has_logical();
  logical_ = value;
  // @@protoc_insertion_point(field_set:cockroach.util.hlc.Timestamp.logical)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace hlc
}  // namespace util
}  // namespace cockroach

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cockroach_2futil_2fhlc_2ftimestamp_2eproto__INCLUDED
