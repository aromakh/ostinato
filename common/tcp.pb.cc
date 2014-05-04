// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tcp.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tcp.pb.h"

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

const ::google::protobuf::Descriptor* Tcp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Tcp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_tcp_2eproto() {
  protobuf_AddDesc_tcp_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tcp.proto");
  GOOGLE_CHECK(file != NULL);
  Tcp_descriptor_ = file->message_type(0);
  static const int Tcp_offsets_[13] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, is_override_src_port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, is_override_dst_port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, is_override_hdrlen_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, is_override_cksum_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, src_port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, dst_port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, seq_num_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, ack_num_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, hdrlen_rsvd_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, flags_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, window_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, cksum_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, urg_ptr_),
  };
  Tcp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Tcp_descriptor_,
      Tcp::default_instance_,
      Tcp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Tcp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Tcp));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tcp_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Tcp_descriptor_, &Tcp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_tcp_2eproto() {
  delete Tcp::default_instance_;
  delete Tcp_reflection_;
}

void protobuf_AddDesc_tcp_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::OstProto::protobuf_AddDesc_protocol_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ttcp.proto\022\010OstProto\032\016protocol.proto\"\262\002"
    "\n\003Tcp\022\034\n\024is_override_src_port\030\001 \001(\010\022\034\n\024i"
    "s_override_dst_port\030\002 \001(\010\022\032\n\022is_override"
    "_hdrlen\030\003 \001(\010\022\031\n\021is_override_cksum\030\004 \001(\010"
    "\022\027\n\010src_port\030\005 \001(\r:\00549152\022\027\n\010dst_port\030\006 "
    "\001(\r:\00549153\022\027\n\007seq_num\030\007 \001(\r:\006129018\022\017\n\007a"
    "ck_num\030\010 \001(\r\022\027\n\013hdrlen_rsvd\030\t \001(\r:\00280\022\r\n"
    "\005flags\030\n \001(\r\022\024\n\006window\030\013 \001(\r:\0041024\022\r\n\005ck"
    "sum\030\014 \001(\r\022\017\n\007urg_ptr\030\r \001(\r:/\n\003tcp\022\022.OstP"
    "roto.Protocol\030\220\003 \001(\0132\r.OstProto.Tcp", 395);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tcp.proto", &protobuf_RegisterTypes);
  Tcp::default_instance_ = new Tcp();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::OstProto::Protocol::default_instance(),
    400, 11, false, false,
    &::OstProto::Tcp::default_instance());
  Tcp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tcp_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tcp_2eproto {
  StaticDescriptorInitializer_tcp_2eproto() {
    protobuf_AddDesc_tcp_2eproto();
  }
} static_descriptor_initializer_tcp_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Tcp::kIsOverrideSrcPortFieldNumber;
const int Tcp::kIsOverrideDstPortFieldNumber;
const int Tcp::kIsOverrideHdrlenFieldNumber;
const int Tcp::kIsOverrideCksumFieldNumber;
const int Tcp::kSrcPortFieldNumber;
const int Tcp::kDstPortFieldNumber;
const int Tcp::kSeqNumFieldNumber;
const int Tcp::kAckNumFieldNumber;
const int Tcp::kHdrlenRsvdFieldNumber;
const int Tcp::kFlagsFieldNumber;
const int Tcp::kWindowFieldNumber;
const int Tcp::kCksumFieldNumber;
const int Tcp::kUrgPtrFieldNumber;
#endif  // !_MSC_VER

Tcp::Tcp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Tcp::InitAsDefaultInstance() {
}

Tcp::Tcp(const Tcp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Tcp::SharedCtor() {
  _cached_size_ = 0;
  is_override_src_port_ = false;
  is_override_dst_port_ = false;
  is_override_hdrlen_ = false;
  is_override_cksum_ = false;
  src_port_ = 49152u;
  dst_port_ = 49153u;
  seq_num_ = 129018u;
  ack_num_ = 0u;
  hdrlen_rsvd_ = 80u;
  flags_ = 0u;
  window_ = 1024u;
  cksum_ = 0u;
  urg_ptr_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Tcp::~Tcp() {
  SharedDtor();
}

void Tcp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Tcp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Tcp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Tcp_descriptor_;
}

const Tcp& Tcp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_tcp_2eproto();
  return *default_instance_;
}

Tcp* Tcp::default_instance_ = NULL;

Tcp* Tcp::New() const {
  return new Tcp;
}

void Tcp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    is_override_src_port_ = false;
    is_override_dst_port_ = false;
    is_override_hdrlen_ = false;
    is_override_cksum_ = false;
    src_port_ = 49152u;
    dst_port_ = 49153u;
    seq_num_ = 129018u;
    ack_num_ = 0u;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    hdrlen_rsvd_ = 80u;
    flags_ = 0u;
    window_ = 1024u;
    cksum_ = 0u;
    urg_ptr_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Tcp::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_is_override_hdrlen;
        break;
      }

      // optional bool is_override_hdrlen = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_override_hdrlen:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_override_hdrlen_)));
          set_has_is_override_hdrlen();
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
        if (input->ExpectTag(56)) goto parse_seq_num;
        break;
      }

      // optional uint32 seq_num = 7 [default = 129018];
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_seq_num:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seq_num_)));
          set_has_seq_num();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_ack_num;
        break;
      }

      // optional uint32 ack_num = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ack_num:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ack_num_)));
          set_has_ack_num();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_hdrlen_rsvd;
        break;
      }

      // optional uint32 hdrlen_rsvd = 9 [default = 80];
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_hdrlen_rsvd:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hdrlen_rsvd_)));
          set_has_hdrlen_rsvd();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_flags;
        break;
      }

      // optional uint32 flags = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_flags:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &flags_)));
          set_has_flags();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_window;
        break;
      }

      // optional uint32 window = 11 [default = 1024];
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_window:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &window_)));
          set_has_window();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_cksum;
        break;
      }

      // optional uint32 cksum = 12;
      case 12: {
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
        if (input->ExpectTag(104)) goto parse_urg_ptr;
        break;
      }

      // optional uint32 urg_ptr = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_urg_ptr:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &urg_ptr_)));
          set_has_urg_ptr();
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

void Tcp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool is_override_src_port = 1;
  if (has_is_override_src_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_override_src_port(), output);
  }

  // optional bool is_override_dst_port = 2;
  if (has_is_override_dst_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_override_dst_port(), output);
  }

  // optional bool is_override_hdrlen = 3;
  if (has_is_override_hdrlen()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_override_hdrlen(), output);
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

  // optional uint32 seq_num = 7 [default = 129018];
  if (has_seq_num()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->seq_num(), output);
  }

  // optional uint32 ack_num = 8;
  if (has_ack_num()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->ack_num(), output);
  }

  // optional uint32 hdrlen_rsvd = 9 [default = 80];
  if (has_hdrlen_rsvd()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->hdrlen_rsvd(), output);
  }

  // optional uint32 flags = 10;
  if (has_flags()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->flags(), output);
  }

  // optional uint32 window = 11 [default = 1024];
  if (has_window()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->window(), output);
  }

  // optional uint32 cksum = 12;
  if (has_cksum()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->cksum(), output);
  }

  // optional uint32 urg_ptr = 13;
  if (has_urg_ptr()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->urg_ptr(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Tcp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional bool is_override_src_port = 1;
  if (has_is_override_src_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_override_src_port(), target);
  }

  // optional bool is_override_dst_port = 2;
  if (has_is_override_dst_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->is_override_dst_port(), target);
  }

  // optional bool is_override_hdrlen = 3;
  if (has_is_override_hdrlen()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->is_override_hdrlen(), target);
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

  // optional uint32 seq_num = 7 [default = 129018];
  if (has_seq_num()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->seq_num(), target);
  }

  // optional uint32 ack_num = 8;
  if (has_ack_num()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->ack_num(), target);
  }

  // optional uint32 hdrlen_rsvd = 9 [default = 80];
  if (has_hdrlen_rsvd()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->hdrlen_rsvd(), target);
  }

  // optional uint32 flags = 10;
  if (has_flags()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->flags(), target);
  }

  // optional uint32 window = 11 [default = 1024];
  if (has_window()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->window(), target);
  }

  // optional uint32 cksum = 12;
  if (has_cksum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->cksum(), target);
  }

  // optional uint32 urg_ptr = 13;
  if (has_urg_ptr()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->urg_ptr(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Tcp::ByteSize() const {
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

    // optional bool is_override_hdrlen = 3;
    if (has_is_override_hdrlen()) {
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

    // optional uint32 seq_num = 7 [default = 129018];
    if (has_seq_num()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->seq_num());
    }

    // optional uint32 ack_num = 8;
    if (has_ack_num()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ack_num());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional uint32 hdrlen_rsvd = 9 [default = 80];
    if (has_hdrlen_rsvd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->hdrlen_rsvd());
    }

    // optional uint32 flags = 10;
    if (has_flags()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->flags());
    }

    // optional uint32 window = 11 [default = 1024];
    if (has_window()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->window());
    }

    // optional uint32 cksum = 12;
    if (has_cksum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cksum());
    }

    // optional uint32 urg_ptr = 13;
    if (has_urg_ptr()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->urg_ptr());
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

void Tcp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Tcp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Tcp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Tcp::MergeFrom(const Tcp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_is_override_src_port()) {
      set_is_override_src_port(from.is_override_src_port());
    }
    if (from.has_is_override_dst_port()) {
      set_is_override_dst_port(from.is_override_dst_port());
    }
    if (from.has_is_override_hdrlen()) {
      set_is_override_hdrlen(from.is_override_hdrlen());
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
    if (from.has_seq_num()) {
      set_seq_num(from.seq_num());
    }
    if (from.has_ack_num()) {
      set_ack_num(from.ack_num());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_hdrlen_rsvd()) {
      set_hdrlen_rsvd(from.hdrlen_rsvd());
    }
    if (from.has_flags()) {
      set_flags(from.flags());
    }
    if (from.has_window()) {
      set_window(from.window());
    }
    if (from.has_cksum()) {
      set_cksum(from.cksum());
    }
    if (from.has_urg_ptr()) {
      set_urg_ptr(from.urg_ptr());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Tcp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Tcp::CopyFrom(const Tcp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Tcp::IsInitialized() const {

  return true;
}

void Tcp::Swap(Tcp* other) {
  if (other != this) {
    std::swap(is_override_src_port_, other->is_override_src_port_);
    std::swap(is_override_dst_port_, other->is_override_dst_port_);
    std::swap(is_override_hdrlen_, other->is_override_hdrlen_);
    std::swap(is_override_cksum_, other->is_override_cksum_);
    std::swap(src_port_, other->src_port_);
    std::swap(dst_port_, other->dst_port_);
    std::swap(seq_num_, other->seq_num_);
    std::swap(ack_num_, other->ack_num_);
    std::swap(hdrlen_rsvd_, other->hdrlen_rsvd_);
    std::swap(flags_, other->flags_);
    std::swap(window_, other->window_);
    std::swap(cksum_, other->cksum_);
    std::swap(urg_ptr_, other->urg_ptr_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Tcp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Tcp_descriptor_;
  metadata.reflection = Tcp_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Tcp >, 11, false >
  tcp(kTcpFieldNumber, ::OstProto::Tcp::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

// @@protoc_insertion_point(global_scope)