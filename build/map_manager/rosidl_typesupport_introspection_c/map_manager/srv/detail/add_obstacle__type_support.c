// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from map_manager:srv/AddObstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "map_manager/srv/detail/add_obstacle__rosidl_typesupport_introspection_c.h"
#include "map_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "map_manager/srv/detail/add_obstacle__functions.h"
#include "map_manager/srv/detail/add_obstacle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_manager__srv__AddObstacle_Request__init(message_memory);
}

void map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_fini_function(void * message_memory)
{
  map_manager__srv__AddObstacle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager__srv__AddObstacle_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager__srv__AddObstacle_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager__srv__AddObstacle_Request, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_message_members = {
  "map_manager__srv",  // message namespace
  "AddObstacle_Request",  // message name
  3,  // number of fields
  sizeof(map_manager__srv__AddObstacle_Request),
  map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_message_member_array,  // message members
  map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_message_type_support_handle = {
  0,
  &map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_manager, srv, AddObstacle_Request)() {
  if (!map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_message_type_support_handle.typesupport_identifier) {
    map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &map_manager__srv__AddObstacle_Request__rosidl_typesupport_introspection_c__AddObstacle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "map_manager/srv/detail/add_obstacle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "map_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "map_manager/srv/detail/add_obstacle__functions.h"
// already included above
// #include "map_manager/srv/detail/add_obstacle__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_manager__srv__AddObstacle_Response__init(message_memory);
}

void map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_fini_function(void * message_memory)
{
  map_manager__srv__AddObstacle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager__srv__AddObstacle_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_manager__srv__AddObstacle_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_message_members = {
  "map_manager__srv",  // message namespace
  "AddObstacle_Response",  // message name
  2,  // number of fields
  sizeof(map_manager__srv__AddObstacle_Response),
  map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_message_member_array,  // message members
  map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_message_type_support_handle = {
  0,
  &map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_manager, srv, AddObstacle_Response)() {
  if (!map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_message_type_support_handle.typesupport_identifier) {
    map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &map_manager__srv__AddObstacle_Response__rosidl_typesupport_introspection_c__AddObstacle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "map_manager/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "map_manager/srv/detail/add_obstacle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers map_manager__srv__detail__add_obstacle__rosidl_typesupport_introspection_c__AddObstacle_service_members = {
  "map_manager__srv",  // service namespace
  "AddObstacle",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // map_manager__srv__detail__add_obstacle__rosidl_typesupport_introspection_c__AddObstacle_Request_message_type_support_handle,
  NULL  // response message
  // map_manager__srv__detail__add_obstacle__rosidl_typesupport_introspection_c__AddObstacle_Response_message_type_support_handle
};

static rosidl_service_type_support_t map_manager__srv__detail__add_obstacle__rosidl_typesupport_introspection_c__AddObstacle_service_type_support_handle = {
  0,
  &map_manager__srv__detail__add_obstacle__rosidl_typesupport_introspection_c__AddObstacle_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_manager, srv, AddObstacle_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_manager, srv, AddObstacle_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_manager
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_manager, srv, AddObstacle)() {
  if (!map_manager__srv__detail__add_obstacle__rosidl_typesupport_introspection_c__AddObstacle_service_type_support_handle.typesupport_identifier) {
    map_manager__srv__detail__add_obstacle__rosidl_typesupport_introspection_c__AddObstacle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)map_manager__srv__detail__add_obstacle__rosidl_typesupport_introspection_c__AddObstacle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_manager, srv, AddObstacle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_manager, srv, AddObstacle_Response)()->data;
  }

  return &map_manager__srv__detail__add_obstacle__rosidl_typesupport_introspection_c__AddObstacle_service_type_support_handle;
}
