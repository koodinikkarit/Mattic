// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AllConnections.proto

#ifndef PROTOBUF_AllConnections_2eproto__INCLUDED
#define PROTOBUF_AllConnections_2eproto__INCLUDED

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
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_AllConnections_2eproto();
void protobuf_AssignDesc_AllConnections_2eproto();
void protobuf_ShutdownFile_AllConnections_2eproto();

class AllConnections;

// ===================================================================

class AllConnections : public ::google::protobuf::Message {
 public:
  AllConnections();
  virtual ~AllConnections();

  AllConnections(const AllConnections& from);

  inline AllConnections& operator=(const AllConnections& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AllConnections& default_instance();

  void Swap(AllConnections* other);

  // implements Message ----------------------------------------------

  inline AllConnections* New() const { return New(NULL); }

  AllConnections* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AllConnections& from);
  void MergeFrom(const AllConnections& from);
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
  void InternalSwap(AllConnections* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated uint32 videoConnections = 1;
  int videoconnections_size() const;
  void clear_videoconnections();
  static const int kVideoConnectionsFieldNumber = 1;
  ::google::protobuf::uint32 videoconnections(int index) const;
  void set_videoconnections(int index, ::google::protobuf::uint32 value);
  void add_videoconnections(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      videoconnections() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_videoconnections();

  // repeated uint32 kwmConnections = 2;
  int kwmconnections_size() const;
  void clear_kwmconnections();
  static const int kKwmConnectionsFieldNumber = 2;
  ::google::protobuf::uint32 kwmconnections(int index) const;
  void set_kwmconnections(int index, ::google::protobuf::uint32 value);
  void add_kwmconnections(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      kwmconnections() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_kwmconnections();

  // optional uint32 matrixId = 3;
  void clear_matrixid();
  static const int kMatrixIdFieldNumber = 3;
  ::google::protobuf::uint32 matrixid() const;
  void set_matrixid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:AllConnections)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > videoconnections_;
  mutable int _videoconnections_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > kwmconnections_;
  mutable int _kwmconnections_cached_byte_size_;
  ::google::protobuf::uint32 matrixid_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_AllConnections_2eproto();
  friend void protobuf_AssignDesc_AllConnections_2eproto();
  friend void protobuf_ShutdownFile_AllConnections_2eproto();

  void InitAsDefaultInstance();
  static AllConnections* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AllConnections

// repeated uint32 videoConnections = 1;
inline int AllConnections::videoconnections_size() const {
  return videoconnections_.size();
}
inline void AllConnections::clear_videoconnections() {
  videoconnections_.Clear();
}
inline ::google::protobuf::uint32 AllConnections::videoconnections(int index) const {
  // @@protoc_insertion_point(field_get:AllConnections.videoConnections)
  return videoconnections_.Get(index);
}
inline void AllConnections::set_videoconnections(int index, ::google::protobuf::uint32 value) {
  videoconnections_.Set(index, value);
  // @@protoc_insertion_point(field_set:AllConnections.videoConnections)
}
inline void AllConnections::add_videoconnections(::google::protobuf::uint32 value) {
  videoconnections_.Add(value);
  // @@protoc_insertion_point(field_add:AllConnections.videoConnections)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
AllConnections::videoconnections() const {
  // @@protoc_insertion_point(field_list:AllConnections.videoConnections)
  return videoconnections_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
AllConnections::mutable_videoconnections() {
  // @@protoc_insertion_point(field_mutable_list:AllConnections.videoConnections)
  return &videoconnections_;
}

// repeated uint32 kwmConnections = 2;
inline int AllConnections::kwmconnections_size() const {
  return kwmconnections_.size();
}
inline void AllConnections::clear_kwmconnections() {
  kwmconnections_.Clear();
}
inline ::google::protobuf::uint32 AllConnections::kwmconnections(int index) const {
  // @@protoc_insertion_point(field_get:AllConnections.kwmConnections)
  return kwmconnections_.Get(index);
}
inline void AllConnections::set_kwmconnections(int index, ::google::protobuf::uint32 value) {
  kwmconnections_.Set(index, value);
  // @@protoc_insertion_point(field_set:AllConnections.kwmConnections)
}
inline void AllConnections::add_kwmconnections(::google::protobuf::uint32 value) {
  kwmconnections_.Add(value);
  // @@protoc_insertion_point(field_add:AllConnections.kwmConnections)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
AllConnections::kwmconnections() const {
  // @@protoc_insertion_point(field_list:AllConnections.kwmConnections)
  return kwmconnections_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
AllConnections::mutable_kwmconnections() {
  // @@protoc_insertion_point(field_mutable_list:AllConnections.kwmConnections)
  return &kwmconnections_;
}

// optional uint32 matrixId = 3;
inline void AllConnections::clear_matrixid() {
  matrixid_ = 0u;
}
inline ::google::protobuf::uint32 AllConnections::matrixid() const {
  // @@protoc_insertion_point(field_get:AllConnections.matrixId)
  return matrixid_;
}
inline void AllConnections::set_matrixid(::google::protobuf::uint32 value) {
  
  matrixid_ = value;
  // @@protoc_insertion_point(field_set:AllConnections.matrixId)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AllConnections_2eproto__INCLUDED