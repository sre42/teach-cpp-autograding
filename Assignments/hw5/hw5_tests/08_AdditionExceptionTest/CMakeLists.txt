include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(08_runHW5AdditionExceptionTest addition_exception_test.cpp)
target_link_libraries(08_runHW5AdditionExceptionTest gtest gtest_main hw5_library)

