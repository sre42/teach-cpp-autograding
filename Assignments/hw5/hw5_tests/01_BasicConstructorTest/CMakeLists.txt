include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW5BasicConstructorTest basic_constructor_tests.cpp)
target_link_libraries(01_runHW5BasicConstructorTest gtest gtest_main hw5_library)


