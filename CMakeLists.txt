cmake_minimum_required(VERSION 3.14)
project(build_sys)

# flags

# files

#include
include_directories(
        ${CMAKE_SOURCE_DIR}/src
        ${CMAKE_SOURCE_DIR}/include
        )

#target
add_executable(binary 
                ${CMAKE_SOURCE_DIR}/src/main.cpp
                ${CMAKE_SOURCE_DIR}/src/shape.cpp
                ${CMAKE_SOURCE_DIR}/src/msg.cpp
                )

## setting up google test   



# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    ShapeTest
    test/ShapeTest.cc
    ${CMAKE_SOURCE_DIR}/src/shape.cpp
)
target_link_libraries(
    ShapeTest
    GTest::gtest_main
)


#### Documentation
find_package(Doxygen)

doxygen_add_docs(doc
             DOXYGEN_INPUT "${CMAKE_CURRENT_SOURCE_DIR}/include"
             )

