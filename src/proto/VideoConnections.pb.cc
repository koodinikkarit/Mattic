// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VideoConnections.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "VideoConnections.pb.h"

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

const ::google::protobuf::Descriptor* VideoConnections_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  VideoConnections_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_VideoConnections_2eproto() {
  protobuf_AddDesc_VideoConnections_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "VideoConnections.proto");
  GOOGLE_CHECK(file != NULL);
  VideoConnections_descriptor_ = file->message_type(0);
  static const int VideoConnections_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VideoConnections, videoconnections_),
  };
  VideoConnections_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      VideoConnections_descriptor_,
      VideoConnections::default_instance_,
      VideoConnections_offsets_,
      -1,
      -1,
      -1,
      sizeof(VideoConnections),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VideoConnections, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VideoConnections, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_VideoConnections_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      VideoConnections_descriptor_, &VideoConnections::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_VideoConnections_2eproto() {
  delete VideoConnections::default_instance_;
  delete VideoConnections_reflection_;
}

void protobuf_AddDesc_VideoConnections_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_VideoConnection_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026VideoConnections.proto\032\025VideoConnectio"
    "n.proto\">\n\020VideoConnections\022*\n\020videoConn"
    "ections\030\001 \003(\0132\020.VideoConnectionb\006proto3", 119);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "VideoConnections.proto", &protobuf_RegisterTypes);
  VideoConnections::default_instance_ = new VideoConnections();
  VideoConnections::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_VideoConnections_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_VideoConnections_2eproto {
  StaticDescriptorInitializer_VideoConnections_2eproto() {
    protobuf_AddDesc_VideoConnections_2eproto();
  }
} static_descriptor_initializer_VideoConnections_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VideoConnections::kVideoConnectionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VideoConnections::VideoConnections()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:VideoConnections)
}

void VideoConnections::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

VideoConnections::VideoConnections(const VideoConnections& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:VideoConnections)
}

void VideoConnections::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

VideoConnections::~VideoConnections() {
  // @@protoc_insertion_point(destructor:VideoConnections)
  SharedDtor();
}

void VideoConnections::SharedDtor() {
  if (this != default_instance_) {
  }
}

void VideoConnections::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VideoConnections::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VideoConnections_descriptor_;
}

const VideoConnections& VideoConnections::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_VideoConnections_2eproto();
  return *default_instance_;
}

VideoConnections* VideoConnections::default_instance_ = NULL;

VideoConnections* VideoConnections::New(::google::protobuf::Arena* arena) const {
  VideoConnections* n = new VideoConnections;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VideoConnections::Clear() {
  videoconnections_.Clear();
}

bool VideoConnections::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VideoConnections)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .VideoConnection videoConnections = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_videoConnections:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_videoconnections()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_videoConnections;
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
  // @@protoc_insertion_point(parse_success:VideoConnections)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VideoConnections)
  return false;
#undef DO_
}

void VideoConnections::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VideoConnections)
  // repeated .VideoConnection videoConnections = 1;
  for (unsigned int i = 0, n = this->videoconnections_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->videoconnections(i), output);
  }

  // @@protoc_insertion_point(serialize_end:VideoConnections)
}

::google::protobuf::uint8* VideoConnections::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:VideoConnections)
  // repeated .VideoConnection videoConnections = 1;
  for (unsigned int i = 0, n = this->videoconnections_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->videoconnections(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VideoConnections)
  return target;
}

int VideoConnections::ByteSize() const {
  int total_size = 0;

  // repeated .VideoConnection videoConnections = 1;
  total_size += 1 * this->videoconnections_size();
  for (int i = 0; i < this->videoconnections_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->videoconnections(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VideoConnections::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const VideoConnections* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const VideoConnections>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void VideoConnections::MergeFrom(const VideoConnections& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  videoconnections_.MergeFrom(from.videoconnections_);
}

void VideoConnections::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VideoConnections::CopyFrom(const VideoConnections& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VideoConnections::IsInitialized() const {

  return true;
}

void VideoConnections::Swap(VideoConnections* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VideoConnections::InternalSwap(VideoConnections* other) {
  videoconnections_.UnsafeArenaSwap(&other->videoconnections_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VideoConnections::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = VideoConnections_descriptor_;
  metadata.reflection = VideoConnections_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VideoConnections

// repeated .VideoConnection videoConnections = 1;
int VideoConnections::videoconnections_size() const {
  return videoconnections_.size();
}
void VideoConnections::clear_videoconnections() {
  videoconnections_.Clear();
}
const ::VideoConnection& VideoConnections::videoconnections(int index) const {
  // @@protoc_insertion_point(field_get:VideoConnections.videoConnections)
  return videoconnections_.Get(index);
}
::VideoConnection* VideoConnections::mutable_videoconnections(int index) {
  // @@protoc_insertion_point(field_mutable:VideoConnections.videoConnections)
  return videoconnections_.Mutable(index);
}
::VideoConnection* VideoConnections::add_videoconnections() {
  // @@protoc_insertion_point(field_add:VideoConnections.videoConnections)
  return videoconnections_.Add();
}
::google::protobuf::RepeatedPtrField< ::VideoConnection >*
VideoConnections::mutable_videoconnections() {
  // @@protoc_insertion_point(field_mutable_list:VideoConnections.videoConnections)
  return &videoconnections_;
}
const ::google::protobuf::RepeatedPtrField< ::VideoConnection >&
VideoConnections::videoconnections() const {
  // @@protoc_insertion_point(field_list:VideoConnections.videoConnections)
  return videoconnections_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)