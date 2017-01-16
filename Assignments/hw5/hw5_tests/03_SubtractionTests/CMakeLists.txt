include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW5SubtractionTest subtraction_tests.cpp)
target_link_libraries(03_runHW5SubtractionTest gtest gtest_main hw5_library)