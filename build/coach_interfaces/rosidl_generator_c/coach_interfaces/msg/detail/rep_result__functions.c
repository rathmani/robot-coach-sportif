// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from coach_interfaces:msg/RepResult.idl
// generated code does not contain a copyright notice
#include "coach_interfaces/msg/detail/rep_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `error_type`
// Member `feedback_message`
#include "rosidl_runtime_c/string_functions.h"

bool
coach_interfaces__msg__RepResult__init(coach_interfaces__msg__RepResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    coach_interfaces__msg__RepResult__fini(msg);
    return false;
  }
  // success
  // error_type
  if (!rosidl_runtime_c__String__init(&msg->error_type)) {
    coach_interfaces__msg__RepResult__fini(msg);
    return false;
  }
  // feedback_message
  if (!rosidl_runtime_c__String__init(&msg->feedback_message)) {
    coach_interfaces__msg__RepResult__fini(msg);
    return false;
  }
  // rep_count
  return true;
}

void
coach_interfaces__msg__RepResult__fini(coach_interfaces__msg__RepResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // success
  // error_type
  rosidl_runtime_c__String__fini(&msg->error_type);
  // feedback_message
  rosidl_runtime_c__String__fini(&msg->feedback_message);
  // rep_count
}

bool
coach_interfaces__msg__RepResult__are_equal(const coach_interfaces__msg__RepResult * lhs, const coach_interfaces__msg__RepResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_type), &(rhs->error_type)))
  {
    return false;
  }
  // feedback_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback_message), &(rhs->feedback_message)))
  {
    return false;
  }
  // rep_count
  if (lhs->rep_count != rhs->rep_count) {
    return false;
  }
  return true;
}

bool
coach_interfaces__msg__RepResult__copy(
  const coach_interfaces__msg__RepResult * input,
  coach_interfaces__msg__RepResult * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // error_type
  if (!rosidl_runtime_c__String__copy(
      &(input->error_type), &(output->error_type)))
  {
    return false;
  }
  // feedback_message
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_message), &(output->feedback_message)))
  {
    return false;
  }
  // rep_count
  output->rep_count = input->rep_count;
  return true;
}

coach_interfaces__msg__RepResult *
coach_interfaces__msg__RepResult__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coach_interfaces__msg__RepResult * msg = (coach_interfaces__msg__RepResult *)allocator.allocate(sizeof(coach_interfaces__msg__RepResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coach_interfaces__msg__RepResult));
  bool success = coach_interfaces__msg__RepResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coach_interfaces__msg__RepResult__destroy(coach_interfaces__msg__RepResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coach_interfaces__msg__RepResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coach_interfaces__msg__RepResult__Sequence__init(coach_interfaces__msg__RepResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coach_interfaces__msg__RepResult * data = NULL;

  if (size) {
    data = (coach_interfaces__msg__RepResult *)allocator.zero_allocate(size, sizeof(coach_interfaces__msg__RepResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coach_interfaces__msg__RepResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coach_interfaces__msg__RepResult__fini(&data[i - 1]);
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
coach_interfaces__msg__RepResult__Sequence__fini(coach_interfaces__msg__RepResult__Sequence * array)
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
      coach_interfaces__msg__RepResult__fini(&array->data[i]);
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

coach_interfaces__msg__RepResult__Sequence *
coach_interfaces__msg__RepResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coach_interfaces__msg__RepResult__Sequence * array = (coach_interfaces__msg__RepResult__Sequence *)allocator.allocate(sizeof(coach_interfaces__msg__RepResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coach_interfaces__msg__RepResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coach_interfaces__msg__RepResult__Sequence__destroy(coach_interfaces__msg__RepResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coach_interfaces__msg__RepResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coach_interfaces__msg__RepResult__Sequence__are_equal(const coach_interfaces__msg__RepResult__Sequence * lhs, const coach_interfaces__msg__RepResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coach_interfaces__msg__RepResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coach_interfaces__msg__RepResult__Sequence__copy(
  const coach_interfaces__msg__RepResult__Sequence * input,
  coach_interfaces__msg__RepResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coach_interfaces__msg__RepResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coach_interfaces__msg__RepResult * data =
      (coach_interfaces__msg__RepResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coach_interfaces__msg__RepResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coach_interfaces__msg__RepResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coach_interfaces__msg__RepResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
