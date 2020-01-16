cmake_minimum_required(VERSION 3.8)
project(1440pj3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES MyVector-proj3.h ContainerIfc-proj3.h Driver-proj3.cpp)
add_executable(1440pj3 ${SOURCE_FILES})