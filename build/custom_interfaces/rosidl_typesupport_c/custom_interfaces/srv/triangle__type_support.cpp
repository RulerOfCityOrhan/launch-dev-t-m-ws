// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from custom_interfaces:srv/Triangle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custom_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "custom_interfaces/srv/detail/triangle__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Triangle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Triangle_Request_type_support_ids_t;

static const _Triangle_Request_type_support_ids_t _Triangle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Triangle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Triangle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Triangle_Request_type_support_symbol_names_t _Triangle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, Triangle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Triangle_Request)),
  }
};

typedef struct _Triangle_Request_type_support_data_t
{
  void * data[2];
} _Triangle_Request_type_support_data_t;

static _Triangle_Request_type_support_data_t _Triangle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Triangle_Request_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Triangle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Triangle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Triangle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Triangle_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Triangle_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, srv, Triangle_Request)() {
  return &::custom_interfaces::srv::rosidl_typesupport_c::Triangle_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "custom_interfaces/srv/detail/triangle__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Triangle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Triangle_Response_type_support_ids_t;

static const _Triangle_Response_type_support_ids_t _Triangle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Triangle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Triangle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Triangle_Response_type_support_symbol_names_t _Triangle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, Triangle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Triangle_Response)),
  }
};

typedef struct _Triangle_Response_type_support_data_t
{
  void * data[2];
} _Triangle_Response_type_support_data_t;

static _Triangle_Response_type_support_data_t _Triangle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Triangle_Response_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Triangle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Triangle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Triangle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Triangle_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Triangle_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, srv, Triangle_Response)() {
  return &::custom_interfaces::srv::rosidl_typesupport_c::Triangle_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Triangle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Triangle_type_support_ids_t;

static const _Triangle_type_support_ids_t _Triangle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Triangle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Triangle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Triangle_type_support_symbol_names_t _Triangle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, Triangle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Triangle)),
  }
};

typedef struct _Triangle_type_support_data_t
{
  void * data[2];
} _Triangle_type_support_data_t;

static _Triangle_type_support_data_t _Triangle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Triangle_service_typesupport_map = {
  2,
  "custom_interfaces",
  &_Triangle_service_typesupport_ids.typesupport_identifier[0],
  &_Triangle_service_typesupport_symbol_names.symbol_name[0],
  &_Triangle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Triangle_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Triangle_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_custom_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, custom_interfaces, srv, Triangle)() {
  return &::custom_interfaces::srv::rosidl_typesupport_c::Triangle_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
