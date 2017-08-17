cmake_minimum_required(VERSION 3.0.2)

project(signal)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=C99")
set(SOURCE_FILES main.c)
add_executable(signal ${SOURCE_FILES})