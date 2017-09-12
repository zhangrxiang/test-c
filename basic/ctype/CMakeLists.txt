cmake_minimum_required(VERSION 3.0.2)

project(ctype)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=C99")
set(SOURCE_FILES
        main.c
        isalpha.c
        isalnum.c
        iscntrl.c
        isdigit.c
        )
add_executable(ctype ${SOURCE_FILES})