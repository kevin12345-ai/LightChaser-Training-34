// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from message_interface:msg/NodeMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "message_interface/msg/detail/node_message__functions.h"
#include "message_interface/msg/detail/node_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace message_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NodeMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) message_interface::msg::NodeMessage(_init);
}

void NodeMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<message_interface::msg::NodeMessage *>(message_memory);
  typed_message->~NodeMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodeMessage_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_interface::msg::NodeMessage, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodeMessage_message_members = {
  "message_interface::msg",  // message namespace
  "NodeMessage",  // message name
  1,  // number of fields
  sizeof(message_interface::msg::NodeMessage),
  false,  // has_any_key_member_
  NodeMessage_message_member_array,  // message members
  NodeMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodeMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodeMessage_message_members,
  get_message_typesupport_handle_function,
  &message_interface__msg__NodeMessage__get_type_hash,
  &message_interface__msg__NodeMessage__get_type_description,
  &message_interface__msg__NodeMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace message_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<message_interface::msg::NodeMessage>()
{
  return &::message_interface::msg::rosidl_typesupport_introspection_cpp::NodeMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, message_interface, msg, NodeMessage)() {
  return &::message_interface::msg::rosidl_typesupport_introspection_cpp::NodeMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
