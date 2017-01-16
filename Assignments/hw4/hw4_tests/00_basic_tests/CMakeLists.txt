include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runHW4BasicTests basic_check.cpp)
target_link_libraries(00_runHW4BasicTests hw4_library gtest gtest_main)
