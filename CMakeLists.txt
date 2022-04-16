cmake_minimum_required(VERSION 3.0.0)
project(dblLinkedList VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(dblLinkedList main.cpp src/node.cpp src/dbll.cpp src/bst.cpp inc/node.h inc/dbll.h inc/bst.h)
include_directories(inc)

set_property(TARGET dblLinkedList PROPERTY CXX_STANDARD 17)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
