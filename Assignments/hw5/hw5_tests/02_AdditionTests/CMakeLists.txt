include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(02_runHW5AdditionTest addition_tests.cpp)
target_link_libraries(02_runHW5AdditionTest gtest gtest_main hw5_library)