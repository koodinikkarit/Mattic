// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Timers.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Timers.pb.h"

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

const ::google::protobuf::Descriptor* Timers_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Timers_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Timers_2eproto() {
  protobuf_AddDesc_Timers_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Timers.proto");
  GOOGLE_CHECK(file != NULL);
  Timers_descriptor_ = file->message_type(0);
  static const int Timers_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timers, timers_),
  };
  Timers_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Timers_descriptor_,
      Timers::default_instance_,
      Timers_offsets_,
      -1,
      -1,
      -1,
      sizeof(Timers),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timers, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timers, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Timers_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Timers_descriptor_, &Timers::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Timers_2eproto() {
  delete Timers::default_instance_;
  delete Timers_reflection_;
}

void protobuf_AddDesc_Timers_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_Timer_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014Timers.proto\032\013Timer.proto\" \n\006Timers\022\026\n"
    "\006timers\030\001 \003(\0132\006.Timerb\006proto3", 69);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Timers.proto", &protobuf_RegisterTypes);
  Timers::default_instance_ = new Timers();
  Timers::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Timers_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Timers_2eproto {
  StaticDescriptorInitializer_Timers_2eproto() {
    protobuf_AddDesc_Timers_2eproto();
  }
} static_descriptor_initializer_Timers_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Timers::kTimersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Timers::Timers()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Timers)
}

void Timers::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Timers::Timers(const Timers& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Timers)
}

void Timers::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

Timers::~Timers() {
  // @@protoc_insertion_point(destructor:Timers)
  SharedDtor();
}

void Timers::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Timers::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Timers::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Timers_descriptor_;
}

const Timers& Timers::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Timers_2eproto();
  return *default_instance_;
}

Timers* Timers::default_instance_ = NULL;

Timers* Timers::New(::google::protobuf::Arena* arena) const {
  Timers* n = new Timers;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Timers::Clear() {
  timers_.Clear();
}

bool Timers::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Timers)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Timer timers = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_timers:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_timers()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_timers;
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
  // @@protoc_insertion_point(parse_success:Timers)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Timers)
  return false;
#undef DO_
}

void Timers::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Timers)
  // repeated .Timer timers = 1;
  for (unsigned int i = 0, n = this->timers_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->timers(i), output);
  }

  // @@protoc_insertion_point(serialize_end:Timers)
}

::google::protobuf::uint8* Timers::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Timers)
  // repeated .Timer timers = 1;
  for (unsigned int i = 0, n = this->timers_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->timers(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Timers)
  return target;
}

int Timers::ByteSize() const {
  int total_size = 0;

  // repeated .Timer timers = 1;
  total_size += 1 * this->timers_size();
  for (int i = 0; i < this->timers_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->timers(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Timers::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Timers* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Timers>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Timers::MergeFrom(const Timers& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  timers_.MergeFrom(from.timers_);
}

void Timers::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Timers::CopyFrom(const Timers& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Timers::IsInitialized() const {

  return true;
}

void Timers::Swap(Timers* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Timers::InternalSwap(Timers* other) {
  timers_.UnsafeArenaSwap(&other->timers_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Timers::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Timers_descriptor_;
  metadata.reflection = Timers_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Timers

// repeated .Timer timers = 1;
int Timers::timers_size() const {
  return timers_.size();
}
void Timers::clear_timers() {
  timers_.Clear();
}
const ::Timer& Timers::timers(int index) const {
  // @@protoc_insertion_point(field_get:Timers.timers)
  return timers_.Get(index);
}
::Timer* Timers::mutable_timers(int index) {
  // @@protoc_insertion_point(field_mutable:Timers.timers)
  return timers_.Mutable(index);
}
::Timer* Timers::add_timers() {
  // @@protoc_insertion_point(field_add:Timers.timers)
  return timers_.Add();
}
::google::protobuf::RepeatedPtrField< ::Timer >*
Timers::mutable_timers() {
  // @@protoc_insertion_point(field_mutable_list:Timers.timers)
  return &timers_;
}
const ::google::protobuf::RepeatedPtrField< ::Timer >&
Timers::timers() const {
  // @@protoc_insertion_point(field_list:Timers.timers)
  return timers_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
