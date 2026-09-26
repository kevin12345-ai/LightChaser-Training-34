// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from message_interface:msg/NodeMessage.idl
// generated code does not contain a copyright notice

#include "message_interface/msg/detail/node_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_message_interface
const rosidl_type_hash_t *
message_interface__msg__NodeMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x49, 0x5b, 0xae, 0x63, 0xc5, 0x74, 0x4d,
      0x02, 0x32, 0xed, 0xdf, 0xf3, 0x4f, 0x33, 0x86,
      0xff, 0xd7, 0x26, 0x0f, 0x89, 0x57, 0x61, 0x9b,
      0xa2, 0xa0, 0xfa, 0x35, 0xff, 0x3e, 0x53, 0x9b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char message_interface__msg__NodeMessage__TYPE_NAME[] = "message_interface/msg/NodeMessage";

// Define type names, field names, and default values
static char message_interface__msg__NodeMessage__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field message_interface__msg__NodeMessage__FIELDS[] = {
  {
    {message_interface__msg__NodeMessage__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
message_interface__msg__NodeMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {message_interface__msg__NodeMessage__TYPE_NAME, 33, 33},
      {message_interface__msg__NodeMessage__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
message_interface__msg__NodeMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {message_interface__msg__NodeMessage__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 12, 12},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
message_interface__msg__NodeMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *message_interface__msg__NodeMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
