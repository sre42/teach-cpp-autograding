cmake_minimum_required(VERSION 2.8)

project(hw4_library)

## Check for Windows ##
if (WIN32) # true if windows (32 and 64 bit)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif ()


set(HEADER_FILES Shape.h Point2D.h Circle.h Rectangle.h Square.h CustomException.h)

set(SOURCE_FILES temp.cpp )

add_library(hw4_library STATIC ${SOURCE_FILES} ${HEADER_FILES})

set_target_properties(hw4_library PROPERTIES LINKER_LANGUAGE CXX)