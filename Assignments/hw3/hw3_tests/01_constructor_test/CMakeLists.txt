include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW3ConstructorTest constructor_test.cpp)
target_link_libraries(01_runHW3ConstructorTest hw3_library gtest gtest_main)