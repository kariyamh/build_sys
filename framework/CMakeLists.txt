
## library target
set(MY_LIBRARY_SOURCES
        src/msg.cpp
        )
set(MY_LIBRARY_HEADERS
        include
        )
add_library(framework_lib 
        STATIC  ${MY_LIBRARY_SOURCES}
        )
target_include_directories(framework_lib PUBLIC 
        ${MY_LIBRARY_HEADERS}
        )   


## Test Target

set(CMAKE_CXX_STANDARD 14)      # GoogleTest requires at least C++14
include(FetchContent)
FetchContent_Declare( googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
        )
FetchContent_MakeAvailable(googletest)
enable_testing()

set( MY_TEST_SOURCES 
        test/MessageTest.cc
        )
add_executable( FrameworkTest
        ${MY_TEST_SOURCES}
        )
target_link_libraries( FrameworkTest
        framework_lib
        GTest::gtest_main
        )

# #### Documentation
find_package(Doxygen)
doxygen_add_docs(framework_doc
              DOXYGEN_INPUT include
              DOXYGEN_OUTPUT framework
              )