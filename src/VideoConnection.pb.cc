// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VideoConnection.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "VideoConnection.pb.h"

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

const ::google::protobuf::Descriptor* VideoConnection_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  VideoConnection_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_VideoConnection_2eproto() {
  protobuf_AddDesc_VideoConnection_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "VideoConnection.proto");
  GOOGLE_CHECK(file != NULL);
  VideoConnection_descriptor_ = file->message_type(0);
  static const int VideoConnection_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VideoConnection, cpu_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VideoConnection, con_),
  };
  VideoConnection_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      VideoConnection_descriptor_,
      VideoConnection::default_instance_,
      VideoConnection_offsets_,
      -1,
      -1,
      -1,
      sizeof(VideoConnection),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VideoConnection, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VideoConnection, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_VideoConnection_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      VideoConnection_descriptor_, &VideoConnection::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_VideoConnection_2eproto() {
  delete VideoConnection::default_instance_;
  delete VideoConnection_reflection_;
}

void protobuf_AddDesc_VideoConnection_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025VideoConnection.proto\"+\n\017VideoConnecti"
    "on\022\013\n\003cpu\030\001 \001(\r\022\013\n\003con\030\002 \001(\rb\006proto3", 76);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "VideoConnection.proto", &protobuf_RegisterTypes);
  VideoConnection::default_instance_ = new VideoConnection();
  VideoConnection::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_VideoConnection_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_VideoConnection_2eproto {
  StaticDescriptorInitializer_VideoConnection_2eproto() {
    protobuf_AddDesc_VideoConnection_2eproto();
  }
} static_descriptor_initializer_VideoConnection_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VideoConnection::kCpuFieldNumber;
const int VideoConnection::kConFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VideoConnection::VideoConnection()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:VideoConnection)
}

void VideoConnection::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

VideoConnection::VideoConnection(const VideoConnection& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:VideoConnection)
}

void VideoConnection::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  cpu_ = 0u;
  con_ = 0u;
}

VideoConnection::~VideoConnection() {
  // @@protoc_insertion_point(destructor:VideoConnection)
  SharedDtor();
}

void VideoConnection::SharedDtor() {
  if (this != default_instance_) {
  }
}

void VideoConnection::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VideoConnection::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VideoConnection_descriptor_;
}

const VideoConnection& VideoConnection::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_VideoConnection_2eproto();
  return *default_instance_;
}

VideoConnection* VideoConnection::default_instance_ = NULL;

VideoConnection* VideoConnection::New(::google::protobuf::Arena* arena) const {
  VideoConnection* n = new VideoConnection;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VideoConnection::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<VideoConnection*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(cpu_, con_);

#undef ZR_HELPER_
#undef ZR_

}

bool VideoConnection::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VideoConnection)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 cpu = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cpu_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_con;
        break;
      }

      // optional uint32 con = 2;
      case 2: {
        if (tag == 16) {
         parse_con:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &con_)));

        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:VideoConnection)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VideoConnection)
  return false;
#undef DO_
}

void VideoConnection::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VideoConnection)
  // optional uint32 cpu = 1;
  if (this->cpu() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->cpu(), output);
  }

  // optional uint32 con = 2;
  if (this->con() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->con(), output);
  }

  // @@protoc_insertion_point(serialize_end:VideoConnection)
}

::google::protobuf::uint8* VideoConnection::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:VideoConnection)
  // optional uint32 cpu = 1;
  if (this->cpu() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->cpu(), target);
  }

  // optional uint32 con = 2;
  if (this->con() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->con(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:VideoConnection)
  return target;
}

int VideoConnection::ByteSize() const {
  int total_size = 0;

  // optional uint32 cpu = 1;
  if (this->cpu() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cpu());
  }

  // optional uint32 con = 2;
  if (this->con() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->con());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VideoConnection::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const VideoConnection* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const VideoConnection>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void VideoConnection::MergeFrom(const VideoConnection& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.cpu() != 0) {
    set_cpu(from.cpu());
  }
  if (from.con() != 0) {
    set_con(from.con());
  }
}

void VideoConnection::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VideoConnection::CopyFrom(const VideoConnection& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VideoConnection::IsInitialized() const {

  return true;
}

void VideoConnection::Swap(VideoConnection* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VideoConnection::InternalSwap(VideoConnection* other) {
  std::swap(cpu_, other->cpu_);
  std::swap(con_, other->con_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VideoConnection::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = VideoConnection_descriptor_;
  metadata.reflection = VideoConnection_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VideoConnection

// optional uint32 cpu = 1;
void VideoConnection::clear_cpu() {
  cpu_ = 0u;
}
 ::google::protobuf::uint32 VideoConnection::cpu() const {
  // @@protoc_insertion_point(field_get:VideoConnection.cpu)
  return cpu_;
}
 void VideoConnection::set_cpu(::google::protobuf::uint32 value) {
  
  cpu_ = value;
  // @@protoc_insertion_point(field_set:VideoConnection.cpu)
}

// optional uint32 con = 2;
void VideoConnection::clear_con() {
  con_ = 0u;
}
 ::google::protobuf::uint32 VideoConnection::con() const {
  // @@protoc_insertion_point(field_get:VideoConnection.con)
  return con_;
}
 void VideoConnection::set_con(::google::protobuf::uint32 value) {
  
  con_ = value;
  // @@protoc_insertion_point(field_set:VideoConnection.con)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)