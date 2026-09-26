// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_interface:msg/NodeMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "message_interface/msg/node_message.h"


#ifndef MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__STRUCT_H_
#define MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NodeMessage in the package message_interface.
typedef struct message_interface__msg__NodeMessage
{
  rosidl_runtime_c__String data;
} message_interface__msg__NodeMessage;

// Struct for a sequence of message_interface__msg__NodeMessage.
typedef struct message_interface__msg__NodeMessage__Sequence
{
  message_interface__msg__NodeMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_interface__msg__NodeMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INTERFACE__MSG__DETAIL__NODE_MESSAGE__STRUCT_H_
