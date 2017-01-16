include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(09_runHW5SubtractionExceptionTest subtraction_exception_test.cpp)
target_link_libraries(09_runHW5SubtractionExceptionTest gtest gtest_main hw5_library)

