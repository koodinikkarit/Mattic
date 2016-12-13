// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Timer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Timer.pb.h"

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

const ::google::protobuf::Descriptor* Timer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Timer_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Timer_2eproto() {
  protobuf_AddDesc_Timer_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Timer.proto");
  GOOGLE_CHECK(file != NULL);
  Timer_descriptor_ = file->message_type(0);
  static const int Timer_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timer, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timer, programid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timer, program_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timer, repeatinterval_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timer, repeattimes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timer, starttime_),
  };
  Timer_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Timer_descriptor_,
      Timer::default_instance_,
      Timer_offsets_,
      -1,
      -1,
      -1,
      sizeof(Timer),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timer, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timer, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Timer_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Timer_descriptor_, &Timer::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Timer_2eproto() {
  delete Timer::default_instance_;
  delete Timer_reflection_;
}

void protobuf_AddDesc_Timer_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_Program_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013Timer.proto\032\rProgram.proto\"\201\001\n\005Timer\022\n"
    "\n\002id\030\001 \001(\r\022\021\n\tprogramId\030\002 \001(\r\022\031\n\007program"
    "\030\003 \001(\0132\010.Program\022\026\n\016repeatInterval\030\004 \001(\004"
    "\022\023\n\013repeatTimes\030\005 \001(\r\022\021\n\tstartTime\030\006 \001(\004"
    "b\006proto3", 168);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Timer.proto", &protobuf_RegisterTypes);
  Timer::default_instance_ = new Timer();
  Timer::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Timer_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Timer_2eproto {
  StaticDescriptorInitializer_Timer_2eproto() {
    protobuf_AddDesc_Timer_2eproto();
  }
} static_descriptor_initializer_Timer_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Timer::kIdFieldNumber;
const int Timer::kProgramIdFieldNumber;
const int Timer::kProgramFieldNumber;
const int Timer::kRepeatIntervalFieldNumber;
const int Timer::kRepeatTimesFieldNumber;
const int Timer::kStartTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Timer::Timer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Timer)
}

void Timer::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  program_ = const_cast< ::Program*>(&::Program::default_instance());
}

Timer::Timer(const Timer& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Timer)
}

void Timer::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  id_ = 0u;
  programid_ = 0u;
  program_ = NULL;
  repeatinterval_ = GOOGLE_ULONGLONG(0);
  repeattimes_ = 0u;
  starttime_ = GOOGLE_ULONGLONG(0);
}

Timer::~Timer() {
  // @@protoc_insertion_point(destructor:Timer)
  SharedDtor();
}

void Timer::SharedDtor() {
  if (this != default_instance_) {
    delete program_;
  }
}

void Timer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Timer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Timer_descriptor_;
}

const Timer& Timer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Timer_2eproto();
  return *default_instance_;
}

Timer* Timer::default_instance_ = NULL;

Timer* Timer::New(::google::protobuf::Arena* arena) const {
  Timer* n = new Timer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Timer::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Timer*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(id_, programid_);
  ZR_(repeatinterval_, repeattimes_);
  if (GetArenaNoVirtual() == NULL && program_ != NULL) delete program_;
  program_ = NULL;

#undef ZR_HELPER_
#undef ZR_

}

bool Timer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Timer)
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
        if (input->ExpectTag(16)) goto parse_programId;
        break;
      }

      // optional uint32 programId = 2;
      case 2: {
        if (tag == 16) {
         parse_programId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &programid_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_program;
        break;
      }

      // optional .Program program = 3;
      case 3: {
        if (tag == 26) {
         parse_program:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_program()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_repeatInterval;
        break;
      }

      // optional uint64 repeatInterval = 4;
      case 4: {
        if (tag == 32) {
         parse_repeatInterval:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &repeatinterval_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_repeatTimes;
        break;
      }

      // optional uint32 repeatTimes = 5;
      case 5: {
        if (tag == 40) {
         parse_repeatTimes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &repeattimes_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_startTime;
        break;
      }

      // optional uint64 startTime = 6;
      case 6: {
        if (tag == 48) {
         parse_startTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &starttime_)));

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
  // @@protoc_insertion_point(parse_success:Timer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Timer)
  return false;
#undef DO_
}

void Timer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Timer)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional uint32 programId = 2;
  if (this->programid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->programid(), output);
  }

  // optional .Program program = 3;
  if (this->has_program()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->program_, output);
  }

  // optional uint64 repeatInterval = 4;
  if (this->repeatinterval() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->repeatinterval(), output);
  }

  // optional uint32 repeatTimes = 5;
  if (this->repeattimes() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->repeattimes(), output);
  }

  // optional uint64 startTime = 6;
  if (this->starttime() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->starttime(), output);
  }

  // @@protoc_insertion_point(serialize_end:Timer)
}

::google::protobuf::uint8* Timer::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Timer)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // optional uint32 programId = 2;
  if (this->programid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->programid(), target);
  }

  // optional .Program program = 3;
  if (this->has_program()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, *this->program_, target);
  }

  // optional uint64 repeatInterval = 4;
  if (this->repeatinterval() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->repeatinterval(), target);
  }

  // optional uint32 repeatTimes = 5;
  if (this->repeattimes() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->repeattimes(), target);
  }

  // optional uint64 startTime = 6;
  if (this->starttime() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, this->starttime(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Timer)
  return target;
}

int Timer::ByteSize() const {
  int total_size = 0;

  // optional uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // optional uint32 programId = 2;
  if (this->programid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->programid());
  }

  // optional .Program program = 3;
  if (this->has_program()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->program_);
  }

  // optional uint64 repeatInterval = 4;
  if (this->repeatinterval() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->repeatinterval());
  }

  // optional uint32 repeatTimes = 5;
  if (this->repeattimes() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->repeattimes());
  }

  // optional uint64 startTime = 6;
  if (this->starttime() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->starttime());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Timer::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Timer* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Timer>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Timer::MergeFrom(const Timer& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.programid() != 0) {
    set_programid(from.programid());
  }
  if (from.has_program()) {
    mutable_program()->::Program::MergeFrom(from.program());
  }
  if (from.repeatinterval() != 0) {
    set_repeatinterval(from.repeatinterval());
  }
  if (from.repeattimes() != 0) {
    set_repeattimes(from.repeattimes());
  }
  if (from.starttime() != 0) {
    set_starttime(from.starttime());
  }
}

void Timer::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Timer::CopyFrom(const Timer& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Timer::IsInitialized() const {

  return true;
}

void Timer::Swap(Timer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Timer::InternalSwap(Timer* other) {
  std::swap(id_, other->id_);
  std::swap(programid_, other->programid_);
  std::swap(program_, other->program_);
  std::swap(repeatinterval_, other->repeatinterval_);
  std::swap(repeattimes_, other->repeattimes_);
  std::swap(starttime_, other->starttime_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Timer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Timer_descriptor_;
  metadata.reflection = Timer_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Timer

// optional uint32 id = 1;
void Timer::clear_id() {
  id_ = 0u;
}
 ::google::protobuf::uint32 Timer::id() const {
  // @@protoc_insertion_point(field_get:Timer.id)
  return id_;
}
 void Timer::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Timer.id)
}

// optional uint32 programId = 2;
void Timer::clear_programid() {
  programid_ = 0u;
}
 ::google::protobuf::uint32 Timer::programid() const {
  // @@protoc_insertion_point(field_get:Timer.programId)
  return programid_;
}
 void Timer::set_programid(::google::protobuf::uint32 value) {
  
  programid_ = value;
  // @@protoc_insertion_point(field_set:Timer.programId)
}

// optional .Program program = 3;
bool Timer::has_program() const {
  return !_is_default_instance_ && program_ != NULL;
}
void Timer::clear_program() {
  if (GetArenaNoVirtual() == NULL && program_ != NULL) delete program_;
  program_ = NULL;
}
const ::Program& Timer::program() const {
  // @@protoc_insertion_point(field_get:Timer.program)
  return program_ != NULL ? *program_ : *default_instance_->program_;
}
::Program* Timer::mutable_program() {
  
  if (program_ == NULL) {
    program_ = new ::Program;
  }
  // @@protoc_insertion_point(field_mutable:Timer.program)
  return program_;
}
::Program* Timer::release_program() {
  
  ::Program* temp = program_;
  program_ = NULL;
  return temp;
}
void Timer::set_allocated_program(::Program* program) {
  delete program_;
  program_ = program;
  if (program) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Timer.program)
}

// optional uint64 repeatInterval = 4;
void Timer::clear_repeatinterval() {
  repeatinterval_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 Timer::repeatinterval() const {
  // @@protoc_insertion_point(field_get:Timer.repeatInterval)
  return repeatinterval_;
}
 void Timer::set_repeatinterval(::google::protobuf::uint64 value) {
  
  repeatinterval_ = value;
  // @@protoc_insertion_point(field_set:Timer.repeatInterval)
}

// optional uint32 repeatTimes = 5;
void Timer::clear_repeattimes() {
  repeattimes_ = 0u;
}
 ::google::protobuf::uint32 Timer::repeattimes() const {
  // @@protoc_insertion_point(field_get:Timer.repeatTimes)
  return repeattimes_;
}
 void Timer::set_repeattimes(::google::protobuf::uint32 value) {
  
  repeattimes_ = value;
  // @@protoc_insertion_point(field_set:Timer.repeatTimes)
}

// optional uint64 startTime = 6;
void Timer::clear_starttime() {
  starttime_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 Timer::starttime() const {
  // @@protoc_insertion_point(field_get:Timer.startTime)
  return starttime_;
}
 void Timer::set_starttime(::google::protobuf::uint64 value) {
  
  starttime_ = value;
  // @@protoc_insertion_point(field_set:Timer.startTime)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
