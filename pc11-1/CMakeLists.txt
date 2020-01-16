cmake_minimum_required(VERSION 3.8)
project(pc11_1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp translate.cpp translate.h)
add_executable(pc11_1 ${SOURCE_FILES})