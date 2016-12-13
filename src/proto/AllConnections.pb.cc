// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AllConnections.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AllConnections.pb.h"

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

const ::google::protobuf::Descriptor* AllConnections_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AllConnections_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_AllConnections_2eproto() {
  protobuf_AddDesc_AllConnections_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "AllConnections.proto");
  GOOGLE_CHECK(file != NULL);
  AllConnections_descriptor_ = file->message_type(0);
  static const int AllConnections_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllConnections, videoconnections_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllConnections, kwmconnections_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllConnections, matrixid_),
  };
  AllConnections_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AllConnections_descriptor_,
      AllConnections::default_instance_,
      AllConnections_offsets_,
      -1,
      -1,
      -1,
      sizeof(AllConnections),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllConnections, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllConnections, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_AllConnections_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AllConnections_descriptor_, &AllConnections::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_AllConnections_2eproto() {
  delete AllConnections::default_instance_;
  delete AllConnections_reflection_;
}

void protobuf_AddDesc_AllConnections_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024AllConnections.proto\"T\n\016AllConnections"
    "\022\030\n\020videoConnections\030\001 \003(\r\022\026\n\016kwmConnect"
    "ions\030\002 \003(\r\022\020\n\010matrixId\030\003 \001(\rb\006proto3", 116);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AllConnections.proto", &protobuf_RegisterTypes);
  AllConnections::default_instance_ = new AllConnections();
  AllConnections::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AllConnections_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AllConnections_2eproto {
  StaticDescriptorInitializer_AllConnections_2eproto() {
    protobuf_AddDesc_AllConnections_2eproto();
  }
} static_descriptor_initializer_AllConnections_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AllConnections::kVideoConnectionsFieldNumber;
const int AllConnections::kKwmConnectionsFieldNumber;
const int AllConnections::kMatrixIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AllConnections::AllConnections()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:AllConnections)
}

void AllConnections::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AllConnections::AllConnections(const AllConnections& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:AllConnections)
}

void AllConnections::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  matrixid_ = 0u;
}

AllConnections::~AllConnections() {
  // @@protoc_insertion_point(destructor:AllConnections)
  SharedDtor();
}

void AllConnections::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AllConnections::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AllConnections::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AllConnections_descriptor_;
}

const AllConnections& AllConnections::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_AllConnections_2eproto();
  return *default_instance_;
}

AllConnections* AllConnections::default_instance_ = NULL;

AllConnections* AllConnections::New(::google::protobuf::Arena* arena) const {
  AllConnections* n = new AllConnections;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AllConnections::Clear() {
  matrixid_ = 0u;
  videoconnections_.Clear();
  kwmconnections_.Clear();
}

bool AllConnections::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:AllConnections)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 videoConnections = 1;
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_videoconnections())));
        } else if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 10, input, this->mutable_videoconnections())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_kwmConnections;
        break;
      }

      // repeated uint32 kwmConnections = 2;
      case 2: {
        if (tag == 18) {
         parse_kwmConnections:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_kwmconnections())));
        } else if (tag == 16) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 18, input, this->mutable_kwmconnections())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_matrixId;
        break;
      }

      // optional uint32 matrixId = 3;
      case 3: {
        if (tag == 24) {
         parse_matrixId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &matrixid_)));

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
  // @@protoc_insertion_point(parse_success:AllConnections)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:AllConnections)
  return false;
#undef DO_
}

void AllConnections::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:AllConnections)
  // repeated uint32 videoConnections = 1;
  if (this->videoconnections_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_videoconnections_cached_byte_size_);
  }
  for (int i = 0; i < this->videoconnections_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->videoconnections(i), output);
  }

  // repeated uint32 kwmConnections = 2;
  if (this->kwmconnections_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_kwmconnections_cached_byte_size_);
  }
  for (int i = 0; i < this->kwmconnections_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->kwmconnections(i), output);
  }

  // optional uint32 matrixId = 3;
  if (this->matrixid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->matrixid(), output);
  }

  // @@protoc_insertion_point(serialize_end:AllConnections)
}

::google::protobuf::uint8* AllConnections::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:AllConnections)
  // repeated uint32 videoConnections = 1;
  if (this->videoconnections_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _videoconnections_cached_byte_size_, target);
  }
  for (int i = 0; i < this->videoconnections_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->videoconnections(i), target);
  }

  // repeated uint32 kwmConnections = 2;
  if (this->kwmconnections_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _kwmconnections_cached_byte_size_, target);
  }
  for (int i = 0; i < this->kwmconnections_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->kwmconnections(i), target);
  }

  // optional uint32 matrixId = 3;
  if (this->matrixid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->matrixid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:AllConnections)
  return target;
}

int AllConnections::ByteSize() const {
  int total_size = 0;

  // optional uint32 matrixId = 3;
  if (this->matrixid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->matrixid());
  }

  // repeated uint32 videoConnections = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->videoconnections_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->videoconnections(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _videoconnections_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint32 kwmConnections = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->kwmconnections_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->kwmconnections(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _kwmconnections_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AllConnections::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const AllConnections* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AllConnections>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AllConnections::MergeFrom(const AllConnections& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  videoconnections_.MergeFrom(from.videoconnections_);
  kwmconnections_.MergeFrom(from.kwmconnections_);
  if (from.matrixid() != 0) {
    set_matrixid(from.matrixid());
  }
}

void AllConnections::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AllConnections::CopyFrom(const AllConnections& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AllConnections::IsInitialized() const {

  return true;
}

void AllConnections::Swap(AllConnections* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AllConnections::InternalSwap(AllConnections* other) {
  videoconnections_.UnsafeArenaSwap(&other->videoconnections_);
  kwmconnections_.UnsafeArenaSwap(&other->kwmconnections_);
  std::swap(matrixid_, other->matrixid_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AllConnections::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AllConnections_descriptor_;
  metadata.reflection = AllConnections_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AllConnections

// repeated uint32 videoConnections = 1;
int AllConnections::videoconnections_size() const {
  return videoconnections_.size();
}
void AllConnections::clear_videoconnections() {
  videoconnections_.Clear();
}
 ::google::protobuf::uint32 AllConnections::videoconnections(int index) const {
  // @@protoc_insertion_point(field_get:AllConnections.videoConnections)
  return videoconnections_.Get(index);
}
 void AllConnections::set_videoconnections(int index, ::google::protobuf::uint32 value) {
  videoconnections_.Set(index, value);
  // @@protoc_insertion_point(field_set:AllConnections.videoConnections)
}
 void AllConnections::add_videoconnections(::google::protobuf::uint32 value) {
  videoconnections_.Add(value);
  // @@protoc_insertion_point(field_add:AllConnections.videoConnections)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
AllConnections::videoconnections() const {
  // @@protoc_insertion_point(field_list:AllConnections.videoConnections)
  return videoconnections_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
AllConnections::mutable_videoconnections() {
  // @@protoc_insertion_point(field_mutable_list:AllConnections.videoConnections)
  return &videoconnections_;
}

// repeated uint32 kwmConnections = 2;
int AllConnections::kwmconnections_size() const {
  return kwmconnections_.size();
}
void AllConnections::clear_kwmconnections() {
  kwmconnections_.Clear();
}
 ::google::protobuf::uint32 AllConnections::kwmconnections(int index) const {
  // @@protoc_insertion_point(field_get:AllConnections.kwmConnections)
  return kwmconnections_.Get(index);
}
 void AllConnections::set_kwmconnections(int index, ::google::protobuf::uint32 value) {
  kwmconnections_.Set(index, value);
  // @@protoc_insertion_point(field_set:AllConnections.kwmConnections)
}
 void AllConnections::add_kwmconnections(::google::protobuf::uint32 value) {
  kwmconnections_.Add(value);
  // @@protoc_insertion_point(field_add:AllConnections.kwmConnections)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
AllConnections::kwmconnections() const {
  // @@protoc_insertion_point(field_list:AllConnections.kwmConnections)
  return kwmconnections_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
AllConnections::mutable_kwmconnections() {
  // @@protoc_insertion_point(field_mutable_list:AllConnections.kwmConnections)
  return &kwmconnections_;
}

// optional uint32 matrixId = 3;
void AllConnections::clear_matrixid() {
  matrixid_ = 0u;
}
 ::google::protobuf::uint32 AllConnections::matrixid() const {
  // @@protoc_insertion_point(field_get:AllConnections.matrixId)
  return matrixid_;
}
 void AllConnections::set_matrixid(::google::protobuf::uint32 value) {
  
  matrixid_ = value;
  // @@protoc_insertion_point(field_set:AllConnections.matrixId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)