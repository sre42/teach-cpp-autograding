include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(02_runHW4AreaTests area_tests.cpp)
target_link_libraries(02_runHW4AreaTests hw4_library gtest gtest_main)