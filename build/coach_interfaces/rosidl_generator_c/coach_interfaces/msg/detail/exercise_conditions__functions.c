// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from coach_interfaces:msg/ExerciseConditions.idl
// generated code does not contain a copyright notice
#include "coach_interfaces/msg/detail/exercise_conditions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
coach_interfaces__msg__ExerciseConditions__init(coach_interfaces__msg__ExerciseConditions * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    coach_interfaces__msg__ExerciseConditions__fini(msg);
    return false;
  }
  // elbow_stable
  // back_straight
  // rom_complete
  // elbow_angle
  // back_angle
  // rom_percent
  return true;
}

void
coach_interfaces__msg__ExerciseConditions__fini(coach_interfaces__msg__ExerciseConditions * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // elbow_stable
  // back_straight
  // rom_complete
  // elbow_angle
  // back_angle
  // rom_percent
}

bool
coach_interfaces__msg__ExerciseConditions__are_equal(const coach_interfaces__msg__ExerciseConditions * lhs, const coach_interfaces__msg__ExerciseConditions * rhs)
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
  // elbow_stable
  if (lhs->elbow_stable != rhs->elbow_stable) {
    return false;
  }
  // back_straight
  if (lhs->back_straight != rhs->back_straight) {
    return false;
  }
  // rom_complete
  if (lhs->rom_complete != rhs->rom_complete) {
    return false;
  }
  // elbow_angle
  if (lhs->elbow_angle != rhs->elbow_angle) {
    return false;
  }
  // back_angle
  if (lhs->back_angle != rhs->back_angle) {
    return false;
  }
  // rom_percent
  if (lhs->rom_percent != rhs->rom_percent) {
    return false;
  }
  return true;
}

bool
coach_interfaces__msg__ExerciseConditions__copy(
  const coach_interfaces__msg__ExerciseConditions * input,
  coach_interfaces__msg__ExerciseConditions * output)
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
  // elbow_stable
  output->elbow_stable = input->elbow_stable;
  // back_straight
  output->back_straight = input->back_straight;
  // rom_complete
  output->rom_complete = input->rom_complete;
  // elbow_angle
  output->elbow_angle = input->elbow_angle;
  // back_angle
  output->back_angle = input->back_angle;
  // rom_percent
  output->rom_percent = input->rom_percent;
  return true;
}

coach_interfaces__msg__ExerciseConditions *
coach_interfaces__msg__ExerciseConditions__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coach_interfaces__msg__ExerciseConditions * msg = (coach_interfaces__msg__ExerciseConditions *)allocator.allocate(sizeof(coach_interfaces__msg__ExerciseConditions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coach_interfaces__msg__ExerciseConditions));
  bool success = coach_interfaces__msg__ExerciseConditions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coach_interfaces__msg__ExerciseConditions__destroy(coach_interfaces__msg__ExerciseConditions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coach_interfaces__msg__ExerciseConditions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coach_interfaces__msg__ExerciseConditions__Sequence__init(coach_interfaces__msg__ExerciseConditions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coach_interfaces__msg__ExerciseConditions * data = NULL;

  if (size) {
    data = (coach_interfaces__msg__ExerciseConditions *)allocator.zero_allocate(size, sizeof(coach_interfaces__msg__ExerciseConditions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coach_interfaces__msg__ExerciseConditions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coach_interfaces__msg__ExerciseConditions__fini(&data[i - 1]);
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
coach_interfaces__msg__ExerciseConditions__Sequence__fini(coach_interfaces__msg__ExerciseConditions__Sequence * array)
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
      coach_interfaces__msg__ExerciseConditions__fini(&array->data[i]);
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

coach_interfaces__msg__ExerciseConditions__Sequence *
coach_interfaces__msg__ExerciseConditions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coach_interfaces__msg__ExerciseConditions__Sequence * array = (coach_interfaces__msg__ExerciseConditions__Sequence *)allocator.allocate(sizeof(coach_interfaces__msg__ExerciseConditions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coach_interfaces__msg__ExerciseConditions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coach_interfaces__msg__ExerciseConditions__Sequence__destroy(coach_interfaces__msg__ExerciseConditions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coach_interfaces__msg__ExerciseConditions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coach_interfaces__msg__ExerciseConditions__Sequence__are_equal(const coach_interfaces__msg__ExerciseConditions__Sequence * lhs, const coach_interfaces__msg__ExerciseConditions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coach_interfaces__msg__ExerciseConditions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coach_interfaces__msg__ExerciseConditions__Sequence__copy(
  const coach_interfaces__msg__ExerciseConditions__Sequence * input,
  coach_interfaces__msg__ExerciseConditions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coach_interfaces__msg__ExerciseConditions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coach_interfaces__msg__ExerciseConditions * data =
      (coach_interfaces__msg__ExerciseConditions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coach_interfaces__msg__ExerciseConditions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coach_interfaces__msg__ExerciseConditions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coach_interfaces__msg__ExerciseConditions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
