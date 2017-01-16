include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(05_runHW2IsEmptyTest is_empty_tests.cpp)

target_link_libraries(05_runHW2IsEmptyTest hw2_library gtest gtest_main)