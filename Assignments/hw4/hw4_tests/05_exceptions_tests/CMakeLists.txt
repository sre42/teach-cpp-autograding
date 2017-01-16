include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(05_runHW4ExceptionTests exception_tests.cpp)
target_link_libraries(05_runHW4ExceptionTests hw4_library gtest gtest_main)