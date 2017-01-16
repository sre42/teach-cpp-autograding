include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runHW1TriangleBasicTests triangle_basic_tests.cpp)
target_link_libraries(00_runHW1TriangleBasicTests hw1_library gtest gtest_main)
