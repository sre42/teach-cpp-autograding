include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(04_runHW3isEmptyTest is_empty_test.cpp)
target_link_libraries(04_runHW3isEmptyTest hw3_library gtest gtest_main)