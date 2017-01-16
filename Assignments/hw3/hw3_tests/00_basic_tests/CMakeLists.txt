include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runBasicHW3Tests basic_check.cpp)

target_link_libraries(00_runBasicHW3Tests hw3_library gtest gtest_main)
