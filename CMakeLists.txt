cmake_minimum_required(VERSION 3.10)

project(MyProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

set(SOURCES 
	src/dynamic_array.cpp
)

add_executable(algorithm main.cpp ${SOURCES})