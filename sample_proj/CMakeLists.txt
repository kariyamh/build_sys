## Executable Target

set(MY_EXECUTABLE_SOURCES
    src/main.cpp
    )

add_executable(main
    ${MY_EXECUTABLE_SOURCES}
    )
target_link_libraries(main 
    shape_lib
    )  
