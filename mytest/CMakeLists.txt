cmake_minimum_required(VERSION 3.0.2)

project(mytest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 1.c test.h)
add_executable(mtytest ${SOURCE_FILES})