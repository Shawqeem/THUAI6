// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageType.proto

#include "MessageType.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace protobuf {
}  // namespace protobuf
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_MessageType_2eproto[8];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_MessageType_2eproto = nullptr;
const uint32_t TableStruct_MessageType_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_MessageType_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021MessageType.proto\022\010protobuf*]\n\tPlaceTy"
  "pe\022\023\n\017NULL_PLACE_TYPE\020\000\022\010\n\004WALL\020\001\022\t\n\005GRA"
  "SS\020\002\022\013\n\007MACHINE\020\003\022\010\n\004GATE\020\004\022\017\n\013HIDDEN_GA"
  "TE\020\005*8\n\tShapeType\022\023\n\017NULL_SHAPE_TYPE\020\000\022\n"
  "\n\006CIRCLE\020\001\022\n\n\006SQUARE\020\002*N\n\010PropType\022\022\n\016NU"
  "LL_PROP_TYPE\020\000\022\n\n\006PTYPE1\020\001\022\n\n\006PTYPE2\020\002\022\n"
  "\n\006PTYPE3\020\003\022\n\n\006PTYPE4\020\004*d\n\rHumanBuffType\022"
  "\023\n\017NULL_HBUFF_TYPE\020\000\022\016\n\nHBUFFTYPE1\020\001\022\016\n\n"
  "HBUFFTYPE2\020\002\022\016\n\nHBUFFTYPE3\020\003\022\016\n\nHBUFFTYP"
  "E4\020\004*f\n\017ButcherBuffType\022\023\n\017NULL_BBUFF_TY"
  "PE\020\000\022\016\n\nBBUFFTYPE1\020\001\022\016\n\nBBUFFTYPE2\020\002\022\016\n\n"
  "BBUFFTYPE3\020\003\022\016\n\nBBUFFTYPE4\020\004*2\n\nPlayerTy"
  "pe\022\020\n\014HUMAN_PLAYER\020\000\022\022\n\016BUTCHER_PLAYER\020\001"
  "*`\n\tHumanType\022\023\n\017NULL_HUMAN_TYPE\020\000\022\016\n\nHU"
  "MANTYPE1\020\001\022\016\n\nHUMANTYPE2\020\002\022\016\n\nHUMANTYPE3"
  "\020\003\022\016\n\nHUMANTYPE4\020\004*l\n\013ButcherType\022\025\n\021NUL"
  "L_BUTCHER_TYPE\020\000\022\020\n\014BUTCHERTYPE1\020\001\022\020\n\014BU"
  "TCHERTYPE2\020\002\022\020\n\014BUTCHERTYPE3\020\003\022\020\n\014BUTCHE"
  "RTYPE4\020\004b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_MessageType_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MessageType_2eproto = {
  false, false, 736, descriptor_table_protodef_MessageType_2eproto, "MessageType.proto", 
  &descriptor_table_MessageType_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_MessageType_2eproto::offsets,
  nullptr, file_level_enum_descriptors_MessageType_2eproto, file_level_service_descriptors_MessageType_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_MessageType_2eproto_getter() {
  return &descriptor_table_MessageType_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_MessageType_2eproto(&descriptor_table_MessageType_2eproto);
namespace protobuf {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PlaceType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
  return file_level_enum_descriptors_MessageType_2eproto[0];
}
bool PlaceType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ShapeType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
  return file_level_enum_descriptors_MessageType_2eproto[1];
}
bool ShapeType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PropType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
  return file_level_enum_descriptors_MessageType_2eproto[2];
}
bool PropType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* HumanBuffType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
  return file_level_enum_descriptors_MessageType_2eproto[3];
}
bool HumanBuffType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ButcherBuffType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
  return file_level_enum_descriptors_MessageType_2eproto[4];
}
bool ButcherBuffType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PlayerType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
  return file_level_enum_descriptors_MessageType_2eproto[5];
}
bool PlayerType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* HumanType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
  return file_level_enum_descriptors_MessageType_2eproto[6];
}
bool HumanType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ButcherType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MessageType_2eproto);
  return file_level_enum_descriptors_MessageType_2eproto[7];
}
bool ButcherType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
