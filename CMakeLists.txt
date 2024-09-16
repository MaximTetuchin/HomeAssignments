cmake_minimum_required(VERSION 3.10)
project(Hello_world)
include_directories(${PROJECT_SOURCE_DIR})
add_executable(Hello_world main.cpp function.cpp)