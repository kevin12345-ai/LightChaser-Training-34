// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from message_interface:msg/NodeMessage.idl
// generated code does not contain a copyright notice
#ifndef MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "message_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_interface/msg/detail/node_message__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_interface
bool cdr_serialize_message_interface__msg__NodeMessage(
  const message_interface__msg__NodeMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_interface
bool cdr_deserialize_message_interface__msg__NodeMessage(
  eprosima::fastcdr::Cdr &,
  message_interface__msg__NodeMessage * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_interface
size_t get_serialized_size_message_interface__msg__NodeMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_interface
size_t max_serialized_size_message_interface__msg__NodeMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_interface
bool cdr_serialize_key_message_interface__msg__NodeMessage(
  const message_interface__msg__NodeMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_interface
size_t get_serialized_size_key_message_interface__msg__NodeMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_interface
size_t max_serialized_size_key_message_interface__msg__NodeMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_interface, msg, NodeMessage)();

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
