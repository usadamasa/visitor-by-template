cmake_minimum_required(VERSION 3.8)
project(visitor_by_template)

set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
file(GLOB_RECURSE HEADER_FILES src/*.h)

include_directories(src)

add_executable(visitor_by_template ${SOURCE_FILES} ${HEADER_FILES})
