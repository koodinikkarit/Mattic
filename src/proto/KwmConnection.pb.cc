// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: KwmConnection.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "KwmConnection.pb.h"

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

const ::google::protobuf::Descriptor* KwmConnection_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  KwmConnection_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_KwmConnection_2eproto() {
  protobuf_AddDesc_KwmConnection_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "KwmConnection.proto");
  GOOGLE_CHECK(file != NULL);
  KwmConnection_descriptor_ = file->message_type(0);
  static const int KwmConnection_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KwmConnection, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KwmConnection, cpu_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KwmConnection, con_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KwmConnection, matrixid_),
  };
  KwmConnection_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      KwmConnection_descriptor_,
      KwmConnection::default_instance_,
      KwmConnection_offsets_,
      -1,
      -1,
      -1,
      sizeof(KwmConnection),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KwmConnection, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KwmConnection, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_KwmConnection_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      KwmConnection_descriptor_, &KwmConnection::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_KwmConnection_2eproto() {
  delete KwmConnection::default_instance_;
  delete KwmConnection_reflection_;
}

void protobuf_AddDesc_KwmConnection_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023KwmConnection.proto\"G\n\rKwmConnection\022\n"
    "\n\002id\030\001 \001(\r\022\013\n\003cpu\030\002 \001(\r\022\013\n\003con\030\003 \001(\r\022\020\n\010"
    "matrixId\030\004 \001(\rb\006proto3", 102);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "KwmConnection.proto", &protobuf_RegisterTypes);
  KwmConnection::default_instance_ = new KwmConnection();
  KwmConnection::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_KwmConnection_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_KwmConnection_2eproto {
  StaticDescriptorInitializer_KwmConnection_2eproto() {
    protobuf_AddDesc_KwmConnection_2eproto();
  }
} static_descriptor_initializer_KwmConnection_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int KwmConnection::kIdFieldNumber;
const int KwmConnection::kCpuFieldNumber;
const int KwmConnection::kConFieldNumber;
const int KwmConnection::kMatrixIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

KwmConnection::KwmConnection()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:KwmConnection)
}

void KwmConnection::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

KwmConnection::KwmConnection(const KwmConnection& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:KwmConnection)
}

void KwmConnection::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  id_ = 0u;
  cpu_ = 0u;
  con_ = 0u;
  matrixid_ = 0u;
}

KwmConnection::~KwmConnection() {
  // @@protoc_insertion_point(destructor:KwmConnection)
  SharedDtor();
}

void KwmConnection::SharedDtor() {
  if (this != default_instance_) {
  }
}

void KwmConnection::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KwmConnection::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return KwmConnection_descriptor_;
}

const KwmConnection& KwmConnection::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_KwmConnection_2eproto();
  return *default_instance_;
}

KwmConnection* KwmConnection::default_instance_ = NULL;

KwmConnection* KwmConnection::New(::google::protobuf::Arena* arena) const {
  KwmConnection* n = new KwmConnection;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void KwmConnection::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<KwmConnection*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(id_, matrixid_);

#undef ZR_HELPER_
#undef ZR_

}

bool KwmConnection::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:KwmConnection)
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
        if (input->ExpectTag(16)) goto parse_cpu;
        break;
      }

      // optional uint32 cpu = 2;
      case 2: {
        if (tag == 16) {
         parse_cpu:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cpu_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_con;
        break;
      }

      // optional uint32 con = 3;
      case 3: {
        if (tag == 24) {
         parse_con:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &con_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_matrixId;
        break;
      }

      // optional uint32 matrixId = 4;
      case 4: {
        if (tag == 32) {
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
  // @@protoc_insertion_point(parse_success:KwmConnection)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:KwmConnection)
  return false;
#undef DO_
}

void KwmConnection::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:KwmConnection)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional uint32 cpu = 2;
  if (this->cpu() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->cpu(), output);
  }

  // optional uint32 con = 3;
  if (this->con() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->con(), output);
  }

  // optional uint32 matrixId = 4;
  if (this->matrixid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->matrixid(), output);
  }

  // @@protoc_insertion_point(serialize_end:KwmConnection)
}

::google::protobuf::uint8* KwmConnection::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:KwmConnection)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // optional uint32 cpu = 2;
  if (this->cpu() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->cpu(), target);
  }

  // optional uint32 con = 3;
  if (this->con() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->con(), target);
  }

  // optional uint32 matrixId = 4;
  if (this->matrixid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->matrixid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:KwmConnection)
  return target;
}

int KwmConnection::ByteSize() const {
  int total_size = 0;

  // optional uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // optional uint32 cpu = 2;
  if (this->cpu() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cpu());
  }

  // optional uint32 con = 3;
  if (this->con() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->con());
  }

  // optional uint32 matrixId = 4;
  if (this->matrixid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->matrixid());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KwmConnection::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const KwmConnection* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const KwmConnection>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void KwmConnection::MergeFrom(const KwmConnection& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.cpu() != 0) {
    set_cpu(from.cpu());
  }
  if (from.con() != 0) {
    set_con(from.con());
  }
  if (from.matrixid() != 0) {
    set_matrixid(from.matrixid());
  }
}

void KwmConnection::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KwmConnection::CopyFrom(const KwmConnection& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KwmConnection::IsInitialized() const {

  return true;
}

void KwmConnection::Swap(KwmConnection* other) {
  if (other == this) return;
  InternalSwap(other);
}
void KwmConnection::InternalSwap(KwmConnection* other) {
  std::swap(id_, other->id_);
  std::swap(cpu_, other->cpu_);
  std::swap(con_, other->con_);
  std::swap(matrixid_, other->matrixid_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata KwmConnection::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = KwmConnection_descriptor_;
  metadata.reflection = KwmConnection_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// KwmConnection

// optional uint32 id = 1;
void KwmConnection::clear_id() {
  id_ = 0u;
}
 ::google::protobuf::uint32 KwmConnection::id() const {
  // @@protoc_insertion_point(field_get:KwmConnection.id)
  return id_;
}
 void KwmConnection::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:KwmConnection.id)
}

// optional uint32 cpu = 2;
void KwmConnection::clear_cpu() {
  cpu_ = 0u;
}
 ::google::protobuf::uint32 KwmConnection::cpu() const {
  // @@protoc_insertion_point(field_get:KwmConnection.cpu)
  return cpu_;
}
 void KwmConnection::set_cpu(::google::protobuf::uint32 value) {
  
  cpu_ = value;
  // @@protoc_insertion_point(field_set:KwmConnection.cpu)
}

// optional uint32 con = 3;
void KwmConnection::clear_con() {
  con_ = 0u;
}
 ::google::protobuf::uint32 KwmConnection::con() const {
  // @@protoc_insertion_point(field_get:KwmConnection.con)
  return con_;
}
 void KwmConnection::set_con(::google::protobuf::uint32 value) {
  
  con_ = value;
  // @@protoc_insertion_point(field_set:KwmConnection.con)
}

// optional uint32 matrixId = 4;
void KwmConnection::clear_matrixid() {
  matrixid_ = 0u;
}
 ::google::protobuf::uint32 KwmConnection::matrixid() const {
  // @@protoc_insertion_point(field_get:KwmConnection.matrixId)
  return matrixid_;
}
 void KwmConnection::set_matrixid(::google::protobuf::uint32 value) {
  
  matrixid_ = value;
  // @@protoc_insertion_point(field_set:KwmConnection.matrixId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
