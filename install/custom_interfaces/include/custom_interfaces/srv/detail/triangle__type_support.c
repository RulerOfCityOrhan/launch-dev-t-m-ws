// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:srv/Triangle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/srv/detail/triangle__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/srv/detail/triangle__functions.h"
#include "custom_interfaces/srv/detail/triangle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__srv__Triangle_Request__init(message_memory);
}

void Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_fini_function(void * message_memory)
{
  custom_interfaces__srv__Triangle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__Triangle_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__Triangle_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__Triangle_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_message_members = {
  "custom_interfaces__srv",  // message namespace
  "Triangle_Request",  // message name
  3,  // number of fields
  sizeof(custom_interfaces__srv__Triangle_Request),
  Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_message_member_array,  // message members
  Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_message_type_support_handle = {
  0,
  &Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Triangle_Request)() {
  if (!Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_message_type_support_handle.typesupport_identifier) {
    Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Triangle_Request__rosidl_typesupport_introspection_c__Triangle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/srv/detail/triangle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/srv/detail/triangle__functions.h"
// already included above
// #include "custom_interfaces/srv/detail/triangle__struct.h"


// Include directives for member types
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__srv__Triangle_Response__init(message_memory);
}

void Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_fini_function(void * message_memory)
{
  custom_interfaces__srv__Triangle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_message_member_array[3] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__Triangle_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "perimeter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__Triangle_Response, perimeter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__Triangle_Response, area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_message_members = {
  "custom_interfaces__srv",  // message namespace
  "Triangle_Response",  // message name
  3,  // number of fields
  sizeof(custom_interfaces__srv__Triangle_Response),
  Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_message_member_array,  // message members
  Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_message_type_support_handle = {
  0,
  &Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Triangle_Response)() {
  if (!Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_message_type_support_handle.typesupport_identifier) {
    Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Triangle_Response__rosidl_typesupport_introspection_c__Triangle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interfaces/srv/detail/triangle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interfaces__srv__detail__triangle__rosidl_typesupport_introspection_c__Triangle_service_members = {
  "custom_interfaces__srv",  // service namespace
  "Triangle",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interfaces__srv__detail__triangle__rosidl_typesupport_introspection_c__Triangle_Request_message_type_support_handle,
  NULL  // response message
  // custom_interfaces__srv__detail__triangle__rosidl_typesupport_introspection_c__Triangle_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_interfaces__srv__detail__triangle__rosidl_typesupport_introspection_c__Triangle_service_type_support_handle = {
  0,
  &custom_interfaces__srv__detail__triangle__rosidl_typesupport_introspection_c__Triangle_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Triangle_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Triangle_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Triangle)() {
  if (!custom_interfaces__srv__detail__triangle__rosidl_typesupport_introspection_c__Triangle_service_type_support_handle.typesupport_identifier) {
    custom_interfaces__srv__detail__triangle__rosidl_typesupport_introspection_c__Triangle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interfaces__srv__detail__triangle__rosidl_typesupport_introspection_c__Triangle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Triangle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Triangle_Response)()->data;
  }

  return &custom_interfaces__srv__detail__triangle__rosidl_typesupport_introspection_c__Triangle_service_type_support_handle;
}
