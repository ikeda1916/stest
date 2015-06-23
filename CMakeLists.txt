cmake_minimum_required(VERSION 2.8)
project(shippable-test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

file(GLOB_RECURSE source_files *.cxx)

add_executable(shippable-test ${source_files})

