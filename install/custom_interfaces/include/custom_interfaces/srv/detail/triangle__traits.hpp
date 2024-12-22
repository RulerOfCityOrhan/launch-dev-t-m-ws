// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/Triangle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TRIANGLE__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TRIANGLE__TRAITS_HPP_

#include "custom_interfaces/srv/detail/triangle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::Triangle_Request>()
{
  return "custom_interfaces::srv::Triangle_Request";
}

template<>
inline const char * name<custom_interfaces::srv::Triangle_Request>()
{
  return "custom_interfaces/srv/Triangle_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Triangle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::Triangle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::Triangle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::Triangle_Response>()
{
  return "custom_interfaces::srv::Triangle_Response";
}

template<>
inline const char * name<custom_interfaces::srv::Triangle_Response>()
{
  return "custom_interfaces/srv/Triangle_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Triangle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::Triangle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::Triangle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::Triangle>()
{
  return "custom_interfaces::srv::Triangle";
}

template<>
inline const char * name<custom_interfaces::srv::Triangle>()
{
  return "custom_interfaces/srv/Triangle";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Triangle>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::Triangle_Request>::value &&
    has_fixed_size<custom_interfaces::srv::Triangle_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::Triangle>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::Triangle_Request>::value &&
    has_bounded_size<custom_interfaces::srv::Triangle_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::Triangle>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::Triangle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::Triangle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TRIANGLE__TRAITS_HPP_
