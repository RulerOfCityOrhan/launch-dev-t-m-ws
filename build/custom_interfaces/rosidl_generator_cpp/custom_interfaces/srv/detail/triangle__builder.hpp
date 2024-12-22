// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/Triangle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__TRIANGLE__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__TRIANGLE__BUILDER_HPP_

#include "custom_interfaces/srv/detail/triangle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Triangle_Request_c
{
public:
  explicit Init_Triangle_Request_c(::custom_interfaces::srv::Triangle_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::Triangle_Request c(::custom_interfaces::srv::Triangle_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Triangle_Request msg_;
};

class Init_Triangle_Request_b
{
public:
  explicit Init_Triangle_Request_b(::custom_interfaces::srv::Triangle_Request & msg)
  : msg_(msg)
  {}
  Init_Triangle_Request_c b(::custom_interfaces::srv::Triangle_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Triangle_Request_c(msg_);
  }

private:
  ::custom_interfaces::srv::Triangle_Request msg_;
};

class Init_Triangle_Request_a
{
public:
  Init_Triangle_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Triangle_Request_b a(::custom_interfaces::srv::Triangle_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Triangle_Request_b(msg_);
  }

private:
  ::custom_interfaces::srv::Triangle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Triangle_Request>()
{
  return custom_interfaces::srv::builder::Init_Triangle_Request_a();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Triangle_Response_area
{
public:
  explicit Init_Triangle_Response_area(::custom_interfaces::srv::Triangle_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::Triangle_Response area(::custom_interfaces::srv::Triangle_Response::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Triangle_Response msg_;
};

class Init_Triangle_Response_perimeter
{
public:
  explicit Init_Triangle_Response_perimeter(::custom_interfaces::srv::Triangle_Response & msg)
  : msg_(msg)
  {}
  Init_Triangle_Response_area perimeter(::custom_interfaces::srv::Triangle_Response::_perimeter_type arg)
  {
    msg_.perimeter = std::move(arg);
    return Init_Triangle_Response_area(msg_);
  }

private:
  ::custom_interfaces::srv::Triangle_Response msg_;
};

class Init_Triangle_Response_error
{
public:
  Init_Triangle_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Triangle_Response_perimeter error(::custom_interfaces::srv::Triangle_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_Triangle_Response_perimeter(msg_);
  }

private:
  ::custom_interfaces::srv::Triangle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Triangle_Response>()
{
  return custom_interfaces::srv::builder::Init_Triangle_Response_error();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__TRIANGLE__BUILDER_HPP_
