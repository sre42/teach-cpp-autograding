include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW3removeTest remove_test.cpp)
target_link_libraries(03_runHW3removeTest hw3_library gtest gtest_main)