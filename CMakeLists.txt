cmake_minimum_required(VERSION 3.24)
project(linkedlistclass)

set(CMAKE_CXX_STANDARD 17)

add_executable(linkedlistclass main.cpp LinkedList.cpp LinkedList.h Node.h)
