cmake_minimum_required(VERSION 3.0.2)

project(mq)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=C99")
set(SOURCE_FILES mqcreate.c)
add_executable(mq ${SOURCE_FILES})