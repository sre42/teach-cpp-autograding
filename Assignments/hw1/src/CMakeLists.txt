cmake_minimum_required(VERSION 2.8)

project(hw1_library)

## Check for Windows ##
if (WIN32) # true if windows (32 and 64 bit)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif ()


set(HEADER_FILES triangle.hpp triangle_Interface.hpp)

set(SOURCE_FILES triangle.cpp)

add_library(hw1_library ${SOURCE_FILES} ${HEADER_FILES})

set_target_properties(hw1_library PROPERTIES LINKER_LANGUAGE CXX)