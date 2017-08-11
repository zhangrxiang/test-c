cmake_minimum_required(VERSION 3.7)

project(mytest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 1.c 1.c ../basic/string/main.c)
add_executable(mtytest ${SOURCE_FILES})