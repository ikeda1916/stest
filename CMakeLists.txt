cmake_minimum_required(VERSION 2.8)
project(shippable-test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(sqlite3.cmake)

add_subdirectory(main)


