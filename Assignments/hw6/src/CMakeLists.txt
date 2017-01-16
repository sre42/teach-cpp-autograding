cmake_minimum_required(VERSION 2.8)

project(hw6_library)

## Check for Windows ##
if (WIN32) # true if windows (32 and 64 bit)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif ()


set(HEADER_FILES Entry.h HashedEntry.h DictionaryInterface.h HashedDictionary.h )

set(SOURCE_FILES temp.cpp)

add_library(hw6_library ${SOURCE_FILES} ${HEADER_FILES})

set_target_properties(hw6_library PROPERTIES LINKER_LANGUAGE CXX)