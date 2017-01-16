include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(07_runHW3GetFrequencyTest get_frequency_test.cpp)
target_link_libraries(07_runHW3GetFrequencyTest hw3_library gtest gtest_main)