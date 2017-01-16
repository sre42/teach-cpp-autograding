include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runBasicHW2Tests ../00_basic_tests/basic_check.cpp)

target_link_libraries(00_runBasicHW2Tests gtest gtest_main)
target_link_libraries(00_runBasicHW2Tests hw2_library)
