// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: svlan.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "svlan.pb.h"

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


}  // namespace


void protobuf_AssignDesc_svlan_2eproto() {
  protobuf_AddDesc_svlan_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "svlan.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_svlan_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_svlan_2eproto() {
}

void protobuf_AddDesc_svlan_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::OstProto::protobuf_AddDesc_protocol_2eproto();
  ::OstProto::protobuf_AddDesc_vlan_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013svlan.proto\022\010OstProto\032\016protocol.proto\032"
    "\nvlan.proto:2\n\005svlan\022\022.OstProto.Protocol"
    "\030\314\001 \001(\0132\016.OstProto.Vlan", 103);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "svlan.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::OstProto::Protocol::default_instance(),
    204, 11, false, false,
    &::OstProto::Vlan::default_instance());
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_svlan_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_svlan_2eproto {
  StaticDescriptorInitializer_svlan_2eproto() {
    protobuf_AddDesc_svlan_2eproto();
  }
} static_descriptor_initializer_svlan_2eproto_;
::google::protobuf::internal::ExtensionIdentifier< ::OstProto::Protocol,
    ::google::protobuf::internal::MessageTypeTraits< ::OstProto::Vlan >, 11, false >
  svlan(kSvlanFieldNumber, ::OstProto::Vlan::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace OstProto

// @@protoc_insertion_point(global_scope)
