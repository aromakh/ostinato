// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: udp.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "udp.pb.h"

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

const ::google::protobuf::Descriptor* Udp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Udp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_udp_2eproto() {
  protobuf_AddDesc_udp_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "udp.proto");
  GOOGLE_CHECK(file != NULL);
  Udp_descriptor_ = file->message_type(0);
  static const int Udp_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Udp, is_override_src_port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Udp, is_override_dst_port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Udp, is_override_totlen_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Udp, is_override_cksum_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Udp, src_port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Udp, dst_port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Udp, totlen_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Udp, cksum_),
  };
  Udp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Udp_descriptor_,
      Udp::default_instance_,
      Udp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Udp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Udp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Udp));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_udp_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Udp_descriptor_, &Udp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_udp_2eproto() {
  delete Udp::default_instance_;
  delete Udp_reflection_;
}

void protobuf_AddDesc_udp_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::OstProto::protobuf_AddDesc_protocol_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tudp.proto\022\010OstProto\032\016protocol.proto\"\311\001"
    "\n\003Udp\022\034\n\024is_override_src_port\030\001 \001(\010\022\034\n\024i"
    "s_override_dst_port\030\002 \001(\010\022\032\n\022is_override"
    "_totlen\030\003 \001(\010\022\031\n\021is_override_cksum\030\004 \001(\010"
    "\022\027\n\010src_port\030\005 \001(\r:\00549152\022\027\n\010dst_port\030\006 "
    "\001(\r:\00549153\022\016\n\006totlen\030\007 \001(\r\022\r\n\005cksum\030\010 \001("
    "\r:/\n\003udp\022\022.OstProto.Protocol\030\221\003 \001(\0132\r.Os"
    "tProto.Udp", 290);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "udp.proto", &protobuf_RegisterTypes);
  Udp::default_instance_ = new Udp();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::OstProto::Protocol::default_instance(),
    401, 11, false, false,
    &::OstProto::Udp::default_instance());
  Udp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_udp_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_udp_2eproto {
  StaticDescriptorInitializer_udp_2eproto() {
    protobuf_AddDesc_udp_2eproto();
  }
} static_descriptor_initializer_udp_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Udp::kIsOverrideSrcPortFieldNumber;
const int Udp::kIsOverrideDstPortFieldNumber;
const int Udp::kIsOverrideTotlenFieldNumber;
const int Udp::kIsOverrideCksumFieldNumber;
const int Udp::kSrcPortFieldNumber;
const int Udp::kDstPortFieldNumber;
const int Udp::kTotlenFieldNumber;
const int Udp::kCksumFieldNumber;
#endif  // !_MSC_VER

Udp::Udp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Udp::InitAsDefaultInstance() {
}

Udp::Udp(const Udp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Udp::SharedCtor() {
  _cached_size_ = 0;
  is_override_src_port_ = false;
  is_override_dst_port_ = false;
  is_override_totlen_ = false;
  is_override_cksum_ = false;
  src_port_ = 49152u;
  dst_port_ = 49153u;
  totlen_ = 0u;
  cksum_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Udp::~Udp() {
  SharedDtor();
}

void Udp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Udp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Udp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Udp_descriptor_;
}

const Udp& Udp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_udp_2eproto();
  return *default_instance_;
}

Udp* Udp::default_instance_ = NULL;

Udp* Udp::New() const {
  return new Udp;
}

void Udp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    is_override_src_port_ = false;
    is_override_dst_port_ = false;
    is_override_totlen_ = false;
    is_override_cksum_ = false;
    src_port_ = 49152u;
    dst_port_ = 49153u;
    totlen_ = 0u;
    cksum_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Udp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool is_override_src_port = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_src_port_)));
          set_has_is_override_src_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_is_override_dst_port;
        break;
      }

      // optional bool is_override_dst_port = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_override_dst_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_dst_port_)));
          set_has_is_override_dst_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_is_override_totlen;
        break;
      }

      // optional bool is_override_totlen = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_override_totlen:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_totlen_)));
          set_has_is_override_totlen();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_is_override_cksum;
        break;
      }

      // optional bool is_override_cksum = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_override_cksum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_cksum_)));
          set_has_is_override_cksum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_src_port;
        break;
      }

      // optional uint32 src_port = 5 [default = 49152];
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_src_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &src_port_)));
          set_has_src_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_dst_port;
        break;
      }

      // optional uint32 dst_port = 6 [default = 49153];
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_dst_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dst_port_)));
          set_has_dst_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_totlen;
        break;
      }

      // optional uint32 totlen = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_totlen:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &totlen_)));
          set_has_totlen();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_cksum;
        break;
      }

      // optional uint32 cksum = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cksum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cksum_)));
          set_has_cksum();
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

void Udp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool is_override_src_port = 1;
  if (has_is_override_src_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_override_src_port(), output);
  }

  // optional bool is_override_dst_port = 2;
  if (has_is_override_dst_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_override_dst_port(), output);
  }

  // optional bool is_override_totlen = 3;
  if (has_is_override_totlen()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_override_totlen(), output);
  }

  // optional bool is_override_cksum = 4;
  if (has_is_override_cksum()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_override_cksum(), output);
  }

  // optional uint32 src_port = 5 [default = 49152];
  if (has_src_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->src_port(), output);
  }

  // optional uint32 dst_port = 6 [default = 49153];
  if (has_dst_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->dst_port(), output);
  }

  // optional uint32 totlen = 7;
  if (has_totlen()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->totlen(), output);
  }

  // optional uint32 cksum = 8;
  if (has_cksum()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->cksum(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Udp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional bool is_override_src_port = 1;
  if (has_is_override_src_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_override_src_port(), target);
  }

  // optional bool is_override_dst_port = 2;
  if (has_is_override_dst_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->is_override_dst_port(), target);
  }

  // optional bool is_override_totlen = 3;
  if (has_is_override_totlen()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->is_override_totlen(), target);
  }

  // optional bool is_override_cksum = 4;
  if (has_is_override_cksum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->is_override_cksum(), target);
  }

  // optional uint32 src_port = 5 [default = 49152];
  if (has_src_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->src_port(), target);
  }

  // optional uint32 dst_port = 6 [default = 49153];
  if (has_dst_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->dst_port(), target);
  }

  // optional uint32 totlen = 7;
  if (has_totlen()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->totlen(), target);
  }

  // optional uint32 cksum = 8;
  if (has_cksum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->cksum(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Udp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool is_override_src_port = 1;
    if (has_is_override_src_port()) {
      total_size += 1 + 1;
    }

    // optional bool is_override_dst_port = 2;
    if (has_is_override_dst_port()) {
      total_size += 1 + 1;
    }

    // optional bool is_override_totlen = 3;
    if (has_is_override_totlen()) {
      total_size += 1 + 1;
    }

    // optional bool is_override_cksum = 4;
    if (has_is_override_cksum()) {
      total_size += 1 + 1;
    }

    // optional uint32 src_port = 5 [default = 49152];
    if (has_src_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->src_port());
    }

    // optional uint32 dst_port = 6 [default = 49153];
    if (has_dst_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dst_port());
    }

    // optional uint32 totlen = 7;
    if (has_totlen()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->totlen());
    }

    // optional uint32 cksum = 8;
    if (has_cksum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cksum());
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

void Udp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Udp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Udp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Udp::MergeFrom(const Udp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_is_override_src_port()) {
      set_is_override_src_port(from.is_override_src_port());
    }
    if (from.has_is_override_dst_port()) {
      set_is_override_dst_port(from.is_override_dst_port());
    }
    if (from.has_is_override_totlen()) {
      set_is_override_totlen(from.is_override_totlen());
    }
    if (from.has_is_override_cksum()) {
      set_is_override_cksum(from.is_override_cksum());
    }
    if (from.has_src_port()) {
      set_src_port(from.src_port());
    }
    if (from.has_dst_port()) {
      set_dst_port(from.dst_port());
    }
    if (from.has_totlen()) {
      set_totlen(from.totlen());
    }
    if (from.has_cksum()) {
      set_cksum(from.cksum());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Udp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Udp::CopyFrom(const Udp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Udp::IsInitialized() const {

  return true;
}

void Udp::Swap(Udp* other) {
  if (other != this) {
    std::swap(is_override_src_port_, other->is_override_src_port_);
    std::swap(is_override_dst_port_, other->is_override_dst_port_);
    std::swap(is_override_totlen_, other->is_override_totlen_);
    std::swap(is_override_cksum_, other->is_override_cksum_);
    std::swap(src_port_, other->src_port_);
    std::swap(dst_port_, other->dst_port_);
    std::swap(totlen_, other->totlen_);
    std::swap(cksum_, other->cksum_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Udp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Udp_descriptor_;
  metadata.reflection = Udp_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Udp >, 11, false >
  udp(kUdpFieldNumber, ::OstProto::Udp::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

// @@protoc_insertion_point(global_scope)
