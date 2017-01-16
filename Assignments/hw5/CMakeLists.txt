cmake_minimum_required(VERSION 2.8)
project(hw5)

## Check for Windows ##
if (WIN32) # true if windows (32 and 64 bit)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif ()


set(SOURCE_FILES main.cpp)

add_executable(hw5_run ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(hw5_tests)


target_link_libraries(hw5_run hw5_library)