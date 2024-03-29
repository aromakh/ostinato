// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hexdump.proto

#ifndef PROTOBUF_hexdump_2eproto__INCLUDED
#define PROTOBUF_hexdump_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "protocol.pb.h"
// @@protoc_insertion_point(includes)

namespace OstProto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_hexdump_2eproto();
void protobuf_AssignDesc_hexdump_2eproto();
void protobuf_ShutdownFile_hexdump_2eproto();

class HexDump;

// ===================================================================

class HexDump : public ::google::protobuf::Message {
 public:
  HexDump();
  virtual ~HexDump();

  HexDump(const HexDump& from);

  inline HexDump& operator=(const HexDump& from) {
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
  static const HexDump& default_instance();

  void Swap(HexDump* other);

  // implements Message ----------------------------------------------

  HexDump* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HexDump& from);
  void MergeFrom(const HexDump& from);
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

  // accessors -------------------------------------------------------

  // optional bytes content = 1;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 1;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const void* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // optional bool pad_until_end = 2 [default = true];
  inline bool has_pad_until_end() const;
  inline void clear_pad_until_end();
  static const int kPadUntilEndFieldNumber = 2;
  inline bool pad_until_end() const;
  inline void set_pad_until_end(bool value);

  // @@protoc_insertion_point(class_scope:OstProto.HexDump)
 private:
  inline void set_has_content();
  inline void clear_has_content();
  inline void set_has_pad_until_end();
  inline void clear_has_pad_until_end();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* content_;
  bool pad_until_end_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_hexdump_2eproto();
  friend void protobuf_AssignDesc_hexdump_2eproto();
  friend void protobuf_ShutdownFile_hexdump_2eproto();

  void InitAsDefaultInstance();
  static HexDump* default_instance_;
};
// ===================================================================

static const int kHexDumpFieldNumber = 104;
extern ::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::HexDump >, 11, false >
  hexDump;

// ===================================================================

// HexDump

// optional bytes content = 1;
inline bool HexDump::has_content() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HexDump::set_has_content() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HexDump::clear_has_content() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HexDump::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& HexDump::content() const {
  return *content_;
}
inline void HexDump::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void HexDump::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void HexDump::set_content(const void* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HexDump::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* HexDump::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void HexDump::set_allocated_content(::std::string* content) {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bool pad_until_end = 2 [default = true];
inline bool HexDump::has_pad_until_end() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HexDump::set_has_pad_until_end() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HexDump::clear_has_pad_until_end() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HexDump::clear_pad_until_end() {
  pad_until_end_ = true;
  clear_has_pad_until_end();
}
inline bool HexDump::pad_until_end() const {
  return pad_until_end_;
}
inline void HexDump::set_pad_until_end(bool value) {
  set_has_pad_until_end();
  pad_until_end_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_hexdump_2eproto__INCLUDED
