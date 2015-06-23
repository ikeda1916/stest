cmake_minimum_required(VERSION 2.8)
project(shippable-main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

file(GLOB_RECURSE source_files *.cxx)

add_executable(shippable-main ${source_files})

target_link_libraries(shippable-main
	sqlite3
	dl
	pthread
)
