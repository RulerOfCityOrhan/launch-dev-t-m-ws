// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/Triangle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TRIANGLE__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__TRIANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Triangle in the package custom_interfaces.
typedef struct custom_interfaces__srv__Triangle_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} custom_interfaces__srv__Triangle_Request;

// Struct for a sequence of custom_interfaces__srv__Triangle_Request.
typedef struct custom_interfaces__srv__Triangle_Request__Sequence
{
  custom_interfaces__srv__Triangle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__Triangle_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Triangle in the package custom_interfaces.
typedef struct custom_interfaces__srv__Triangle_Response
{
  rosidl_runtime_c__String error;
  int64_t perimeter;
  double area;
} custom_interfaces__srv__Triangle_Response;

// Struct for a sequence of custom_interfaces__srv__Triangle_Response.
typedef struct custom_interfaces__srv__Triangle_Response__Sequence
{
  custom_interfaces__srv__Triangle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__Triangle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TRIANGLE__STRUCT_H_
