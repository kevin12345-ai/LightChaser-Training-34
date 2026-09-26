// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from message_interface:msg/NodeMessage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "message_interface/msg/detail/node_message__struct.h"
#include "message_interface/msg/detail/node_message__type_support.h"
#include "message_interface/msg/detail/node_message__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace message_interface
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _NodeMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NodeMessage_type_support_ids_t;

static const _NodeMessage_type_support_ids_t _NodeMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NodeMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NodeMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NodeMessage_type_support_symbol_names_t _NodeMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_interface, msg, NodeMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_interface, msg, NodeMessage)),
  }
};

typedef struct _NodeMessage_type_support_data_t
{
  void * data[2];
} _NodeMessage_type_support_data_t;

static _NodeMessage_type_support_data_t _NodeMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NodeMessage_message_typesupport_map = {
  2,
  "message_interface",
  &_NodeMessage_message_typesupport_ids.typesupport_identifier[0],
  &_NodeMessage_message_typesupport_symbol_names.symbol_name[0],
  &_NodeMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NodeMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NodeMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &message_interface__msg__NodeMessage__get_type_hash,
  &message_interface__msg__NodeMessage__get_type_description,
  &message_interface__msg__NodeMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace message_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, message_interface, msg, NodeMessage)() {
  return &::message_interface::msg::rosidl_typesupport_c::NodeMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
