cmake_minimum_required(VERSION 3.6)
project(ex1C__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BinaryTree.cpp BinaryTree.h AddElement.cpp AddElement.h)
add_executable(ex1C__ ${SOURCE_FILES})