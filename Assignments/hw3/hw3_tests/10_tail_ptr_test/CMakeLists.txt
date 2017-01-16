include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(10_runHW3TailPointerTest tail_ptr_test.cpp)
target_link_libraries(10_runHW3TailPointerTest hw3_library gtest gtest_main)