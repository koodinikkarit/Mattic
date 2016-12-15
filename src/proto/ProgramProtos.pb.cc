// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProgramProtos.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProgramProtos.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* ProgramProtos_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProgramProtos_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ProgramProtos_2eproto() {
  protobuf_AddDesc_ProgramProtos_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ProgramProtos.proto");
  GOOGLE_CHECK(file != NULL);
  ProgramProtos_descriptor_ = file->message_type(0);
  static const int ProgramProtos_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProgramProtos, programs_),
  };
  ProgramProtos_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ProgramProtos_descriptor_,
      ProgramProtos::default_instance_,
      ProgramProtos_offsets_,
      -1,
      -1,
      -1,
      sizeof(ProgramProtos),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProgramProtos, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProgramProtos, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ProgramProtos_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ProgramProtos_descriptor_, &ProgramProtos::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ProgramProtos_2eproto() {
  delete ProgramProtos::default_instance_;
  delete ProgramProtos_reflection_;
}

void protobuf_AddDesc_ProgramProtos_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_ProgramProto_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023ProgramProtos.proto\032\022ProgramProto.prot"
    "o\"0\n\rProgramProtos\022\037\n\010programs\030\001 \003(\0132\r.P"
    "rogramProtob\006proto3", 99);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ProgramProtos.proto", &protobuf_RegisterTypes);
  ProgramProtos::default_instance_ = new ProgramProtos();
  ProgramProtos::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProgramProtos_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProgramProtos_2eproto {
  StaticDescriptorInitializer_ProgramProtos_2eproto() {
    protobuf_AddDesc_ProgramProtos_2eproto();
  }
} static_descriptor_initializer_ProgramProtos_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProgramProtos::kProgramsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProgramProtos::ProgramProtos()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProgramProtos)
}

void ProgramProtos::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ProgramProtos::ProgramProtos(const ProgramProtos& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ProgramProtos)
}

void ProgramProtos::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

ProgramProtos::~ProgramProtos() {
  // @@protoc_insertion_point(destructor:ProgramProtos)
  SharedDtor();
}

void ProgramProtos::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ProgramProtos::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProgramProtos::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProgramProtos_descriptor_;
}

const ProgramProtos& ProgramProtos::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProgramProtos_2eproto();
  return *default_instance_;
}

ProgramProtos* ProgramProtos::default_instance_ = NULL;

ProgramProtos* ProgramProtos::New(::google::protobuf::Arena* arena) const {
  ProgramProtos* n = new ProgramProtos;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProgramProtos::Clear() {
  programs_.Clear();
}

bool ProgramProtos::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProgramProtos)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ProgramProto programs = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_programs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_programs()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_programs;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ProgramProtos)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProgramProtos)
  return false;
#undef DO_
}

void ProgramProtos::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProgramProtos)
  // repeated .ProgramProto programs = 1;
  for (unsigned int i = 0, n = this->programs_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->programs(i), output);
  }

  // @@protoc_insertion_point(serialize_end:ProgramProtos)
}

::google::protobuf::uint8* ProgramProtos::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ProgramProtos)
  // repeated .ProgramProto programs = 1;
  for (unsigned int i = 0, n = this->programs_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->programs(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:ProgramProtos)
  return target;
}

int ProgramProtos::ByteSize() const {
  int total_size = 0;

  // repeated .ProgramProto programs = 1;
  total_size += 1 * this->programs_size();
  for (int i = 0; i < this->programs_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->programs(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProgramProtos::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ProgramProtos* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ProgramProtos>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProgramProtos::MergeFrom(const ProgramProtos& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  programs_.MergeFrom(from.programs_);
}

void ProgramProtos::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProgramProtos::CopyFrom(const ProgramProtos& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProgramProtos::IsInitialized() const {

  return true;
}

void ProgramProtos::Swap(ProgramProtos* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProgramProtos::InternalSwap(ProgramProtos* other) {
  programs_.UnsafeArenaSwap(&other->programs_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProgramProtos::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProgramProtos_descriptor_;
  metadata.reflection = ProgramProtos_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProgramProtos

// repeated .ProgramProto programs = 1;
int ProgramProtos::programs_size() const {
  return programs_.size();
}
void ProgramProtos::clear_programs() {
  programs_.Clear();
}
const ::ProgramProto& ProgramProtos::programs(int index) const {
  // @@protoc_insertion_point(field_get:ProgramProtos.programs)
  return programs_.Get(index);
}
::ProgramProto* ProgramProtos::mutable_programs(int index) {
  // @@protoc_insertion_point(field_mutable:ProgramProtos.programs)
  return programs_.Mutable(index);
}
::ProgramProto* ProgramProtos::add_programs() {
  // @@protoc_insertion_point(field_add:ProgramProtos.programs)
  return programs_.Add();
}
::google::protobuf::RepeatedPtrField< ::ProgramProto >*
ProgramProtos::mutable_programs() {
  // @@protoc_insertion_point(field_mutable_list:ProgramProtos.programs)
  return &programs_;
}
const ::google::protobuf::RepeatedPtrField< ::ProgramProto >&
ProgramProtos::programs() const {
  // @@protoc_insertion_point(field_list:ProgramProtos.programs)
  return programs_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)