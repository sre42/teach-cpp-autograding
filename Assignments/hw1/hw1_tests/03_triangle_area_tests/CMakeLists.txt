include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW1TriangleAreaTests triangle_area_tests.cpp)
target_link_libraries(03_runHW1TriangleAreaTests hw1_library gtest gtest_main)
