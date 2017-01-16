include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(11_runHW3MidPointerTest mid_ptr_test.cpp)
target_link_libraries(11_runHW3MidPointerTest hw3_library gtest gtest_main)