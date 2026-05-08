// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from coach_interfaces:msg/ExerciseConditions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "coach_interfaces/msg/detail/exercise_conditions__rosidl_typesupport_introspection_c.h"
#include "coach_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "coach_interfaces/msg/detail/exercise_conditions__functions.h"
#include "coach_interfaces/msg/detail/exercise_conditions__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  coach_interfaces__msg__ExerciseConditions__init(message_memory);
}

void coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_fini_function(void * message_memory)
{
  coach_interfaces__msg__ExerciseConditions__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coach_interfaces__msg__ExerciseConditions, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elbow_stable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coach_interfaces__msg__ExerciseConditions, elbow_stable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "back_straight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coach_interfaces__msg__ExerciseConditions, back_straight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rom_complete",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coach_interfaces__msg__ExerciseConditions, rom_complete),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elbow_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coach_interfaces__msg__ExerciseConditions, elbow_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "back_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coach_interfaces__msg__ExerciseConditions, back_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rom_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coach_interfaces__msg__ExerciseConditions, rom_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_message_members = {
  "coach_interfaces__msg",  // message namespace
  "ExerciseConditions",  // message name
  7,  // number of fields
  sizeof(coach_interfaces__msg__ExerciseConditions),
  false,  // has_any_key_member_
  coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_message_member_array,  // message members
  coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_init_function,  // function to initialize message memory (memory has to be allocated)
  coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_message_type_support_handle = {
  0,
  &coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_message_members,
  get_message_typesupport_handle_function,
  &coach_interfaces__msg__ExerciseConditions__get_type_hash,
  &coach_interfaces__msg__ExerciseConditions__get_type_description,
  &coach_interfaces__msg__ExerciseConditions__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_coach_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coach_interfaces, msg, ExerciseConditions)() {
  coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_message_type_support_handle.typesupport_identifier) {
    coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &coach_interfaces__msg__ExerciseConditions__rosidl_typesupport_introspection_c__ExerciseConditions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
