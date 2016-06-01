// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MattiRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MattiRequest.pb.h"

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

const ::google::protobuf::Descriptor* MattiRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MattiRequest_reflection_ = NULL;
struct MattiRequestOneofInstance {
  const ::MakeVideoConnection* makevideoconnection_;
  const ::RequestValue* requestvalue_;
}* MattiRequest_default_oneof_instance_ = NULL;

}  // namespace


void protobuf_AssignDesc_MattiRequest_2eproto() {
  protobuf_AddDesc_MattiRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MattiRequest.proto");
  GOOGLE_CHECK(file != NULL);
  MattiRequest_descriptor_ = file->message_type(0);
  static const int MattiRequest_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MattiRequest, ticket_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(MattiRequest_default_oneof_instance_, makevideoconnection_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(MattiRequest_default_oneof_instance_, requestvalue_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MattiRequest, requestMessage_),
  };
  MattiRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MattiRequest_descriptor_,
      MattiRequest::default_instance_,
      MattiRequest_offsets_,
      -1,
      -1,
      -1,
      MattiRequest_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MattiRequest, _oneof_case_[0]),
      sizeof(MattiRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MattiRequest, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MattiRequest, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MattiRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MattiRequest_descriptor_, &MattiRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MattiRequest_2eproto() {
  delete MattiRequest::default_instance_;
  delete MattiRequest_default_oneof_instance_;
  delete MattiRequest_reflection_;
}

void protobuf_AddDesc_MattiRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_RequestValue_2eproto();
  ::protobuf_AddDesc_MakeConnectionRequest_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022MattiRequest.proto\032\022RequestValue.proto"
    "\032\033MakeConnectionRequest.proto\"\214\001\n\014MattiR"
    "equest\022\016\n\006ticket\030\001 \001(\r\0223\n\023makeVideoConne"
    "ction\030\002 \001(\0132\024.MakeVideoConnectionH\000\022%\n\014r"
    "equestValue\030\003 \001(\0132\r.RequestValueH\000B\020\n\016re"
    "questMessageb\006proto3", 220);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MattiRequest.proto", &protobuf_RegisterTypes);
  MattiRequest::default_instance_ = new MattiRequest();
  MattiRequest_default_oneof_instance_ = new MattiRequestOneofInstance();
  MattiRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MattiRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MattiRequest_2eproto {
  StaticDescriptorInitializer_MattiRequest_2eproto() {
    protobuf_AddDesc_MattiRequest_2eproto();
  }
} static_descriptor_initializer_MattiRequest_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MattiRequest::kTicketFieldNumber;
const int MattiRequest::kMakeVideoConnectionFieldNumber;
const int MattiRequest::kRequestValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MattiRequest::MattiRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MattiRequest)
}

void MattiRequest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  MattiRequest_default_oneof_instance_->makevideoconnection_ = const_cast< ::MakeVideoConnection*>(&::MakeVideoConnection::default_instance());
  MattiRequest_default_oneof_instance_->requestvalue_ = const_cast< ::RequestValue*>(&::RequestValue::default_instance());
}

MattiRequest::MattiRequest(const MattiRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MattiRequest)
}

void MattiRequest::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  ticket_ = 0u;
  clear_has_requestMessage();
}

MattiRequest::~MattiRequest() {
  // @@protoc_insertion_point(destructor:MattiRequest)
  SharedDtor();
}

void MattiRequest::SharedDtor() {
  if (has_requestMessage()) {
    clear_requestMessage();
  }
  if (this != default_instance_) {
  }
}

void MattiRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MattiRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MattiRequest_descriptor_;
}

const MattiRequest& MattiRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MattiRequest_2eproto();
  return *default_instance_;
}

MattiRequest* MattiRequest::default_instance_ = NULL;

MattiRequest* MattiRequest::New(::google::protobuf::Arena* arena) const {
  MattiRequest* n = new MattiRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MattiRequest::clear_requestMessage() {
  switch(requestMessage_case()) {
    case kMakeVideoConnection: {
      delete requestMessage_.makevideoconnection_;
      break;
    }
    case kRequestValue: {
      delete requestMessage_.requestvalue_;
      break;
    }
    case REQUESTMESSAGE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = REQUESTMESSAGE_NOT_SET;
}


void MattiRequest::Clear() {
  ticket_ = 0u;
  clear_requestMessage();
}

bool MattiRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MattiRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 ticket = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ticket_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_makeVideoConnection;
        break;
      }

      // optional .MakeVideoConnection makeVideoConnection = 2;
      case 2: {
        if (tag == 18) {
         parse_makeVideoConnection:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_makevideoconnection()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_requestValue;
        break;
      }

      // optional .RequestValue requestValue = 3;
      case 3: {
        if (tag == 26) {
         parse_requestValue:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_requestvalue()));
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
  // @@protoc_insertion_point(parse_success:MattiRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MattiRequest)
  return false;
#undef DO_
}

void MattiRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MattiRequest)
  // optional uint32 ticket = 1;
  if (this->ticket() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->ticket(), output);
  }

  // optional .MakeVideoConnection makeVideoConnection = 2;
  if (has_makevideoconnection()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *requestMessage_.makevideoconnection_, output);
  }

  // optional .RequestValue requestValue = 3;
  if (has_requestvalue()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *requestMessage_.requestvalue_, output);
  }

  // @@protoc_insertion_point(serialize_end:MattiRequest)
}

::google::protobuf::uint8* MattiRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MattiRequest)
  // optional uint32 ticket = 1;
  if (this->ticket() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->ticket(), target);
  }

  // optional .MakeVideoConnection makeVideoConnection = 2;
  if (has_makevideoconnection()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, *requestMessage_.makevideoconnection_, target);
  }

  // optional .RequestValue requestValue = 3;
  if (has_requestvalue()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, *requestMessage_.requestvalue_, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:MattiRequest)
  return target;
}

int MattiRequest::ByteSize() const {
  int total_size = 0;

  // optional uint32 ticket = 1;
  if (this->ticket() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->ticket());
  }

  switch (requestMessage_case()) {
    // optional .MakeVideoConnection makeVideoConnection = 2;
    case kMakeVideoConnection: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *requestMessage_.makevideoconnection_);
      break;
    }
    // optional .RequestValue requestValue = 3;
    case kRequestValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *requestMessage_.requestvalue_);
      break;
    }
    case REQUESTMESSAGE_NOT_SET: {
      break;
    }
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MattiRequest::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const MattiRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const MattiRequest>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MattiRequest::MergeFrom(const MattiRequest& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  switch (from.requestMessage_case()) {
    case kMakeVideoConnection: {
      mutable_makevideoconnection()->::MakeVideoConnection::MergeFrom(from.makevideoconnection());
      break;
    }
    case kRequestValue: {
      mutable_requestvalue()->::RequestValue::MergeFrom(from.requestvalue());
      break;
    }
    case REQUESTMESSAGE_NOT_SET: {
      break;
    }
  }
  if (from.ticket() != 0) {
    set_ticket(from.ticket());
  }
}

void MattiRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MattiRequest::CopyFrom(const MattiRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MattiRequest::IsInitialized() const {

  return true;
}

void MattiRequest::Swap(MattiRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MattiRequest::InternalSwap(MattiRequest* other) {
  std::swap(ticket_, other->ticket_);
  std::swap(requestMessage_, other->requestMessage_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MattiRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MattiRequest_descriptor_;
  metadata.reflection = MattiRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MattiRequest

// optional uint32 ticket = 1;
void MattiRequest::clear_ticket() {
  ticket_ = 0u;
}
 ::google::protobuf::uint32 MattiRequest::ticket() const {
  // @@protoc_insertion_point(field_get:MattiRequest.ticket)
  return ticket_;
}
 void MattiRequest::set_ticket(::google::protobuf::uint32 value) {
  
  ticket_ = value;
  // @@protoc_insertion_point(field_set:MattiRequest.ticket)
}

// optional .MakeVideoConnection makeVideoConnection = 2;
bool MattiRequest::has_makevideoconnection() const {
  return requestMessage_case() == kMakeVideoConnection;
}
void MattiRequest::set_has_makevideoconnection() {
  _oneof_case_[0] = kMakeVideoConnection;
}
void MattiRequest::clear_makevideoconnection() {
  if (has_makevideoconnection()) {
    delete requestMessage_.makevideoconnection_;
    clear_has_requestMessage();
  }
}
 const ::MakeVideoConnection& MattiRequest::makevideoconnection() const {
  // @@protoc_insertion_point(field_get:MattiRequest.makeVideoConnection)
  return has_makevideoconnection()
      ? *requestMessage_.makevideoconnection_
      : ::MakeVideoConnection::default_instance();
}
::MakeVideoConnection* MattiRequest::mutable_makevideoconnection() {
  if (!has_makevideoconnection()) {
    clear_requestMessage();
    set_has_makevideoconnection();
    requestMessage_.makevideoconnection_ = new ::MakeVideoConnection;
  }
  // @@protoc_insertion_point(field_mutable:MattiRequest.makeVideoConnection)
  return requestMessage_.makevideoconnection_;
}
::MakeVideoConnection* MattiRequest::release_makevideoconnection() {
  if (has_makevideoconnection()) {
    clear_has_requestMessage();
    ::MakeVideoConnection* temp = requestMessage_.makevideoconnection_;
    requestMessage_.makevideoconnection_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void MattiRequest::set_allocated_makevideoconnection(::MakeVideoConnection* makevideoconnection) {
  clear_requestMessage();
  if (makevideoconnection) {
    set_has_makevideoconnection();
    requestMessage_.makevideoconnection_ = makevideoconnection;
  }
  // @@protoc_insertion_point(field_set_allocated:MattiRequest.makeVideoConnection)
}

// optional .RequestValue requestValue = 3;
bool MattiRequest::has_requestvalue() const {
  return requestMessage_case() == kRequestValue;
}
void MattiRequest::set_has_requestvalue() {
  _oneof_case_[0] = kRequestValue;
}
void MattiRequest::clear_requestvalue() {
  if (has_requestvalue()) {
    delete requestMessage_.requestvalue_;
    clear_has_requestMessage();
  }
}
 const ::RequestValue& MattiRequest::requestvalue() const {
  // @@protoc_insertion_point(field_get:MattiRequest.requestValue)
  return has_requestvalue()
      ? *requestMessage_.requestvalue_
      : ::RequestValue::default_instance();
}
::RequestValue* MattiRequest::mutable_requestvalue() {
  if (!has_requestvalue()) {
    clear_requestMessage();
    set_has_requestvalue();
    requestMessage_.requestvalue_ = new ::RequestValue;
  }
  // @@protoc_insertion_point(field_mutable:MattiRequest.requestValue)
  return requestMessage_.requestvalue_;
}
::RequestValue* MattiRequest::release_requestvalue() {
  if (has_requestvalue()) {
    clear_has_requestMessage();
    ::RequestValue* temp = requestMessage_.requestvalue_;
    requestMessage_.requestvalue_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void MattiRequest::set_allocated_requestvalue(::RequestValue* requestvalue) {
  clear_requestMessage();
  if (requestvalue) {
    set_has_requestvalue();
    requestMessage_.requestvalue_ = requestvalue;
  }
  // @@protoc_insertion_point(field_set_allocated:MattiRequest.requestValue)
}

bool MattiRequest::has_requestMessage() const {
  return requestMessage_case() != REQUESTMESSAGE_NOT_SET;
}
void MattiRequest::clear_has_requestMessage() {
  _oneof_case_[0] = REQUESTMESSAGE_NOT_SET;
}
MattiRequest::RequestMessageCase MattiRequest::requestMessage_case() const {
  return MattiRequest::RequestMessageCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)