
## library target

set(MY_LIBRARY_SOURCES
    src/shape.cpp)
set(MY_LIBRARY_HEADERS
    include)

add_library(shape_lib 
        STATIC  ${MY_LIBRARY_SOURCES})
target_include_directories(shape_lib
        PUBLIC ${MY_LIBRARY_HEADERS})   


## Test Target

set(CMAKE_CXX_STANDARD 14)      # GoogleTest requires at least C++14
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)
enable_testing()

set(MY_LIBRARY_TEST_SOURCES 
    test/ShapeTest.cc)
add_executable(
    ShapeTest
    ${MY_LIBRARY_TEST_SOURCES}
    ${MY_LIBRARY_SOURCES}
)
target_include_directories(ShapeTest
        PUBLIC ${MY_LIBRARY_HEADERS})
target_link_libraries(
    ShapeTest
    GTest::gtest_main
)

# #### Documentation
find_package(Doxygen)
doxygen_add_docs(doc
              DOXYGEN_INPUT include
              )