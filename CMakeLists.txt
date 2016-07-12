cmake_minimum_required(VERSION 3.5)

project(clion_debug)
include_directories(.)

add_executable(cast_to_typeof cast_to_typeof.c)
set_target_properties(cast_to_typeof PROPERTIES COMPILE_FLAGS "${CMAKE_C_FLAGS} -Werror")

add_executable(printf_not_found printf_not_found.c)

add_executable(offsetof_with_typedef offsetof_with_typedef.c)

add_executable(undef undef.c)

add_executable(format_string_via_macro format_string_via_macro.c)

