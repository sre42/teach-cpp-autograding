include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(09_runHW3HeadPointerTest head_ptr_test.cpp)
target_link_libraries(09_runHW3HeadPointerTest hw3_library gtest gtest_main)