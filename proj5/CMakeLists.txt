cmake_minimum_required(VERSION 3.8)
project(proj5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ContainerIfc-proj5.h Node-proj5.h List-proj5.h sdad.h)
add_executable(proj5 ${SOURCE_FILES})