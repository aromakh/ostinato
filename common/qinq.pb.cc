// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: qinq.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "qinq.pb.h"

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

const ::google::protobuf::Descriptor* Qinq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Qinq_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_qinq_2eproto() {
  protobuf_AddDesc_qinq_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "qinq.proto");
  GOOGLE_CHECK(file != NULL);
  Qinq_descriptor_ = file->message_type(0);
  static const int Qinq_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Qinq, is_override_tpid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Qinq, is_override_vlan_tpid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Qinq, qinq_tpid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Qinq, qinq_vlan_tag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Qinq, vlan_tpid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Qinq, vlan_vlan_tag_),
  };
  Qinq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Qinq_descriptor_,
      Qinq::default_instance_,
      Qinq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Qinq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Qinq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Qinq));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_qinq_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Qinq_descriptor_, &Qinq::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_qinq_2eproto() {
  delete Qinq::default_instance_;
  delete Qinq_reflection_;
}

void protobuf_AddDesc_qinq_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::OstProto::protobuf_AddDesc_protocol_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nqinq.proto\022\010OstProto\032\016protocol.proto\"\223"
    "\001\n\004Qinq\022\030\n\020is_override_tpid\030\001 \001(\010\022\035\n\025is_"
    "override_vlan_tpid\030\002 \001(\010\022\021\n\tqinq_tpid\030\003 "
    "\001(\r\022\025\n\rqinq_vlan_tag\030\004 \001(\r\022\021\n\tvlan_tpid\030"
    "\005 \001(\r\022\025\n\rvlan_vlan_tag\030\006 \001(\r:1\n\004qinq\022\022.O"
    "stProto.Protocol\030\322\001 \001(\0132\016.OstProto.Qinq", 239);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "qinq.proto", &protobuf_RegisterTypes);
  Qinq::default_instance_ = new Qinq();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::OstProto::Protocol::default_instance(),
    210, 11, false, false,
    &::OstProto::Qinq::default_instance());
  Qinq::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_qinq_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_qinq_2eproto {
  StaticDescriptorInitializer_qinq_2eproto() {
    protobuf_AddDesc_qinq_2eproto();
  }
} static_descriptor_initializer_qinq_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Qinq::kIsOverrideTpidFieldNumber;
const int Qinq::kIsOverrideVlanTpidFieldNumber;
const int Qinq::kQinqTpidFieldNumber;
const int Qinq::kQinqVlanTagFieldNumber;
const int Qinq::kVlanTpidFieldNumber;
const int Qinq::kVlanVlanTagFieldNumber;
#endif  // !_MSC_VER

Qinq::Qinq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Qinq::InitAsDefaultInstance() {
}

Qinq::Qinq(const Qinq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Qinq::SharedCtor() {
  _cached_size_ = 0;
  is_override_tpid_ = false;
  is_override_vlan_tpid_ = false;
  qinq_tpid_ = 0u;
  qinq_vlan_tag_ = 0u;
  vlan_tpid_ = 0u;
  vlan_vlan_tag_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Qinq::~Qinq() {
  SharedDtor();
}

void Qinq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Qinq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Qinq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Qinq_descriptor_;
}

const Qinq& Qinq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_qinq_2eproto();
  return *default_instance_;
}

Qinq* Qinq::default_instance_ = NULL;

Qinq* Qinq::New() const {
  return new Qinq;
}

void Qinq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    is_override_tpid_ = false;
    is_override_vlan_tpid_ = false;
    qinq_tpid_ = 0u;
    qinq_vlan_tag_ = 0u;
    vlan_tpid_ = 0u;
    vlan_vlan_tag_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Qinq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool is_override_tpid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_tpid_)));
          set_has_is_override_tpid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_is_override_vlan_tpid;
        break;
      }

      // optional bool is_override_vlan_tpid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_override_vlan_tpid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_vlan_tpid_)));
          set_has_is_override_vlan_tpid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_qinq_tpid;
        break;
      }

      // optional uint32 qinq_tpid = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_qinq_tpid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &qinq_tpid_)));
          set_has_qinq_tpid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_qinq_vlan_tag;
        break;
      }

      // optional uint32 qinq_vlan_tag = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_qinq_vlan_tag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &qinq_vlan_tag_)));
          set_has_qinq_vlan_tag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_vlan_tpid;
        break;
      }

      // optional uint32 vlan_tpid = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_vlan_tpid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &vlan_tpid_)));
          set_has_vlan_tpid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_vlan_vlan_tag;
        break;
      }

      // optional uint32 vlan_vlan_tag = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_vlan_vlan_tag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &vlan_vlan_tag_)));
          set_has_vlan_vlan_tag();
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

void Qinq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool is_override_tpid = 1;
  if (has_is_override_tpid()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_override_tpid(), output);
  }

  // optional bool is_override_vlan_tpid = 2;
  if (has_is_override_vlan_tpid()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_override_vlan_tpid(), output);
  }

  // optional uint32 qinq_tpid = 3;
  if (has_qinq_tpid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->qinq_tpid(), output);
  }

  // optional uint32 qinq_vlan_tag = 4;
  if (has_qinq_vlan_tag()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->qinq_vlan_tag(), output);
  }

  // optional uint32 vlan_tpid = 5;
  if (has_vlan_tpid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->vlan_tpid(), output);
  }

  // optional uint32 vlan_vlan_tag = 6;
  if (has_vlan_vlan_tag()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->vlan_vlan_tag(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Qinq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional bool is_override_tpid = 1;
  if (has_is_override_tpid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_override_tpid(), target);
  }

  // optional bool is_override_vlan_tpid = 2;
  if (has_is_override_vlan_tpid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->is_override_vlan_tpid(), target);
  }

  // optional uint32 qinq_tpid = 3;
  if (has_qinq_tpid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->qinq_tpid(), target);
  }

  // optional uint32 qinq_vlan_tag = 4;
  if (has_qinq_vlan_tag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->qinq_vlan_tag(), target);
  }

  // optional uint32 vlan_tpid = 5;
  if (has_vlan_tpid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->vlan_tpid(), target);
  }

  // optional uint32 vlan_vlan_tag = 6;
  if (has_vlan_vlan_tag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->vlan_vlan_tag(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Qinq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool is_override_tpid = 1;
    if (has_is_override_tpid()) {
      total_size += 1 + 1;
    }

    // optional bool is_override_vlan_tpid = 2;
    if (has_is_override_vlan_tpid()) {
      total_size += 1 + 1;
    }

    // optional uint32 qinq_tpid = 3;
    if (has_qinq_tpid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->qinq_tpid());
    }

    // optional uint32 qinq_vlan_tag = 4;
    if (has_qinq_vlan_tag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->qinq_vlan_tag());
    }

    // optional uint32 vlan_tpid = 5;
    if (has_vlan_tpid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->vlan_tpid());
    }

    // optional uint32 vlan_vlan_tag = 6;
    if (has_vlan_vlan_tag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->vlan_vlan_tag());
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

void Qinq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Qinq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Qinq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Qinq::MergeFrom(const Qinq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_is_override_tpid()) {
      set_is_override_tpid(from.is_override_tpid());
    }
    if (from.has_is_override_vlan_tpid()) {
      set_is_override_vlan_tpid(from.is_override_vlan_tpid());
    }
    if (from.has_qinq_tpid()) {
      set_qinq_tpid(from.qinq_tpid());
    }
    if (from.has_qinq_vlan_tag()) {
      set_qinq_vlan_tag(from.qinq_vlan_tag());
    }
    if (from.has_vlan_tpid()) {
      set_vlan_tpid(from.vlan_tpid());
    }
    if (from.has_vlan_vlan_tag()) {
      set_vlan_vlan_tag(from.vlan_vlan_tag());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Qinq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Qinq::CopyFrom(const Qinq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Qinq::IsInitialized() const {

  return true;
}

void Qinq::Swap(Qinq* other) {
  if (other != this) {
    std::swap(is_override_tpid_, other->is_override_tpid_);
    std::swap(is_override_vlan_tpid_, other->is_override_vlan_tpid_);
    std::swap(qinq_tpid_, other->qinq_tpid_);
    std::swap(qinq_vlan_tag_, other->qinq_vlan_tag_);
    std::swap(vlan_tpid_, other->vlan_tpid_);
    std::swap(vlan_vlan_tag_, other->vlan_vlan_tag_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Qinq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Qinq_descriptor_;
  metadata.reflection = Qinq_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Qinq >, 11, false >
  qinq(kQinqFieldNumber, ::OstProto::Qinq::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

// @@protoc_insertion_point(global_scope)