// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Matrix.proto

#ifndef PROTOBUF_Matrix_2eproto__INCLUDED
#define PROTOBUF_Matrix_2eproto__INCLUDED

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
#include "VideoConnection.pb.h"
#include "KwmConnection.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Matrix_2eproto();
void protobuf_AssignDesc_Matrix_2eproto();
void protobuf_ShutdownFile_Matrix_2eproto();

class MatrixProto;

// ===================================================================

class MatrixProto : public ::google::protobuf::Message {
 public:
  MatrixProto();
  virtual ~MatrixProto();

  MatrixProto(const MatrixProto& from);

  inline MatrixProto& operator=(const MatrixProto& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MatrixProto& default_instance();

  void Swap(MatrixProto* other);

  // implements Message ----------------------------------------------

  inline MatrixProto* New() const { return New(NULL); }

  MatrixProto* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MatrixProto& from);
  void MergeFrom(const MatrixProto& from);
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
  void InternalSwap(MatrixProto* other);
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

  // optional uint32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // optional string ip = 2;
  void clear_ip();
  static const int kIpFieldNumber = 2;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  void set_ip(const char* value);
  void set_ip(const char* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // optional uint32 port = 3;
  void clear_port();
  static const int kPortFieldNumber = 3;
  ::google::protobuf::uint32 port() const;
  void set_port(::google::protobuf::uint32 value);

  // optional uint32 numConPorts = 4;
  void clear_numconports();
  static const int kNumConPortsFieldNumber = 4;
  ::google::protobuf::uint32 numconports() const;
  void set_numconports(::google::protobuf::uint32 value);

  // optional uint32 numCpuPorts = 5;
  void clear_numcpuports();
  static const int kNumCpuPortsFieldNumber = 5;
  ::google::protobuf::uint32 numcpuports() const;
  void set_numcpuports(::google::protobuf::uint32 value);

  // repeated .VideoConnection videoConnections = 6;
  int videoconnections_size() const;
  void clear_videoconnections();
  static const int kVideoConnectionsFieldNumber = 6;
  const ::VideoConnection& videoconnections(int index) const;
  ::VideoConnection* mutable_videoconnections(int index);
  ::VideoConnection* add_videoconnections();
  ::google::protobuf::RepeatedPtrField< ::VideoConnection >*
      mutable_videoconnections();
  const ::google::protobuf::RepeatedPtrField< ::VideoConnection >&
      videoconnections() const;

  // repeated .KwmConnection kwmConnections = 7;
  int kwmconnections_size() const;
  void clear_kwmconnections();
  static const int kKwmConnectionsFieldNumber = 7;
  const ::KwmConnection& kwmconnections(int index) const;
  ::KwmConnection* mutable_kwmconnections(int index);
  ::KwmConnection* add_kwmconnections();
  ::google::protobuf::RepeatedPtrField< ::KwmConnection >*
      mutable_kwmconnections();
  const ::google::protobuf::RepeatedPtrField< ::KwmConnection >&
      kwmconnections() const;

  // @@protoc_insertion_point(class_scope:MatrixProto)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 port_;
  ::google::protobuf::uint32 numconports_;
  ::google::protobuf::uint32 numcpuports_;
  ::google::protobuf::RepeatedPtrField< ::VideoConnection > videoconnections_;
  ::google::protobuf::RepeatedPtrField< ::KwmConnection > kwmconnections_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Matrix_2eproto();
  friend void protobuf_AssignDesc_Matrix_2eproto();
  friend void protobuf_ShutdownFile_Matrix_2eproto();

  void InitAsDefaultInstance();
  static MatrixProto* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MatrixProto

// optional uint32 id = 1;
inline void MatrixProto::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 MatrixProto::id() const {
  // @@protoc_insertion_point(field_get:MatrixProto.id)
  return id_;
}
inline void MatrixProto::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:MatrixProto.id)
}

// optional string ip = 2;
inline void MatrixProto::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MatrixProto::ip() const {
  // @@protoc_insertion_point(field_get:MatrixProto.ip)
  return ip_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MatrixProto::set_ip(const ::std::string& value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MatrixProto.ip)
}
inline void MatrixProto::set_ip(const char* value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MatrixProto.ip)
}
inline void MatrixProto::set_ip(const char* value, size_t size) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MatrixProto.ip)
}
inline ::std::string* MatrixProto::mutable_ip() {
  
  // @@protoc_insertion_point(field_mutable:MatrixProto.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MatrixProto::release_ip() {
  
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MatrixProto::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    
  } else {
    
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:MatrixProto.ip)
}

// optional uint32 port = 3;
inline void MatrixProto::clear_port() {
  port_ = 0u;
}
inline ::google::protobuf::uint32 MatrixProto::port() const {
  // @@protoc_insertion_point(field_get:MatrixProto.port)
  return port_;
}
inline void MatrixProto::set_port(::google::protobuf::uint32 value) {
  
  port_ = value;
  // @@protoc_insertion_point(field_set:MatrixProto.port)
}

// optional uint32 numConPorts = 4;
inline void MatrixProto::clear_numconports() {
  numconports_ = 0u;
}
inline ::google::protobuf::uint32 MatrixProto::numconports() const {
  // @@protoc_insertion_point(field_get:MatrixProto.numConPorts)
  return numconports_;
}
inline void MatrixProto::set_numconports(::google::protobuf::uint32 value) {
  
  numconports_ = value;
  // @@protoc_insertion_point(field_set:MatrixProto.numConPorts)
}

// optional uint32 numCpuPorts = 5;
inline void MatrixProto::clear_numcpuports() {
  numcpuports_ = 0u;
}
inline ::google::protobuf::uint32 MatrixProto::numcpuports() const {
  // @@protoc_insertion_point(field_get:MatrixProto.numCpuPorts)
  return numcpuports_;
}
inline void MatrixProto::set_numcpuports(::google::protobuf::uint32 value) {
  
  numcpuports_ = value;
  // @@protoc_insertion_point(field_set:MatrixProto.numCpuPorts)
}

// repeated .VideoConnection videoConnections = 6;
inline int MatrixProto::videoconnections_size() const {
  return videoconnections_.size();
}
inline void MatrixProto::clear_videoconnections() {
  videoconnections_.Clear();
}
inline const ::VideoConnection& MatrixProto::videoconnections(int index) const {
  // @@protoc_insertion_point(field_get:MatrixProto.videoConnections)
  return videoconnections_.Get(index);
}
inline ::VideoConnection* MatrixProto::mutable_videoconnections(int index) {
  // @@protoc_insertion_point(field_mutable:MatrixProto.videoConnections)
  return videoconnections_.Mutable(index);
}
inline ::VideoConnection* MatrixProto::add_videoconnections() {
  // @@protoc_insertion_point(field_add:MatrixProto.videoConnections)
  return videoconnections_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::VideoConnection >*
MatrixProto::mutable_videoconnections() {
  // @@protoc_insertion_point(field_mutable_list:MatrixProto.videoConnections)
  return &videoconnections_;
}
inline const ::google::protobuf::RepeatedPtrField< ::VideoConnection >&
MatrixProto::videoconnections() const {
  // @@protoc_insertion_point(field_list:MatrixProto.videoConnections)
  return videoconnections_;
}

// repeated .KwmConnection kwmConnections = 7;
inline int MatrixProto::kwmconnections_size() const {
  return kwmconnections_.size();
}
inline void MatrixProto::clear_kwmconnections() {
  kwmconnections_.Clear();
}
inline const ::KwmConnection& MatrixProto::kwmconnections(int index) const {
  // @@protoc_insertion_point(field_get:MatrixProto.kwmConnections)
  return kwmconnections_.Get(index);
}
inline ::KwmConnection* MatrixProto::mutable_kwmconnections(int index) {
  // @@protoc_insertion_point(field_mutable:MatrixProto.kwmConnections)
  return kwmconnections_.Mutable(index);
}
inline ::KwmConnection* MatrixProto::add_kwmconnections() {
  // @@protoc_insertion_point(field_add:MatrixProto.kwmConnections)
  return kwmconnections_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::KwmConnection >*
MatrixProto::mutable_kwmconnections() {
  // @@protoc_insertion_point(field_mutable_list:MatrixProto.kwmConnections)
  return &kwmconnections_;
}
inline const ::google::protobuf::RepeatedPtrField< ::KwmConnection >&
MatrixProto::kwmconnections() const {
  // @@protoc_insertion_point(field_list:MatrixProto.kwmConnections)
  return kwmconnections_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Matrix_2eproto__INCLUDED
