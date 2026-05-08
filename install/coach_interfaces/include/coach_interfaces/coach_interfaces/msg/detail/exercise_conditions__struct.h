// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from coach_interfaces:msg/ExerciseConditions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "coach_interfaces/msg/exercise_conditions.h"


#ifndef COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__STRUCT_H_
#define COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__STRUCT_H_

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

/// Struct defined in msg/ExerciseConditions in the package coach_interfaces.
typedef struct coach_interfaces__msg__ExerciseConditions
{
  std_msgs__msg__Header header;
  bool elbow_stable;
  bool back_straight;
  bool rom_complete;
  float elbow_angle;
  float back_angle;
  float rom_percent;
} coach_interfaces__msg__ExerciseConditions;

// Struct for a sequence of coach_interfaces__msg__ExerciseConditions.
typedef struct coach_interfaces__msg__ExerciseConditions__Sequence
{
  coach_interfaces__msg__ExerciseConditions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coach_interfaces__msg__ExerciseConditions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__STRUCT_H_
