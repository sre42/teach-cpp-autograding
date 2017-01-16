include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW1ValidTriangleTests valid_triangle_tests.cpp)
target_link_libraries(01_runHW1ValidTriangleTests hw1_library gtest gtest_main )