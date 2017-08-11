cmake_minimum_required(VERSION 3.0.2)

project(string)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.c main.h)
add_executable(string ${SOURCE_FILES})