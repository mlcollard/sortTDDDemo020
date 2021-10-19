# @file CMakeLists.txt
# 
# CMake files for functional decomposition examples

cmake_minimum_required(VERSION 3.20)

# project info
project(sortTDD)

# force release debug since used for demonstration
set(CMAKE_BUILD_TYPE Debug)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Turn on all warnings, and make warnings errors
if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

# Application is based on .cpp file only
add_executable(sortTest sortTest.cpp sort.cpp)

# run command on example file
add_custom_target(test COMMENT "Test sort functions"
                       COMMAND $<TARGET_FILE:sortTest>
                       DEPENDS sortTest)
