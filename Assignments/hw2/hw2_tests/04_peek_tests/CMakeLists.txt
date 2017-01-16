include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(04_runHW2PeekTests peek_tests.cpp)
target_link_libraries(04_runHW2PeekTests hw2_library gtest gtest_main)