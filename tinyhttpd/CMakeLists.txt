cmake_minimum_required(VERSION 3.0.2)

project(tinyhttpd)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES tinyhttpd.c)
add_executable(tinyhttpd ${SOURCE_FILES})