cmake_minimum_required(VERSION 2.8)
project(SDL_Graphics)

## Check for Windows ##
if (WIN32) # true if windows (32 and 64 bit)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif ()

set(SOURCE_FILES main.cpp)
add_executable(SDL_Graphics ${SOURCE_FILES})

add_subdirectory(SDL2)

target_link_libraries(SDL_Graphics SDL2main SDL2 )
target_link_libraries(SDL_Graphics hw4_library )