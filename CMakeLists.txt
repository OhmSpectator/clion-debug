cmake_minimum_required(VERSION 3.5)

project(clion_debug)
include_directories(.)

add_executable(check_type check_type.c)
set_target_properties(check_type PROPERTIES COMPILE_FLAGS "${CMAKE_C_FLAGS} -Werror")

add_executable(printf_not_found printf_not_found.c)

add_executable(offsetof offsetof.c)

add_executable(undef_macro undef.c)

add_executable(format_string format_string.c)

