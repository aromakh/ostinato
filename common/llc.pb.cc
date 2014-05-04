// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: llc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "llc.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace OstProto {

namespace {

const ::google::protobuf::Descriptor* Llc_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Llc_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_llc_2eproto() {
  protobuf_AddDesc_llc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "llc.proto");
  GOOGLE_CHECK(file != NULL);
  Llc_descriptor_ = file->message_type(0);
  static const int Llc_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Llc, is_override_dsap_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Llc, is_override_ssap_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Llc, is_override_ctl_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Llc, dsap_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Llc, ssap_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Llc, ctl_),
  };
  Llc_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Llc_descriptor_,
      Llc::default_instance_,
      Llc_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Llc, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Llc, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Llc));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_llc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Llc_descriptor_, &Llc::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_llc_2eproto() {
  delete Llc::default_instance_;
  delete Llc_reflection_;
}

void protobuf_AddDesc_llc_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::OstProto::protobuf_AddDesc_protocol_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tllc.proto\022\010OstProto\032\016protocol.proto\"{\n"
    "\003Llc\022\030\n\020is_override_dsap\030\004 \001(\010\022\030\n\020is_ove"
    "rride_ssap\030\005 \001(\010\022\027\n\017is_override_ctl\030\006 \001("
    "\010\022\014\n\004dsap\030\001 \001(\r\022\014\n\004ssap\030\002 \001(\r\022\013\n\003ctl\030\003 \001"
    "(\r:/\n\003llc\022\022.OstProto.Protocol\030\312\001 \001(\0132\r.O"
    "stProto.Llc", 211);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "llc.proto", &protobuf_RegisterTypes);
  Llc::default_instance_ = new Llc();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::OstProto::Protocol::default_instance(),
    202, 11, false, false,
    &::OstProto::Llc::default_instance());
  Llc::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_llc_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_llc_2eproto {
  StaticDescriptorInitializer_llc_2eproto() {
    protobuf_AddDesc_llc_2eproto();
  }
} static_descriptor_initializer_llc_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Llc::kIsOverrideDsapFieldNumber;
const int Llc::kIsOverrideSsapFieldNumber;
const int Llc::kIsOverrideCtlFieldNumber;
const int Llc::kDsapFieldNumber;
const int Llc::kSsapFieldNumber;
const int Llc::kCtlFieldNumber;
#endif  // !_MSC_VER

Llc::Llc()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Llc::InitAsDefaultInstance() {
}

Llc::Llc(const Llc& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Llc::SharedCtor() {
  _cached_size_ = 0;
  is_override_dsap_ = false;
  is_override_ssap_ = false;
  is_override_ctl_ = false;
  dsap_ = 0u;
  ssap_ = 0u;
  ctl_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Llc::~Llc() {
  SharedDtor();
}

void Llc::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Llc::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Llc::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Llc_descriptor_;
}

const Llc& Llc::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_llc_2eproto();
  return *default_instance_;
}

Llc* Llc::default_instance_ = NULL;

Llc* Llc::New() const {
  return new Llc;
}

void Llc::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    is_override_dsap_ = false;
    is_override_ssap_ = false;
    is_override_ctl_ = false;
    dsap_ = 0u;
    ssap_ = 0u;
    ctl_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Llc::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 dsap = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dsap_)));
          set_has_dsap();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_ssap;
        break;
      }

      // optional uint32 ssap = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ssap:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ssap_)));
          set_has_ssap();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_ctl;
        break;
      }

      // optional uint32 ctl = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ctl:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ctl_)));
          set_has_ctl();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_is_override_dsap;
        break;
      }

      // optional bool is_override_dsap = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_override_dsap:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_dsap_)));
          set_has_is_override_dsap();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_is_override_ssap;
        break;
      }

      // optional bool is_override_ssap = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_override_ssap:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_ssap_)));
          set_has_is_override_ssap();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_is_override_ctl;
        break;
      }

      // optional bool is_override_ctl = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_override_ctl:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_ctl_)));
          set_has_is_override_ctl();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Llc::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 dsap = 1;
  if (has_dsap()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->dsap(), output);
  }

  // optional uint32 ssap = 2;
  if (has_ssap()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->ssap(), output);
  }

  // optional uint32 ctl = 3;
  if (has_ctl()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->ctl(), output);
  }

  // optional bool is_override_dsap = 4;
  if (has_is_override_dsap()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_override_dsap(), output);
  }

  // optional bool is_override_ssap = 5;
  if (has_is_override_ssap()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->is_override_ssap(), output);
  }

  // optional bool is_override_ctl = 6;
  if (has_is_override_ctl()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_override_ctl(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Llc::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 dsap = 1;
  if (has_dsap()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->dsap(), target);
  }

  // optional uint32 ssap = 2;
  if (has_ssap()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->ssap(), target);
  }

  // optional uint32 ctl = 3;
  if (has_ctl()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->ctl(), target);
  }

  // optional bool is_override_dsap = 4;
  if (has_is_override_dsap()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->is_override_dsap(), target);
  }

  // optional bool is_override_ssap = 5;
  if (has_is_override_ssap()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->is_override_ssap(), target);
  }

  // optional bool is_override_ctl = 6;
  if (has_is_override_ctl()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_override_ctl(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Llc::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool is_override_dsap = 4;
    if (has_is_override_dsap()) {
      total_size += 1 + 1;
    }

    // optional bool is_override_ssap = 5;
    if (has_is_override_ssap()) {
      total_size += 1 + 1;
    }

    // optional bool is_override_ctl = 6;
    if (has_is_override_ctl()) {
      total_size += 1 + 1;
    }

    // optional uint32 dsap = 1;
    if (has_dsap()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dsap());
    }

    // optional uint32 ssap = 2;
    if (has_ssap()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ssap());
    }

    // optional uint32 ctl = 3;
    if (has_ctl()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ctl());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Llc::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Llc* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Llc*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Llc::MergeFrom(const Llc& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_is_override_dsap()) {
      set_is_override_dsap(from.is_override_dsap());
    }
    if (from.has_is_override_ssap()) {
      set_is_override_ssap(from.is_override_ssap());
    }
    if (from.has_is_override_ctl()) {
      set_is_override_ctl(from.is_override_ctl());
    }
    if (from.has_dsap()) {
      set_dsap(from.dsap());
    }
    if (from.has_ssap()) {
      set_ssap(from.ssap());
    }
    if (from.has_ctl()) {
      set_ctl(from.ctl());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Llc::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Llc::CopyFrom(const Llc& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Llc::IsInitialized() const {

  return true;
}

void Llc::Swap(Llc* other) {
  if (other != this) {
    std::swap(is_override_dsap_, other->is_override_dsap_);
    std::swap(is_override_ssap_, other->is_override_ssap_);
    std::swap(is_override_ctl_, other->is_override_ctl_);
    std::swap(dsap_, other->dsap_);
    std::swap(ssap_, other->ssap_);
    std::swap(ctl_, other->ctl_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Llc::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Llc_descriptor_;
  metadata.reflection = Llc_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Llc >, 11, false >
  llc(kLlcFieldNumber, ::OstProto::Llc::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

// @@protoc_insertion_point(global_scope)
