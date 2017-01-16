include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicHW1Tests ../basic_tests/basic_check.cpp)

##linking
target_link_libraries(runBasicHW1Tests gtest gtest_main)
target_link_libraries(runBasicHW1Tests hw1_library)