// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ip4.proto

#ifndef PROTOBUF_ip4_2eproto__INCLUDED
#define PROTOBUF_ip4_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "protocol.pb.h"
// @@protoc_insertion_point(includes)

namespace OstProto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ip4_2eproto();
void protobuf_AssignDesc_ip4_2eproto();
void protobuf_ShutdownFile_ip4_2eproto();

class Ip4;

enum Ip4_IpAddrMode {
  Ip4_IpAddrMode_e_im_fixed = 0,
  Ip4_IpAddrMode_e_im_inc_host = 1,
  Ip4_IpAddrMode_e_im_dec_host = 2,
  Ip4_IpAddrMode_e_im_random_host = 3
};
bool Ip4_IpAddrMode_IsValid(int value);
const Ip4_IpAddrMode Ip4_IpAddrMode_IpAddrMode_MIN = Ip4_IpAddrMode_e_im_fixed;
const Ip4_IpAddrMode Ip4_IpAddrMode_IpAddrMode_MAX = Ip4_IpAddrMode_e_im_random_host;
const int Ip4_IpAddrMode_IpAddrMode_ARRAYSIZE = Ip4_IpAddrMode_IpAddrMode_MAX + 1;

const ::google::protobuf::EnumDescriptor* Ip4_IpAddrMode_descriptor();
inline const ::std::string& Ip4_IpAddrMode_Name(Ip4_IpAddrMode value) {
  return ::google::protobuf::internal::NameOfEnum(
    Ip4_IpAddrMode_descriptor(), value);
}
inline bool Ip4_IpAddrMode_Parse(
    const ::std::string& name, Ip4_IpAddrMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Ip4_IpAddrMode>(
    Ip4_IpAddrMode_descriptor(), name, value);
}
enum Ip4_IpOptType {
  Ip4_IpOptType_e_ot_eool = 0,
  Ip4_IpOptType_e_ot_nop = 1,
  Ip4_IpOptType_e_ot_sec = 2,
  Ip4_IpOptType_e_ot_lsr = 3,
  Ip4_IpOptType_e_ot_ts = 4,
  Ip4_IpOptType_e_ot_e_sec = 5,
  Ip4_IpOptType_e_ot_cipso = 6,
  Ip4_IpOptType_e_ot_rr = 7,
  Ip4_IpOptType_e_ot_sid = 8,
  Ip4_IpOptType_e_ot_ssr = 9,
  Ip4_IpOptType_e_ot_zsu = 10,
  Ip4_IpOptType_e_ot_mtup = 11,
  Ip4_IpOptType_e_ot_mtur = 12,
  Ip4_IpOptType_e_ot_finn = 13,
  Ip4_IpOptType_e_ot_visa = 14,
  Ip4_IpOptType_e_ot_encode = 15,
  Ip4_IpOptType_e_ot_imitd = 16,
  Ip4_IpOptType_e_ot_eip = 17,
  Ip4_IpOptType_e_ot_tr = 18,
  Ip4_IpOptType_e_ot_addext = 19,
  Ip4_IpOptType_e_ot_rtralt = 20,
  Ip4_IpOptType_e_ot_sdb = 21,
  Ip4_IpOptType_e_ot_unassigned = 22,
  Ip4_IpOptType_e_ot_dps = 23,
  Ip4_IpOptType_e_ot_ump = 24,
  Ip4_IpOptType_e_ot_qs = 25,
  Ip4_IpOptType_e_ot_exp1 = 26,
  Ip4_IpOptType_e_ot_exp2 = 27,
  Ip4_IpOptType_e_ot_exp3 = 28,
  Ip4_IpOptType_e_ot_exp4 = 29
};
bool Ip4_IpOptType_IsValid(int value);
const Ip4_IpOptType Ip4_IpOptType_IpOptType_MIN = Ip4_IpOptType_e_ot_eool;
const Ip4_IpOptType Ip4_IpOptType_IpOptType_MAX = Ip4_IpOptType_e_ot_exp4;
const int Ip4_IpOptType_IpOptType_ARRAYSIZE = Ip4_IpOptType_IpOptType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Ip4_IpOptType_descriptor();
inline const ::std::string& Ip4_IpOptType_Name(Ip4_IpOptType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Ip4_IpOptType_descriptor(), value);
}
inline bool Ip4_IpOptType_Parse(
    const ::std::string& name, Ip4_IpOptType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Ip4_IpOptType>(
    Ip4_IpOptType_descriptor(), name, value);
}
enum Ip4_IpOptMode {
  Ip4_IpOptMode_e_om_fixed = 0,
  Ip4_IpOptMode_e_om_inc = 1,
  Ip4_IpOptMode_e_om_dec = 2,
  Ip4_IpOptMode_e_om_random = 3
};
bool Ip4_IpOptMode_IsValid(int value);
const Ip4_IpOptMode Ip4_IpOptMode_IpOptMode_MIN = Ip4_IpOptMode_e_om_fixed;
const Ip4_IpOptMode Ip4_IpOptMode_IpOptMode_MAX = Ip4_IpOptMode_e_om_random;
const int Ip4_IpOptMode_IpOptMode_ARRAYSIZE = Ip4_IpOptMode_IpOptMode_MAX + 1;

const ::google::protobuf::EnumDescriptor* Ip4_IpOptMode_descriptor();
inline const ::std::string& Ip4_IpOptMode_Name(Ip4_IpOptMode value) {
  return ::google::protobuf::internal::NameOfEnum(
    Ip4_IpOptMode_descriptor(), value);
}
inline bool Ip4_IpOptMode_Parse(
    const ::std::string& name, Ip4_IpOptMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Ip4_IpOptMode>(
    Ip4_IpOptMode_descriptor(), name, value);
}
// ===================================================================

class Ip4 : public ::google::protobuf::Message {
 public:
  Ip4();
  virtual ~Ip4();

  Ip4(const Ip4& from);

  inline Ip4& operator=(const Ip4& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Ip4& default_instance();

  void Swap(Ip4* other);

  // implements Message ----------------------------------------------

  Ip4* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Ip4& from);
  void MergeFrom(const Ip4& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Ip4_IpAddrMode IpAddrMode;
  static const IpAddrMode e_im_fixed = Ip4_IpAddrMode_e_im_fixed;
  static const IpAddrMode e_im_inc_host = Ip4_IpAddrMode_e_im_inc_host;
  static const IpAddrMode e_im_dec_host = Ip4_IpAddrMode_e_im_dec_host;
  static const IpAddrMode e_im_random_host = Ip4_IpAddrMode_e_im_random_host;
  static inline bool IpAddrMode_IsValid(int value) {
    return Ip4_IpAddrMode_IsValid(value);
  }
  static const IpAddrMode IpAddrMode_MIN =
    Ip4_IpAddrMode_IpAddrMode_MIN;
  static const IpAddrMode IpAddrMode_MAX =
    Ip4_IpAddrMode_IpAddrMode_MAX;
  static const int IpAddrMode_ARRAYSIZE =
    Ip4_IpAddrMode_IpAddrMode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  IpAddrMode_descriptor() {
    return Ip4_IpAddrMode_descriptor();
  }
  static inline const ::std::string& IpAddrMode_Name(IpAddrMode value) {
    return Ip4_IpAddrMode_Name(value);
  }
  static inline bool IpAddrMode_Parse(const ::std::string& name,
      IpAddrMode* value) {
    return Ip4_IpAddrMode_Parse(name, value);
  }

  typedef Ip4_IpOptType IpOptType;
  static const IpOptType e_ot_eool = Ip4_IpOptType_e_ot_eool;
  static const IpOptType e_ot_nop = Ip4_IpOptType_e_ot_nop;
  static const IpOptType e_ot_sec = Ip4_IpOptType_e_ot_sec;
  static const IpOptType e_ot_lsr = Ip4_IpOptType_e_ot_lsr;
  static const IpOptType e_ot_ts = Ip4_IpOptType_e_ot_ts;
  static const IpOptType e_ot_e_sec = Ip4_IpOptType_e_ot_e_sec;
  static const IpOptType e_ot_cipso = Ip4_IpOptType_e_ot_cipso;
  static const IpOptType e_ot_rr = Ip4_IpOptType_e_ot_rr;
  static const IpOptType e_ot_sid = Ip4_IpOptType_e_ot_sid;
  static const IpOptType e_ot_ssr = Ip4_IpOptType_e_ot_ssr;
  static const IpOptType e_ot_zsu = Ip4_IpOptType_e_ot_zsu;
  static const IpOptType e_ot_mtup = Ip4_IpOptType_e_ot_mtup;
  static const IpOptType e_ot_mtur = Ip4_IpOptType_e_ot_mtur;
  static const IpOptType e_ot_finn = Ip4_IpOptType_e_ot_finn;
  static const IpOptType e_ot_visa = Ip4_IpOptType_e_ot_visa;
  static const IpOptType e_ot_encode = Ip4_IpOptType_e_ot_encode;
  static const IpOptType e_ot_imitd = Ip4_IpOptType_e_ot_imitd;
  static const IpOptType e_ot_eip = Ip4_IpOptType_e_ot_eip;
  static const IpOptType e_ot_tr = Ip4_IpOptType_e_ot_tr;
  static const IpOptType e_ot_addext = Ip4_IpOptType_e_ot_addext;
  static const IpOptType e_ot_rtralt = Ip4_IpOptType_e_ot_rtralt;
  static const IpOptType e_ot_sdb = Ip4_IpOptType_e_ot_sdb;
  static const IpOptType e_ot_unassigned = Ip4_IpOptType_e_ot_unassigned;
  static const IpOptType e_ot_dps = Ip4_IpOptType_e_ot_dps;
  static const IpOptType e_ot_ump = Ip4_IpOptType_e_ot_ump;
  static const IpOptType e_ot_qs = Ip4_IpOptType_e_ot_qs;
  static const IpOptType e_ot_exp1 = Ip4_IpOptType_e_ot_exp1;
  static const IpOptType e_ot_exp2 = Ip4_IpOptType_e_ot_exp2;
  static const IpOptType e_ot_exp3 = Ip4_IpOptType_e_ot_exp3;
  static const IpOptType e_ot_exp4 = Ip4_IpOptType_e_ot_exp4;
  static inline bool IpOptType_IsValid(int value) {
    return Ip4_IpOptType_IsValid(value);
  }
  static const IpOptType IpOptType_MIN =
    Ip4_IpOptType_IpOptType_MIN;
  static const IpOptType IpOptType_MAX =
    Ip4_IpOptType_IpOptType_MAX;
  static const int IpOptType_ARRAYSIZE =
    Ip4_IpOptType_IpOptType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  IpOptType_descriptor() {
    return Ip4_IpOptType_descriptor();
  }
  static inline const ::std::string& IpOptType_Name(IpOptType value) {
    return Ip4_IpOptType_Name(value);
  }
  static inline bool IpOptType_Parse(const ::std::string& name,
      IpOptType* value) {
    return Ip4_IpOptType_Parse(name, value);
  }

  typedef Ip4_IpOptMode IpOptMode;
  static const IpOptMode e_om_fixed = Ip4_IpOptMode_e_om_fixed;
  static const IpOptMode e_om_inc = Ip4_IpOptMode_e_om_inc;
  static const IpOptMode e_om_dec = Ip4_IpOptMode_e_om_dec;
  static const IpOptMode e_om_random = Ip4_IpOptMode_e_om_random;
  static inline bool IpOptMode_IsValid(int value) {
    return Ip4_IpOptMode_IsValid(value);
  }
  static const IpOptMode IpOptMode_MIN =
    Ip4_IpOptMode_IpOptMode_MIN;
  static const IpOptMode IpOptMode_MAX =
    Ip4_IpOptMode_IpOptMode_MAX;
  static const int IpOptMode_ARRAYSIZE =
    Ip4_IpOptMode_IpOptMode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  IpOptMode_descriptor() {
    return Ip4_IpOptMode_descriptor();
  }
  static inline const ::std::string& IpOptMode_Name(IpOptMode value) {
    return Ip4_IpOptMode_Name(value);
  }
  static inline bool IpOptMode_Parse(const ::std::string& name,
      IpOptMode* value) {
    return Ip4_IpOptMode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional bool is_override_ver = 1;
  inline bool has_is_override_ver() const;
  inline void clear_is_override_ver();
  static const int kIsOverrideVerFieldNumber = 1;
  inline bool is_override_ver() const;
  inline void set_is_override_ver(bool value);

  // optional bool is_override_hdrlen = 2;
  inline bool has_is_override_hdrlen() const;
  inline void clear_is_override_hdrlen();
  static const int kIsOverrideHdrlenFieldNumber = 2;
  inline bool is_override_hdrlen() const;
  inline void set_is_override_hdrlen(bool value);

  // optional bool is_override_totlen = 3;
  inline bool has_is_override_totlen() const;
  inline void clear_is_override_totlen();
  static const int kIsOverrideTotlenFieldNumber = 3;
  inline bool is_override_totlen() const;
  inline void set_is_override_totlen(bool value);

  // optional bool is_override_proto = 30;
  inline bool has_is_override_proto() const;
  inline void clear_is_override_proto();
  static const int kIsOverrideProtoFieldNumber = 30;
  inline bool is_override_proto() const;
  inline void set_is_override_proto(bool value);

  // optional bool is_override_cksum = 4;
  inline bool has_is_override_cksum() const;
  inline void clear_is_override_cksum();
  static const int kIsOverrideCksumFieldNumber = 4;
  inline bool is_override_cksum() const;
  inline void set_is_override_cksum(bool value);

  // optional uint32 ver_hdrlen = 5 [default = 69];
  inline bool has_ver_hdrlen() const;
  inline void clear_ver_hdrlen();
  static const int kVerHdrlenFieldNumber = 5;
  inline ::google::protobuf::uint32 ver_hdrlen() const;
  inline void set_ver_hdrlen(::google::protobuf::uint32 value);

  // optional uint32 tos = 6;
  inline bool has_tos() const;
  inline void clear_tos();
  static const int kTosFieldNumber = 6;
  inline ::google::protobuf::uint32 tos() const;
  inline void set_tos(::google::protobuf::uint32 value);

  // optional uint32 totlen = 7;
  inline bool has_totlen() const;
  inline void clear_totlen();
  static const int kTotlenFieldNumber = 7;
  inline ::google::protobuf::uint32 totlen() const;
  inline void set_totlen(::google::protobuf::uint32 value);

  // optional uint32 id = 8 [default = 1234];
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 8;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // optional uint32 flags = 9;
  inline bool has_flags() const;
  inline void clear_flags();
  static const int kFlagsFieldNumber = 9;
  inline ::google::protobuf::uint32 flags() const;
  inline void set_flags(::google::protobuf::uint32 value);

  // optional uint32 frag_ofs = 10;
  inline bool has_frag_ofs() const;
  inline void clear_frag_ofs();
  static const int kFragOfsFieldNumber = 10;
  inline ::google::protobuf::uint32 frag_ofs() const;
  inline void set_frag_ofs(::google::protobuf::uint32 value);

  // optional uint32 ttl = 11 [default = 127];
  inline bool has_ttl() const;
  inline void clear_ttl();
  static const int kTtlFieldNumber = 11;
  inline ::google::protobuf::uint32 ttl() const;
  inline void set_ttl(::google::protobuf::uint32 value);

  // optional uint32 proto = 12;
  inline bool has_proto() const;
  inline void clear_proto();
  static const int kProtoFieldNumber = 12;
  inline ::google::protobuf::uint32 proto() const;
  inline void set_proto(::google::protobuf::uint32 value);

  // optional uint32 cksum = 13;
  inline bool has_cksum() const;
  inline void clear_cksum();
  static const int kCksumFieldNumber = 13;
  inline ::google::protobuf::uint32 cksum() const;
  inline void set_cksum(::google::protobuf::uint32 value);

  // optional fixed32 src_ip = 14;
  inline bool has_src_ip() const;
  inline void clear_src_ip();
  static const int kSrcIpFieldNumber = 14;
  inline ::google::protobuf::uint32 src_ip() const;
  inline void set_src_ip(::google::protobuf::uint32 value);

  // optional .OstProto.Ip4.IpAddrMode src_ip_mode = 15 [default = e_im_fixed];
  inline bool has_src_ip_mode() const;
  inline void clear_src_ip_mode();
  static const int kSrcIpModeFieldNumber = 15;
  inline ::OstProto::Ip4_IpAddrMode src_ip_mode() const;
  inline void set_src_ip_mode(::OstProto::Ip4_IpAddrMode value);

  // optional uint32 src_ip_count = 16 [default = 16];
  inline bool has_src_ip_count() const;
  inline void clear_src_ip_count();
  static const int kSrcIpCountFieldNumber = 16;
  inline ::google::protobuf::uint32 src_ip_count() const;
  inline void set_src_ip_count(::google::protobuf::uint32 value);

  // optional fixed32 src_ip_mask = 17 [default = 4294967040];
  inline bool has_src_ip_mask() const;
  inline void clear_src_ip_mask();
  static const int kSrcIpMaskFieldNumber = 17;
  inline ::google::protobuf::uint32 src_ip_mask() const;
  inline void set_src_ip_mask(::google::protobuf::uint32 value);

  // optional fixed32 dst_ip = 18;
  inline bool has_dst_ip() const;
  inline void clear_dst_ip();
  static const int kDstIpFieldNumber = 18;
  inline ::google::protobuf::uint32 dst_ip() const;
  inline void set_dst_ip(::google::protobuf::uint32 value);

  // optional .OstProto.Ip4.IpAddrMode dst_ip_mode = 19 [default = e_im_fixed];
  inline bool has_dst_ip_mode() const;
  inline void clear_dst_ip_mode();
  static const int kDstIpModeFieldNumber = 19;
  inline ::OstProto::Ip4_IpAddrMode dst_ip_mode() const;
  inline void set_dst_ip_mode(::OstProto::Ip4_IpAddrMode value);

  // optional uint32 dst_ip_count = 20 [default = 16];
  inline bool has_dst_ip_count() const;
  inline void clear_dst_ip_count();
  static const int kDstIpCountFieldNumber = 20;
  inline ::google::protobuf::uint32 dst_ip_count() const;
  inline void set_dst_ip_count(::google::protobuf::uint32 value);

  // optional fixed32 dst_ip_mask = 21 [default = 4294967040];
  inline bool has_dst_ip_mask() const;
  inline void clear_dst_ip_mask();
  static const int kDstIpMaskFieldNumber = 21;
  inline ::google::protobuf::uint32 dst_ip_mask() const;
  inline void set_dst_ip_mask(::google::protobuf::uint32 value);

  // optional .OstProto.Ip4.IpOptType opt_type = 22;
  inline bool has_opt_type() const;
  inline void clear_opt_type();
  static const int kOptTypeFieldNumber = 22;
  inline ::OstProto::Ip4_IpOptType opt_type() const;
  inline void set_opt_type(::OstProto::Ip4_IpOptType value);

  // optional uint32 opt_len = 23 [default = 2];
  inline bool has_opt_len() const;
  inline void clear_opt_len();
  static const int kOptLenFieldNumber = 23;
  inline ::google::protobuf::uint32 opt_len() const;
  inline void set_opt_len(::google::protobuf::uint32 value);

  // optional uint32 opt_data = 24;
  inline bool has_opt_data() const;
  inline void clear_opt_data();
  static const int kOptDataFieldNumber = 24;
  inline ::google::protobuf::uint32 opt_data() const;
  inline void set_opt_data(::google::protobuf::uint32 value);

  // optional .OstProto.Ip4.IpOptMode opt_mode = 25 [default = e_om_fixed];
  inline bool has_opt_mode() const;
  inline void clear_opt_mode();
  static const int kOptModeFieldNumber = 25;
  inline ::OstProto::Ip4_IpOptMode opt_mode() const;
  inline void set_opt_mode(::OstProto::Ip4_IpOptMode value);

  // @@protoc_insertion_point(class_scope:OstProto.Ip4)
 private:
  inline void set_has_is_override_ver();
  inline void clear_has_is_override_ver();
  inline void set_has_is_override_hdrlen();
  inline void clear_has_is_override_hdrlen();
  inline void set_has_is_override_totlen();
  inline void clear_has_is_override_totlen();
  inline void set_has_is_override_proto();
  inline void clear_has_is_override_proto();
  inline void set_has_is_override_cksum();
  inline void clear_has_is_override_cksum();
  inline void set_has_ver_hdrlen();
  inline void clear_has_ver_hdrlen();
  inline void set_has_tos();
  inline void clear_has_tos();
  inline void set_has_totlen();
  inline void clear_has_totlen();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_flags();
  inline void clear_has_flags();
  inline void set_has_frag_ofs();
  inline void clear_has_frag_ofs();
  inline void set_has_ttl();
  inline void clear_has_ttl();
  inline void set_has_proto();
  inline void clear_has_proto();
  inline void set_has_cksum();
  inline void clear_has_cksum();
  inline void set_has_src_ip();
  inline void clear_has_src_ip();
  inline void set_has_src_ip_mode();
  inline void clear_has_src_ip_mode();
  inline void set_has_src_ip_count();
  inline void clear_has_src_ip_count();
  inline void set_has_src_ip_mask();
  inline void clear_has_src_ip_mask();
  inline void set_has_dst_ip();
  inline void clear_has_dst_ip();
  inline void set_has_dst_ip_mode();
  inline void clear_has_dst_ip_mode();
  inline void set_has_dst_ip_count();
  inline void clear_has_dst_ip_count();
  inline void set_has_dst_ip_mask();
  inline void clear_has_dst_ip_mask();
  inline void set_has_opt_type();
  inline void clear_has_opt_type();
  inline void set_has_opt_len();
  inline void clear_has_opt_len();
  inline void set_has_opt_data();
  inline void clear_has_opt_data();
  inline void set_has_opt_mode();
  inline void clear_has_opt_mode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  bool is_override_ver_;
  bool is_override_hdrlen_;
  bool is_override_totlen_;
  bool is_override_proto_;
  bool is_override_cksum_;
  ::google::protobuf::uint32 ver_hdrlen_;
  ::google::protobuf::uint32 tos_;
  ::google::protobuf::uint32 totlen_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 flags_;
  ::google::protobuf::uint32 frag_ofs_;
  ::google::protobuf::uint32 ttl_;
  ::google::protobuf::uint32 proto_;
  ::google::protobuf::uint32 cksum_;
  ::google::protobuf::uint32 src_ip_;
  int src_ip_mode_;
  ::google::protobuf::uint32 src_ip_count_;
  ::google::protobuf::uint32 src_ip_mask_;
  ::google::protobuf::uint32 dst_ip_;
  int dst_ip_mode_;
  ::google::protobuf::uint32 dst_ip_count_;
  ::google::protobuf::uint32 dst_ip_mask_;
  int opt_type_;
  ::google::protobuf::uint32 opt_len_;
  ::google::protobuf::uint32 opt_data_;
  int opt_mode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(26 + 31) / 32];

  friend void  protobuf_AddDesc_ip4_2eproto();
  friend void protobuf_AssignDesc_ip4_2eproto();
  friend void protobuf_ShutdownFile_ip4_2eproto();

  void InitAsDefaultInstance();
  static Ip4* default_instance_;
};
// ===================================================================

static const int kIp4FieldNumber = 301;
extern ::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Ip4 >, 11, false >
  ip4;

// ===================================================================

// Ip4

// optional bool is_override_ver = 1;
inline bool Ip4::has_is_override_ver() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Ip4::set_has_is_override_ver() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Ip4::clear_has_is_override_ver() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Ip4::clear_is_override_ver() {
  is_override_ver_ = false;
  clear_has_is_override_ver();
}
inline bool Ip4::is_override_ver() const {
  return is_override_ver_;
}
inline void Ip4::set_is_override_ver(bool value) {
  set_has_is_override_ver();
  is_override_ver_ = value;
}

// optional bool is_override_hdrlen = 2;
inline bool Ip4::has_is_override_hdrlen() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Ip4::set_has_is_override_hdrlen() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Ip4::clear_has_is_override_hdrlen() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Ip4::clear_is_override_hdrlen() {
  is_override_hdrlen_ = false;
  clear_has_is_override_hdrlen();
}
inline bool Ip4::is_override_hdrlen() const {
  return is_override_hdrlen_;
}
inline void Ip4::set_is_override_hdrlen(bool value) {
  set_has_is_override_hdrlen();
  is_override_hdrlen_ = value;
}

// optional bool is_override_totlen = 3;
inline bool Ip4::has_is_override_totlen() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Ip4::set_has_is_override_totlen() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Ip4::clear_has_is_override_totlen() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Ip4::clear_is_override_totlen() {
  is_override_totlen_ = false;
  clear_has_is_override_totlen();
}
inline bool Ip4::is_override_totlen() const {
  return is_override_totlen_;
}
inline void Ip4::set_is_override_totlen(bool value) {
  set_has_is_override_totlen();
  is_override_totlen_ = value;
}

// optional bool is_override_proto = 30;
inline bool Ip4::has_is_override_proto() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Ip4::set_has_is_override_proto() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Ip4::clear_has_is_override_proto() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Ip4::clear_is_override_proto() {
  is_override_proto_ = false;
  clear_has_is_override_proto();
}
inline bool Ip4::is_override_proto() const {
  return is_override_proto_;
}
inline void Ip4::set_is_override_proto(bool value) {
  set_has_is_override_proto();
  is_override_proto_ = value;
}

// optional bool is_override_cksum = 4;
inline bool Ip4::has_is_override_cksum() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Ip4::set_has_is_override_cksum() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Ip4::clear_has_is_override_cksum() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Ip4::clear_is_override_cksum() {
  is_override_cksum_ = false;
  clear_has_is_override_cksum();
}
inline bool Ip4::is_override_cksum() const {
  return is_override_cksum_;
}
inline void Ip4::set_is_override_cksum(bool value) {
  set_has_is_override_cksum();
  is_override_cksum_ = value;
}

// optional uint32 ver_hdrlen = 5 [default = 69];
inline bool Ip4::has_ver_hdrlen() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Ip4::set_has_ver_hdrlen() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Ip4::clear_has_ver_hdrlen() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Ip4::clear_ver_hdrlen() {
  ver_hdrlen_ = 69u;
  clear_has_ver_hdrlen();
}
inline ::google::protobuf::uint32 Ip4::ver_hdrlen() const {
  return ver_hdrlen_;
}
inline void Ip4::set_ver_hdrlen(::google::protobuf::uint32 value) {
  set_has_ver_hdrlen();
  ver_hdrlen_ = value;
}

// optional uint32 tos = 6;
inline bool Ip4::has_tos() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Ip4::set_has_tos() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Ip4::clear_has_tos() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Ip4::clear_tos() {
  tos_ = 0u;
  clear_has_tos();
}
inline ::google::protobuf::uint32 Ip4::tos() const {
  return tos_;
}
inline void Ip4::set_tos(::google::protobuf::uint32 value) {
  set_has_tos();
  tos_ = value;
}

// optional uint32 totlen = 7;
inline bool Ip4::has_totlen() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Ip4::set_has_totlen() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Ip4::clear_has_totlen() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Ip4::clear_totlen() {
  totlen_ = 0u;
  clear_has_totlen();
}
inline ::google::protobuf::uint32 Ip4::totlen() const {
  return totlen_;
}
inline void Ip4::set_totlen(::google::protobuf::uint32 value) {
  set_has_totlen();
  totlen_ = value;
}

// optional uint32 id = 8 [default = 1234];
inline bool Ip4::has_id() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Ip4::set_has_id() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Ip4::clear_has_id() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Ip4::clear_id() {
  id_ = 1234u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Ip4::id() const {
  return id_;
}
inline void Ip4::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
}

// optional uint32 flags = 9;
inline bool Ip4::has_flags() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Ip4::set_has_flags() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Ip4::clear_has_flags() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Ip4::clear_flags() {
  flags_ = 0u;
  clear_has_flags();
}
inline ::google::protobuf::uint32 Ip4::flags() const {
  return flags_;
}
inline void Ip4::set_flags(::google::protobuf::uint32 value) {
  set_has_flags();
  flags_ = value;
}

// optional uint32 frag_ofs = 10;
inline bool Ip4::has_frag_ofs() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Ip4::set_has_frag_ofs() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Ip4::clear_has_frag_ofs() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Ip4::clear_frag_ofs() {
  frag_ofs_ = 0u;
  clear_has_frag_ofs();
}
inline ::google::protobuf::uint32 Ip4::frag_ofs() const {
  return frag_ofs_;
}
inline void Ip4::set_frag_ofs(::google::protobuf::uint32 value) {
  set_has_frag_ofs();
  frag_ofs_ = value;
}

// optional uint32 ttl = 11 [default = 127];
inline bool Ip4::has_ttl() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void Ip4::set_has_ttl() {
  _has_bits_[0] |= 0x00000800u;
}
inline void Ip4::clear_has_ttl() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void Ip4::clear_ttl() {
  ttl_ = 127u;
  clear_has_ttl();
}
inline ::google::protobuf::uint32 Ip4::ttl() const {
  return ttl_;
}
inline void Ip4::set_ttl(::google::protobuf::uint32 value) {
  set_has_ttl();
  ttl_ = value;
}

// optional uint32 proto = 12;
inline bool Ip4::has_proto() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Ip4::set_has_proto() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Ip4::clear_has_proto() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Ip4::clear_proto() {
  proto_ = 0u;
  clear_has_proto();
}
inline ::google::protobuf::uint32 Ip4::proto() const {
  return proto_;
}
inline void Ip4::set_proto(::google::protobuf::uint32 value) {
  set_has_proto();
  proto_ = value;
}

// optional uint32 cksum = 13;
inline bool Ip4::has_cksum() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void Ip4::set_has_cksum() {
  _has_bits_[0] |= 0x00002000u;
}
inline void Ip4::clear_has_cksum() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void Ip4::clear_cksum() {
  cksum_ = 0u;
  clear_has_cksum();
}
inline ::google::protobuf::uint32 Ip4::cksum() const {
  return cksum_;
}
inline void Ip4::set_cksum(::google::protobuf::uint32 value) {
  set_has_cksum();
  cksum_ = value;
}

// optional fixed32 src_ip = 14;
inline bool Ip4::has_src_ip() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void Ip4::set_has_src_ip() {
  _has_bits_[0] |= 0x00004000u;
}
inline void Ip4::clear_has_src_ip() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void Ip4::clear_src_ip() {
  src_ip_ = 0u;
  clear_has_src_ip();
}
inline ::google::protobuf::uint32 Ip4::src_ip() const {
  return src_ip_;
}
inline void Ip4::set_src_ip(::google::protobuf::uint32 value) {
  set_has_src_ip();
  src_ip_ = value;
}

// optional .OstProto.Ip4.IpAddrMode src_ip_mode = 15 [default = e_im_fixed];
inline bool Ip4::has_src_ip_mode() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void Ip4::set_has_src_ip_mode() {
  _has_bits_[0] |= 0x00008000u;
}
inline void Ip4::clear_has_src_ip_mode() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void Ip4::clear_src_ip_mode() {
  src_ip_mode_ = 0;
  clear_has_src_ip_mode();
}
inline ::OstProto::Ip4_IpAddrMode Ip4::src_ip_mode() const {
  return static_cast< ::OstProto::Ip4_IpAddrMode >(src_ip_mode_);
}
inline void Ip4::set_src_ip_mode(::OstProto::Ip4_IpAddrMode value) {
  assert(::OstProto::Ip4_IpAddrMode_IsValid(value));
  set_has_src_ip_mode();
  src_ip_mode_ = value;
}

// optional uint32 src_ip_count = 16 [default = 16];
inline bool Ip4::has_src_ip_count() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void Ip4::set_has_src_ip_count() {
  _has_bits_[0] |= 0x00010000u;
}
inline void Ip4::clear_has_src_ip_count() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void Ip4::clear_src_ip_count() {
  src_ip_count_ = 16u;
  clear_has_src_ip_count();
}
inline ::google::protobuf::uint32 Ip4::src_ip_count() const {
  return src_ip_count_;
}
inline void Ip4::set_src_ip_count(::google::protobuf::uint32 value) {
  set_has_src_ip_count();
  src_ip_count_ = value;
}

// optional fixed32 src_ip_mask = 17 [default = 4294967040];
inline bool Ip4::has_src_ip_mask() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void Ip4::set_has_src_ip_mask() {
  _has_bits_[0] |= 0x00020000u;
}
inline void Ip4::clear_has_src_ip_mask() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void Ip4::clear_src_ip_mask() {
  src_ip_mask_ = 4294967040u;
  clear_has_src_ip_mask();
}
inline ::google::protobuf::uint32 Ip4::src_ip_mask() const {
  return src_ip_mask_;
}
inline void Ip4::set_src_ip_mask(::google::protobuf::uint32 value) {
  set_has_src_ip_mask();
  src_ip_mask_ = value;
}

// optional fixed32 dst_ip = 18;
inline bool Ip4::has_dst_ip() const {
  return (_has_bits_[0] & 0x00040000u) != 0;
}
inline void Ip4::set_has_dst_ip() {
  _has_bits_[0] |= 0x00040000u;
}
inline void Ip4::clear_has_dst_ip() {
  _has_bits_[0] &= ~0x00040000u;
}
inline void Ip4::clear_dst_ip() {
  dst_ip_ = 0u;
  clear_has_dst_ip();
}
inline ::google::protobuf::uint32 Ip4::dst_ip() const {
  return dst_ip_;
}
inline void Ip4::set_dst_ip(::google::protobuf::uint32 value) {
  set_has_dst_ip();
  dst_ip_ = value;
}

// optional .OstProto.Ip4.IpAddrMode dst_ip_mode = 19 [default = e_im_fixed];
inline bool Ip4::has_dst_ip_mode() const {
  return (_has_bits_[0] & 0x00080000u) != 0;
}
inline void Ip4::set_has_dst_ip_mode() {
  _has_bits_[0] |= 0x00080000u;
}
inline void Ip4::clear_has_dst_ip_mode() {
  _has_bits_[0] &= ~0x00080000u;
}
inline void Ip4::clear_dst_ip_mode() {
  dst_ip_mode_ = 0;
  clear_has_dst_ip_mode();
}
inline ::OstProto::Ip4_IpAddrMode Ip4::dst_ip_mode() const {
  return static_cast< ::OstProto::Ip4_IpAddrMode >(dst_ip_mode_);
}
inline void Ip4::set_dst_ip_mode(::OstProto::Ip4_IpAddrMode value) {
  assert(::OstProto::Ip4_IpAddrMode_IsValid(value));
  set_has_dst_ip_mode();
  dst_ip_mode_ = value;
}

// optional uint32 dst_ip_count = 20 [default = 16];
inline bool Ip4::has_dst_ip_count() const {
  return (_has_bits_[0] & 0x00100000u) != 0;
}
inline void Ip4::set_has_dst_ip_count() {
  _has_bits_[0] |= 0x00100000u;
}
inline void Ip4::clear_has_dst_ip_count() {
  _has_bits_[0] &= ~0x00100000u;
}
inline void Ip4::clear_dst_ip_count() {
  dst_ip_count_ = 16u;
  clear_has_dst_ip_count();
}
inline ::google::protobuf::uint32 Ip4::dst_ip_count() const {
  return dst_ip_count_;
}
inline void Ip4::set_dst_ip_count(::google::protobuf::uint32 value) {
  set_has_dst_ip_count();
  dst_ip_count_ = value;
}

// optional fixed32 dst_ip_mask = 21 [default = 4294967040];
inline bool Ip4::has_dst_ip_mask() const {
  return (_has_bits_[0] & 0x00200000u) != 0;
}
inline void Ip4::set_has_dst_ip_mask() {
  _has_bits_[0] |= 0x00200000u;
}
inline void Ip4::clear_has_dst_ip_mask() {
  _has_bits_[0] &= ~0x00200000u;
}
inline void Ip4::clear_dst_ip_mask() {
  dst_ip_mask_ = 4294967040u;
  clear_has_dst_ip_mask();
}
inline ::google::protobuf::uint32 Ip4::dst_ip_mask() const {
  return dst_ip_mask_;
}
inline void Ip4::set_dst_ip_mask(::google::protobuf::uint32 value) {
  set_has_dst_ip_mask();
  dst_ip_mask_ = value;
}

// optional .OstProto.Ip4.IpOptType opt_type = 22;
inline bool Ip4::has_opt_type() const {
  return (_has_bits_[0] & 0x00400000u) != 0;
}
inline void Ip4::set_has_opt_type() {
  _has_bits_[0] |= 0x00400000u;
}
inline void Ip4::clear_has_opt_type() {
  _has_bits_[0] &= ~0x00400000u;
}
inline void Ip4::clear_opt_type() {
  opt_type_ = 0;
  clear_has_opt_type();
}
inline ::OstProto::Ip4_IpOptType Ip4::opt_type() const {
  return static_cast< ::OstProto::Ip4_IpOptType >(opt_type_);
}
inline void Ip4::set_opt_type(::OstProto::Ip4_IpOptType value) {
  assert(::OstProto::Ip4_IpOptType_IsValid(value));
  set_has_opt_type();
  opt_type_ = value;
}

// optional uint32 opt_len = 23 [default = 2];
inline bool Ip4::has_opt_len() const {
  return (_has_bits_[0] & 0x00800000u) != 0;
}
inline void Ip4::set_has_opt_len() {
  _has_bits_[0] |= 0x00800000u;
}
inline void Ip4::clear_has_opt_len() {
  _has_bits_[0] &= ~0x00800000u;
}
inline void Ip4::clear_opt_len() {
  opt_len_ = 2u;
  clear_has_opt_len();
}
inline ::google::protobuf::uint32 Ip4::opt_len() const {
  return opt_len_;
}
inline void Ip4::set_opt_len(::google::protobuf::uint32 value) {
  set_has_opt_len();
  opt_len_ = value;
}

// optional uint32 opt_data = 24;
inline bool Ip4::has_opt_data() const {
  return (_has_bits_[0] & 0x01000000u) != 0;
}
inline void Ip4::set_has_opt_data() {
  _has_bits_[0] |= 0x01000000u;
}
inline void Ip4::clear_has_opt_data() {
  _has_bits_[0] &= ~0x01000000u;
}
inline void Ip4::clear_opt_data() {
  opt_data_ = 0u;
  clear_has_opt_data();
}
inline ::google::protobuf::uint32 Ip4::opt_data() const {
  return opt_data_;
}
inline void Ip4::set_opt_data(::google::protobuf::uint32 value) {
  set_has_opt_data();
  opt_data_ = value;
}

// optional .OstProto.Ip4.IpOptMode opt_mode = 25 [default = e_om_fixed];
inline bool Ip4::has_opt_mode() const {
  return (_has_bits_[0] & 0x02000000u) != 0;
}
inline void Ip4::set_has_opt_mode() {
  _has_bits_[0] |= 0x02000000u;
}
inline void Ip4::clear_has_opt_mode() {
  _has_bits_[0] &= ~0x02000000u;
}
inline void Ip4::clear_opt_mode() {
  opt_mode_ = 0;
  clear_has_opt_mode();
}
inline ::OstProto::Ip4_IpOptMode Ip4::opt_mode() const {
  return static_cast< ::OstProto::Ip4_IpOptMode >(opt_mode_);
}
inline void Ip4::set_opt_mode(::OstProto::Ip4_IpOptMode value) {
  assert(::OstProto::Ip4_IpOptMode_IsValid(value));
  set_has_opt_mode();
  opt_mode_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::OstProto::Ip4_IpAddrMode>() {
  return ::OstProto::Ip4_IpAddrMode_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::OstProto::Ip4_IpOptType>() {
  return ::OstProto::Ip4_IpOptType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::OstProto::Ip4_IpOptMode>() {
  return ::OstProto::Ip4_IpOptMode_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ip4_2eproto__INCLUDED