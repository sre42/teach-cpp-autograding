include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(06_runHW3ContainsTest contains_test.cpp)
target_link_libraries(06_runHW3ContainsTest hw3_library gtest gtest_main)