// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProgramProtos.proto

#ifndef PROTOBUF_ProgramProtos_2eproto__INCLUDED
#define PROTOBUF_ProgramProtos_2eproto__INCLUDED

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
#include "ProgramProto.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ProgramProtos_2eproto();
void protobuf_AssignDesc_ProgramProtos_2eproto();
void protobuf_ShutdownFile_ProgramProtos_2eproto();

class ProgramProtos;

// ===================================================================

class ProgramProtos : public ::google::protobuf::Message {
 public:
  ProgramProtos();
  virtual ~ProgramProtos();

  ProgramProtos(const ProgramProtos& from);

  inline ProgramProtos& operator=(const ProgramProtos& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ProgramProtos& default_instance();

  void Swap(ProgramProtos* other);

  // implements Message ----------------------------------------------

  inline ProgramProtos* New() const { return New(NULL); }

  ProgramProtos* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProgramProtos& from);
  void MergeFrom(const ProgramProtos& from);
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
  void InternalSwap(ProgramProtos* other);
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

  // repeated .ProgramProto programs = 1;
  int programs_size() const;
  void clear_programs();
  static const int kProgramsFieldNumber = 1;
  const ::ProgramProto& programs(int index) const;
  ::ProgramProto* mutable_programs(int index);
  ::ProgramProto* add_programs();
  ::google::protobuf::RepeatedPtrField< ::ProgramProto >*
      mutable_programs();
  const ::google::protobuf::RepeatedPtrField< ::ProgramProto >&
      programs() const;

  // @@protoc_insertion_point(class_scope:ProgramProtos)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::ProgramProto > programs_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ProgramProtos_2eproto();
  friend void protobuf_AssignDesc_ProgramProtos_2eproto();
  friend void protobuf_ShutdownFile_ProgramProtos_2eproto();

  void InitAsDefaultInstance();
  static ProgramProtos* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ProgramProtos

// repeated .ProgramProto programs = 1;
inline int ProgramProtos::programs_size() const {
  return programs_.size();
}
inline void ProgramProtos::clear_programs() {
  programs_.Clear();
}
inline const ::ProgramProto& ProgramProtos::programs(int index) const {
  // @@protoc_insertion_point(field_get:ProgramProtos.programs)
  return programs_.Get(index);
}
inline ::ProgramProto* ProgramProtos::mutable_programs(int index) {
  // @@protoc_insertion_point(field_mutable:ProgramProtos.programs)
  return programs_.Mutable(index);
}
inline ::ProgramProto* ProgramProtos::add_programs() {
  // @@protoc_insertion_point(field_add:ProgramProtos.programs)
  return programs_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ProgramProto >*
ProgramProtos::mutable_programs() {
  // @@protoc_insertion_point(field_mutable_list:ProgramProtos.programs)
  return &programs_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ProgramProto >&
ProgramProtos::programs() const {
  // @@protoc_insertion_point(field_list:ProgramProtos.programs)
  return programs_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ProgramProtos_2eproto__INCLUDED