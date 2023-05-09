cmake_minimum_required(VERSION 3.26)

project("Comp_Phys_Examples")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})


include_directories(inc)
add_subdirectory(libs)
add_subdirectory(src)
add_subdirectory(executables)


