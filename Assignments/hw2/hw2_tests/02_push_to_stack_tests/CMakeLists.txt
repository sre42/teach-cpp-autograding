include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(02_runHW2PushToStackTests pust_tests.cpp)
target_link_libraries(02_runHW2PushToStackTests hw2_library gtest gtest_main)