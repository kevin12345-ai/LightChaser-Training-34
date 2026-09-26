// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_interface:msg/NodeMessage.idl
// generated code does not contain a copyright notice
#include "message_interface/msg/detail/node_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
message_interface__msg__NodeMessage__init(message_interface__msg__NodeMessage * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    message_interface__msg__NodeMessage__fini(msg);
    return false;
  }
  return true;
}

void
message_interface__msg__NodeMessage__fini(message_interface__msg__NodeMessage * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
message_interface__msg__NodeMessage__are_equal(const message_interface__msg__NodeMessage * lhs, const message_interface__msg__NodeMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
message_interface__msg__NodeMessage__copy(
  const message_interface__msg__NodeMessage * input,
  message_interface__msg__NodeMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

message_interface__msg__NodeMessage *
message_interface__msg__NodeMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message_interface__msg__NodeMessage * msg = (message_interface__msg__NodeMessage *)allocator.allocate(sizeof(message_interface__msg__NodeMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_interface__msg__NodeMessage));
  bool success = message_interface__msg__NodeMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message_interface__msg__NodeMessage__destroy(message_interface__msg__NodeMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message_interface__msg__NodeMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message_interface__msg__NodeMessage__Sequence__init(message_interface__msg__NodeMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message_interface__msg__NodeMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(message_interface__msg__NodeMessage)) {
      return false;
    }
    data = (message_interface__msg__NodeMessage *)allocator.zero_allocate(size, sizeof(message_interface__msg__NodeMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_interface__msg__NodeMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_interface__msg__NodeMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
message_interface__msg__NodeMessage__Sequence__fini(message_interface__msg__NodeMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_interface__msg__NodeMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

message_interface__msg__NodeMessage__Sequence *
message_interface__msg__NodeMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message_interface__msg__NodeMessage__Sequence * array = (message_interface__msg__NodeMessage__Sequence *)allocator.allocate(sizeof(message_interface__msg__NodeMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message_interface__msg__NodeMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message_interface__msg__NodeMessage__Sequence__destroy(message_interface__msg__NodeMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message_interface__msg__NodeMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message_interface__msg__NodeMessage__Sequence__are_equal(const message_interface__msg__NodeMessage__Sequence * lhs, const message_interface__msg__NodeMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message_interface__msg__NodeMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message_interface__msg__NodeMessage__Sequence__copy(
  const message_interface__msg__NodeMessage__Sequence * input,
  message_interface__msg__NodeMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(message_interface__msg__NodeMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(message_interface__msg__NodeMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    message_interface__msg__NodeMessage * data =
      (message_interface__msg__NodeMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message_interface__msg__NodeMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          message_interface__msg__NodeMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message_interface__msg__NodeMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
