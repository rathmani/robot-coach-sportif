// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from coach_interfaces:msg/RepResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "coach_interfaces/msg/rep_result.h"


#ifndef COACH_INTERFACES__MSG__DETAIL__REP_RESULT__STRUCT_H_
#define COACH_INTERFACES__MSG__DETAIL__REP_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'error_type'
// Member 'feedback_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RepResult in the package coach_interfaces.
typedef struct coach_interfaces__msg__RepResult
{
  std_msgs__msg__Header header;
  bool success;
  rosidl_runtime_c__String error_type;
  rosidl_runtime_c__String feedback_message;
  int32_t rep_count;
} coach_interfaces__msg__RepResult;

// Struct for a sequence of coach_interfaces__msg__RepResult.
typedef struct coach_interfaces__msg__RepResult__Sequence
{
  coach_interfaces__msg__RepResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coach_interfaces__msg__RepResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COACH_INTERFACES__MSG__DETAIL__REP_RESULT__STRUCT_H_
