cmake_minimum_required(VERSION 3.8)
project(1440_pj4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES ContainerIfc-proj4.h Driver.proj4.cpp MyVector-proj4.h MyVector-proj4.h ContainerIfc-proj4.h)
add_executable(1440_pj4 ${SOURCE_FILES})