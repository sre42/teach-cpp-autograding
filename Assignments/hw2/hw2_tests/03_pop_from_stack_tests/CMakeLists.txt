include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW2PopFromStackTests pop_tests.cpp)
target_link_libraries(03_runHW2PopFromStackTests hw2_library gtest gtest_main)