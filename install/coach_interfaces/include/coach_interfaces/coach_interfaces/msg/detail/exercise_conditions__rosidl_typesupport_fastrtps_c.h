// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from coach_interfaces:msg/ExerciseConditions.idl
// generated code does not contain a copyright notice
#ifndef COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "coach_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "coach_interfaces/msg/detail/exercise_conditions__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
bool cdr_serialize_coach_interfaces__msg__ExerciseConditions(
  const coach_interfaces__msg__ExerciseConditions * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
bool cdr_deserialize_coach_interfaces__msg__ExerciseConditions(
  eprosima::fastcdr::Cdr &,
  coach_interfaces__msg__ExerciseConditions * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
size_t get_serialized_size_coach_interfaces__msg__ExerciseConditions(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
size_t max_serialized_size_coach_interfaces__msg__ExerciseConditions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
bool cdr_serialize_key_coach_interfaces__msg__ExerciseConditions(
  const coach_interfaces__msg__ExerciseConditions * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
size_t get_serialized_size_key_coach_interfaces__msg__ExerciseConditions(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
size_t max_serialized_size_key_coach_interfaces__msg__ExerciseConditions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coach_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coach_interfaces, msg, ExerciseConditions)();

#ifdef __cplusplus
}
#endif

#endif  // COACH_INTERFACES__MSG__DETAIL__EXERCISE_CONDITIONS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
