cmake_minimum_required(VERSION 3.7)

project(cmake-demo)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(tinyhttpd)
add_subdirectory(mytest)
add_subdirectory(basic)
