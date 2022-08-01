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
        linear/queue/PriorityQueue.h
        linear/queue/PriorityQueue.cpp
        linear/linkedList/Node.h
        linear/linkedList/List.h
        linear/linkedList/List.cpp
        linear/linkedList/CList.h
        linear/linkedList/CList.cpp
        README.md linear/linkedList/DList.cpp linear/linkedList/DList.h linear/linkedList/DNode.h linear/linkedList/CDList.cpp linear/linkedList/CDList.h)
