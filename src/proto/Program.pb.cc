// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Program.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Program.pb.h"

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

const ::google::protobuf::Descriptor* Program_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Program_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Program_2eproto() {
  protobuf_AddDesc_Program_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Program.proto");
  GOOGLE_CHECK(file != NULL);
  Program_descriptor_ = file->message_type(0);
  static const int Program_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Program, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Program, videoconnection_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Program, kwmconnection_),
  };
  Program_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Program_descriptor_,
      Program::default_instance_,
      Program_offsets_,
      -1,
      -1,
      -1,
      sizeof(Program),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Program, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Program, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Program_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Program_descriptor_, &Program::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Program_2eproto() {
  delete Program::default_instance_;
  delete Program_reflection_;
}

void protobuf_AddDesc_Program_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_VideoConnection_2eproto();
  ::protobuf_AddDesc_KwmConnection_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rProgram.proto\032\025VideoConnection.proto\032\023"
    "KwmConnection.proto\"g\n\007Program\022\n\n\002id\030\001 \001"
    "(\r\022)\n\017videoConnection\030\002 \003(\0132\020.VideoConne"
    "ction\022%\n\rkwmConnection\030\003 \003(\0132\016.KwmConnec"
    "tionb\006proto3", 172);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Program.proto", &protobuf_RegisterTypes);
  Program::default_instance_ = new Program();
  Program::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Program_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Program_2eproto {
  StaticDescriptorInitializer_Program_2eproto() {
    protobuf_AddDesc_Program_2eproto();
  }
} static_descriptor_initializer_Program_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Program::kIdFieldNumber;
const int Program::kVideoConnectionFieldNumber;
const int Program::kKwmConnectionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Program::Program()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Program)
}

void Program::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Program::Program(const Program& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Program)
}

void Program::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  id_ = 0u;
}

Program::~Program() {
  // @@protoc_insertion_point(destructor:Program)
  SharedDtor();
}

void Program::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Program::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Program::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Program_descriptor_;
}

const Program& Program::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Program_2eproto();
  return *default_instance_;
}

Program* Program::default_instance_ = NULL;

Program* Program::New(::google::protobuf::Arena* arena) const {
  Program* n = new Program;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Program::Clear() {
  id_ = 0u;
  videoconnection_.Clear();
  kwmconnection_.Clear();
}

bool Program::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Program)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_videoConnection;
        break;
      }

      // repeated .VideoConnection videoConnection = 2;
      case 2: {
        if (tag == 18) {
         parse_videoConnection:
          DO_(input->IncrementRecursionDepth());
         parse_loop_videoConnection:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_videoconnection()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_videoConnection;
        if (input->ExpectTag(26)) goto parse_loop_kwmConnection;
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      // repeated .KwmConnection kwmConnection = 3;
      case 3: {
        if (tag == 26) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_kwmConnection:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_kwmconnection()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_loop_kwmConnection;
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
  // @@protoc_insertion_point(parse_success:Program)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Program)
  return false;
#undef DO_
}

void Program::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Program)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // repeated .VideoConnection videoConnection = 2;
  for (unsigned int i = 0, n = this->videoconnection_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->videoconnection(i), output);
  }

  // repeated .KwmConnection kwmConnection = 3;
  for (unsigned int i = 0, n = this->kwmconnection_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->kwmconnection(i), output);
  }

  // @@protoc_insertion_point(serialize_end:Program)
}

::google::protobuf::uint8* Program::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Program)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // repeated .VideoConnection videoConnection = 2;
  for (unsigned int i = 0, n = this->videoconnection_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->videoconnection(i), target);
  }

  // repeated .KwmConnection kwmConnection = 3;
  for (unsigned int i = 0, n = this->kwmconnection_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->kwmconnection(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Program)
  return target;
}

int Program::ByteSize() const {
  int total_size = 0;

  // optional uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // repeated .VideoConnection videoConnection = 2;
  total_size += 1 * this->videoconnection_size();
  for (int i = 0; i < this->videoconnection_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->videoconnection(i));
  }

  // repeated .KwmConnection kwmConnection = 3;
  total_size += 1 * this->kwmconnection_size();
  for (int i = 0; i < this->kwmconnection_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->kwmconnection(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Program::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Program* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Program>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Program::MergeFrom(const Program& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  videoconnection_.MergeFrom(from.videoconnection_);
  kwmconnection_.MergeFrom(from.kwmconnection_);
  if (from.id() != 0) {
    set_id(from.id());
  }
}

void Program::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Program::CopyFrom(const Program& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Program::IsInitialized() const {

  return true;
}

void Program::Swap(Program* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Program::InternalSwap(Program* other) {
  std::swap(id_, other->id_);
  videoconnection_.UnsafeArenaSwap(&other->videoconnection_);
  kwmconnection_.UnsafeArenaSwap(&other->kwmconnection_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Program::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Program_descriptor_;
  metadata.reflection = Program_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Program

// optional uint32 id = 1;
void Program::clear_id() {
  id_ = 0u;
}
 ::google::protobuf::uint32 Program::id() const {
  // @@protoc_insertion_point(field_get:Program.id)
  return id_;
}
 void Program::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Program.id)
}

// repeated .VideoConnection videoConnection = 2;
int Program::videoconnection_size() const {
  return videoconnection_.size();
}
void Program::clear_videoconnection() {
  videoconnection_.Clear();
}
const ::VideoConnection& Program::videoconnection(int index) const {
  // @@protoc_insertion_point(field_get:Program.videoConnection)
  return videoconnection_.Get(index);
}
::VideoConnection* Program::mutable_videoconnection(int index) {
  // @@protoc_insertion_point(field_mutable:Program.videoConnection)
  return videoconnection_.Mutable(index);
}
::VideoConnection* Program::add_videoconnection() {
  // @@protoc_insertion_point(field_add:Program.videoConnection)
  return videoconnection_.Add();
}
::google::protobuf::RepeatedPtrField< ::VideoConnection >*
Program::mutable_videoconnection() {
  // @@protoc_insertion_point(field_mutable_list:Program.videoConnection)
  return &videoconnection_;
}
const ::google::protobuf::RepeatedPtrField< ::VideoConnection >&
Program::videoconnection() const {
  // @@protoc_insertion_point(field_list:Program.videoConnection)
  return videoconnection_;
}

// repeated .KwmConnection kwmConnection = 3;
int Program::kwmconnection_size() const {
  return kwmconnection_.size();
}
void Program::clear_kwmconnection() {
  kwmconnection_.Clear();
}
const ::KwmConnection& Program::kwmconnection(int index) const {
  // @@protoc_insertion_point(field_get:Program.kwmConnection)
  return kwmconnection_.Get(index);
}
::KwmConnection* Program::mutable_kwmconnection(int index) {
  // @@protoc_insertion_point(field_mutable:Program.kwmConnection)
  return kwmconnection_.Mutable(index);
}
::KwmConnection* Program::add_kwmconnection() {
  // @@protoc_insertion_point(field_add:Program.kwmConnection)
  return kwmconnection_.Add();
}
::google::protobuf::RepeatedPtrField< ::KwmConnection >*
Program::mutable_kwmconnection() {
  // @@protoc_insertion_point(field_mutable_list:Program.kwmConnection)
  return &kwmconnection_;
}
const ::google::protobuf::RepeatedPtrField< ::KwmConnection >&
Program::kwmconnection() const {
  // @@protoc_insertion_point(field_list:Program.kwmConnection)
  return kwmconnection_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)