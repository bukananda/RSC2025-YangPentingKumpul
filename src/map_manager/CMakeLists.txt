cmake_minimum_required(VERSION 3.8)
project(map_manager)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

set(interface_file
  "msg/MapState.msg"
  "srv/AddObstacle.srv"
  "srv/AddVictim.srv"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${interface_file}
  DEPENDENCIES std_msgs
)
ament_export_dependencies(rosidl_default_runtime)

add_executable(map_publish src/map_publisher_function.cpp)
add_executable(map_subscribe src/map_subscriber_function.cpp)
add_executable(add_obstacle src/add_obstacle.cpp)
add_executable(add_victim src/add_victim.cpp)
ament_target_dependencies(map_publish rclcpp std_msgs)
ament_target_dependencies(map_subscribe rclcpp std_msgs)
ament_target_dependencies(add_obstacle rclcpp)
ament_target_dependencies(add_victim rclcpp)

install(TARGETS
  map_publish
  map_subscribe
  add_obstacle
  add_victim
  DESTINATION lib/${PROJECT_NAME})

rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} rosidl_typesupport_cpp)

target_link_libraries(map_publish "${cpp_typesupport_target}")
target_link_libraries(add_obstacle "${cpp_typesupport_target}")
target_link_libraries(add_victim "${cpp_typesupport_target}")
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
