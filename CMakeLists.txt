cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME function_1)

project(${PROJECT_NAME})

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a -Wall -g1 -O1")

set(SOURCES
            main_function.cpp
            function_def.cpp
            function.h)

add_executable(${PROJECT_NAME} ${SOURCES})

add_library(lib_fun SHARED function_def.cpp function.h)

set(BUILD_SHARED_LIBS YES)

target_link_libraries(function_1 PRIVATE lib_fun)

set(varName "I'll be back!")

message(${varName})

set(varCache "Fucking beach!" CACHE STRING "Var fucking name" FORCE)



