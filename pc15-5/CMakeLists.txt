cmake_minimum_required(VERSION 3.8)
project(pc15_5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp filter.h filter.cpp)
add_executable(pc15_5 ${SOURCE_FILES})