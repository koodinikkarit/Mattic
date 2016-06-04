// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MattiResponse.proto

#ifndef PROTOBUF_MattiResponse_2eproto__INCLUDED
#define PROTOBUF_MattiResponse_2eproto__INCLUDED

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
#include "VideoConnections.pb.h"
#include "KwmConnections.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MattiResponse_2eproto();
void protobuf_AssignDesc_MattiResponse_2eproto();
void protobuf_ShutdownFile_MattiResponse_2eproto();

class MattiResponse;

// ===================================================================

class MattiResponse : public ::google::protobuf::Message {
 public:
  MattiResponse();
  virtual ~MattiResponse();

  MattiResponse(const MattiResponse& from);

  inline MattiResponse& operator=(const MattiResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MattiResponse& default_instance();

  enum RequestMessageCase {
    kVideoConnection = 2,
    kKwmConnection = 3,
    kVideoConnections = 4,
    kKwmConnections = 5,
    REQUESTMESSAGE_NOT_SET = 0,
  };

  void Swap(MattiResponse* other);

  // implements Message ----------------------------------------------

  inline MattiResponse* New() const { return New(NULL); }

  MattiResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MattiResponse& from);
  void MergeFrom(const MattiResponse& from);
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
  void InternalSwap(MattiResponse* other);
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

  // optional uint32 ticket = 1;
  void clear_ticket();
  static const int kTicketFieldNumber = 1;
  ::google::protobuf::uint32 ticket() const;
  void set_ticket(::google::protobuf::uint32 value);

  // optional .VideoConnection videoConnection = 2;
  bool has_videoconnection() const;
  void clear_videoconnection();
  static const int kVideoConnectionFieldNumber = 2;
  const ::VideoConnection& videoconnection() const;
  ::VideoConnection* mutable_videoconnection();
  ::VideoConnection* release_videoconnection();
  void set_allocated_videoconnection(::VideoConnection* videoconnection);

  // optional .KwmConnection kwmConnection = 3;
  bool has_kwmconnection() const;
  void clear_kwmconnection();
  static const int kKwmConnectionFieldNumber = 3;
  const ::KwmConnection& kwmconnection() const;
  ::KwmConnection* mutable_kwmconnection();
  ::KwmConnection* release_kwmconnection();
  void set_allocated_kwmconnection(::KwmConnection* kwmconnection);

  // optional .VideoConnections videoConnections = 4;
  bool has_videoconnections() const;
  void clear_videoconnections();
  static const int kVideoConnectionsFieldNumber = 4;
  const ::VideoConnections& videoconnections() const;
  ::VideoConnections* mutable_videoconnections();
  ::VideoConnections* release_videoconnections();
  void set_allocated_videoconnections(::VideoConnections* videoconnections);

  // optional .KwmConnections kwmConnections = 5;
  bool has_kwmconnections() const;
  void clear_kwmconnections();
  static const int kKwmConnectionsFieldNumber = 5;
  const ::KwmConnections& kwmconnections() const;
  ::KwmConnections* mutable_kwmconnections();
  ::KwmConnections* release_kwmconnections();
  void set_allocated_kwmconnections(::KwmConnections* kwmconnections);

  RequestMessageCase requestMessage_case() const;
  // @@protoc_insertion_point(class_scope:MattiResponse)
 private:
  inline void set_has_videoconnection();
  inline void set_has_kwmconnection();
  inline void set_has_videoconnections();
  inline void set_has_kwmconnections();

  inline bool has_requestMessage() const;
  void clear_requestMessage();
  inline void clear_has_requestMessage();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint32 ticket_;
  union RequestMessageUnion {
    RequestMessageUnion() {}
    ::VideoConnection* videoconnection_;
    ::KwmConnection* kwmconnection_;
    ::VideoConnections* videoconnections_;
    ::KwmConnections* kwmconnections_;
  } requestMessage_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_MattiResponse_2eproto();
  friend void protobuf_AssignDesc_MattiResponse_2eproto();
  friend void protobuf_ShutdownFile_MattiResponse_2eproto();

  void InitAsDefaultInstance();
  static MattiResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MattiResponse

// optional uint32 ticket = 1;
inline void MattiResponse::clear_ticket() {
  ticket_ = 0u;
}
inline ::google::protobuf::uint32 MattiResponse::ticket() const {
  // @@protoc_insertion_point(field_get:MattiResponse.ticket)
  return ticket_;
}
inline void MattiResponse::set_ticket(::google::protobuf::uint32 value) {
  
  ticket_ = value;
  // @@protoc_insertion_point(field_set:MattiResponse.ticket)
}

// optional .VideoConnection videoConnection = 2;
inline bool MattiResponse::has_videoconnection() const {
  return requestMessage_case() == kVideoConnection;
}
inline void MattiResponse::set_has_videoconnection() {
  _oneof_case_[0] = kVideoConnection;
}
inline void MattiResponse::clear_videoconnection() {
  if (has_videoconnection()) {
    delete requestMessage_.videoconnection_;
    clear_has_requestMessage();
  }
}
inline  const ::VideoConnection& MattiResponse::videoconnection() const {
  // @@protoc_insertion_point(field_get:MattiResponse.videoConnection)
  return has_videoconnection()
      ? *requestMessage_.videoconnection_
      : ::VideoConnection::default_instance();
}
inline ::VideoConnection* MattiResponse::mutable_videoconnection() {
  if (!has_videoconnection()) {
    clear_requestMessage();
    set_has_videoconnection();
    requestMessage_.videoconnection_ = new ::VideoConnection;
  }
  // @@protoc_insertion_point(field_mutable:MattiResponse.videoConnection)
  return requestMessage_.videoconnection_;
}
inline ::VideoConnection* MattiResponse::release_videoconnection() {
  if (has_videoconnection()) {
    clear_has_requestMessage();
    ::VideoConnection* temp = requestMessage_.videoconnection_;
    requestMessage_.videoconnection_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void MattiResponse::set_allocated_videoconnection(::VideoConnection* videoconnection) {
  clear_requestMessage();
  if (videoconnection) {
    set_has_videoconnection();
    requestMessage_.videoconnection_ = videoconnection;
  }
  // @@protoc_insertion_point(field_set_allocated:MattiResponse.videoConnection)
}

// optional .KwmConnection kwmConnection = 3;
inline bool MattiResponse::has_kwmconnection() const {
  return requestMessage_case() == kKwmConnection;
}
inline void MattiResponse::set_has_kwmconnection() {
  _oneof_case_[0] = kKwmConnection;
}
inline void MattiResponse::clear_kwmconnection() {
  if (has_kwmconnection()) {
    delete requestMessage_.kwmconnection_;
    clear_has_requestMessage();
  }
}
inline  const ::KwmConnection& MattiResponse::kwmconnection() const {
  // @@protoc_insertion_point(field_get:MattiResponse.kwmConnection)
  return has_kwmconnection()
      ? *requestMessage_.kwmconnection_
      : ::KwmConnection::default_instance();
}
inline ::KwmConnection* MattiResponse::mutable_kwmconnection() {
  if (!has_kwmconnection()) {
    clear_requestMessage();
    set_has_kwmconnection();
    requestMessage_.kwmconnection_ = new ::KwmConnection;
  }
  // @@protoc_insertion_point(field_mutable:MattiResponse.kwmConnection)
  return requestMessage_.kwmconnection_;
}
inline ::KwmConnection* MattiResponse::release_kwmconnection() {
  if (has_kwmconnection()) {
    clear_has_requestMessage();
    ::KwmConnection* temp = requestMessage_.kwmconnection_;
    requestMessage_.kwmconnection_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void MattiResponse::set_allocated_kwmconnection(::KwmConnection* kwmconnection) {
  clear_requestMessage();
  if (kwmconnection) {
    set_has_kwmconnection();
    requestMessage_.kwmconnection_ = kwmconnection;
  }
  // @@protoc_insertion_point(field_set_allocated:MattiResponse.kwmConnection)
}

// optional .VideoConnections videoConnections = 4;
inline bool MattiResponse::has_videoconnections() const {
  return requestMessage_case() == kVideoConnections;
}
inline void MattiResponse::set_has_videoconnections() {
  _oneof_case_[0] = kVideoConnections;
}
inline void MattiResponse::clear_videoconnections() {
  if (has_videoconnections()) {
    delete requestMessage_.videoconnections_;
    clear_has_requestMessage();
  }
}
inline  const ::VideoConnections& MattiResponse::videoconnections() const {
  // @@protoc_insertion_point(field_get:MattiResponse.videoConnections)
  return has_videoconnections()
      ? *requestMessage_.videoconnections_
      : ::VideoConnections::default_instance();
}
inline ::VideoConnections* MattiResponse::mutable_videoconnections() {
  if (!has_videoconnections()) {
    clear_requestMessage();
    set_has_videoconnections();
    requestMessage_.videoconnections_ = new ::VideoConnections;
  }
  // @@protoc_insertion_point(field_mutable:MattiResponse.videoConnections)
  return requestMessage_.videoconnections_;
}
inline ::VideoConnections* MattiResponse::release_videoconnections() {
  if (has_videoconnections()) {
    clear_has_requestMessage();
    ::VideoConnections* temp = requestMessage_.videoconnections_;
    requestMessage_.videoconnections_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void MattiResponse::set_allocated_videoconnections(::VideoConnections* videoconnections) {
  clear_requestMessage();
  if (videoconnections) {
    set_has_videoconnections();
    requestMessage_.videoconnections_ = videoconnections;
  }
  // @@protoc_insertion_point(field_set_allocated:MattiResponse.videoConnections)
}

// optional .KwmConnections kwmConnections = 5;
inline bool MattiResponse::has_kwmconnections() const {
  return requestMessage_case() == kKwmConnections;
}
inline void MattiResponse::set_has_kwmconnections() {
  _oneof_case_[0] = kKwmConnections;
}
inline void MattiResponse::clear_kwmconnections() {
  if (has_kwmconnections()) {
    delete requestMessage_.kwmconnections_;
    clear_has_requestMessage();
  }
}
inline  const ::KwmConnections& MattiResponse::kwmconnections() const {
  // @@protoc_insertion_point(field_get:MattiResponse.kwmConnections)
  return has_kwmconnections()
      ? *requestMessage_.kwmconnections_
      : ::KwmConnections::default_instance();
}
inline ::KwmConnections* MattiResponse::mutable_kwmconnections() {
  if (!has_kwmconnections()) {
    clear_requestMessage();
    set_has_kwmconnections();
    requestMessage_.kwmconnections_ = new ::KwmConnections;
  }
  // @@protoc_insertion_point(field_mutable:MattiResponse.kwmConnections)
  return requestMessage_.kwmconnections_;
}
inline ::KwmConnections* MattiResponse::release_kwmconnections() {
  if (has_kwmconnections()) {
    clear_has_requestMessage();
    ::KwmConnections* temp = requestMessage_.kwmconnections_;
    requestMessage_.kwmconnections_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void MattiResponse::set_allocated_kwmconnections(::KwmConnections* kwmconnections) {
  clear_requestMessage();
  if (kwmconnections) {
    set_has_kwmconnections();
    requestMessage_.kwmconnections_ = kwmconnections;
  }
  // @@protoc_insertion_point(field_set_allocated:MattiResponse.kwmConnections)
}

inline bool MattiResponse::has_requestMessage() const {
  return requestMessage_case() != REQUESTMESSAGE_NOT_SET;
}
inline void MattiResponse::clear_has_requestMessage() {
  _oneof_case_[0] = REQUESTMESSAGE_NOT_SET;
}
inline MattiResponse::RequestMessageCase MattiResponse::requestMessage_case() const {
  return MattiResponse::RequestMessageCase(_oneof_case_[0]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MattiResponse_2eproto__INCLUDED
