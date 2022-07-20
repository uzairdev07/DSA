cmake_minimum_required(VERSION 3.20)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(DSA
        main.cpp
        linear/Array.h
        linear/Array.cpp
        linear/Stack.h
        linear/Stack.cpp
        linear/queue/Queue.h
        linear/queue/Queue.cpp
        README.md)
