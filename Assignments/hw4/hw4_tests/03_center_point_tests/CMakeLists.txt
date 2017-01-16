include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW4CenterPointTests cneter_point_tests.cpp)
target_link_libraries(03_runHW4CenterPointTests hw4_library gtest gtest_main)