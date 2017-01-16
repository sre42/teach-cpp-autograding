include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW2ConstructorTest constructor_tests.cpp)
target_link_libraries(01_runHW2ConstructorTest hw2_library gtest gtest_main)