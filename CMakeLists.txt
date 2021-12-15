cmake_minimum_required(VERSION 3.0)

set(myproject "IEP")

project(${myproject})

add_subdirectory(src)

add_executable("${PROJECT_NAME}" Main.cpp)

target_link_libraries("${PROJECT_NAME}" PRIVATE Doctor Hospital)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")