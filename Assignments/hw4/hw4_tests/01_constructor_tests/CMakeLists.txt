include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW4ConstructorTest constructor_tests.cpp)
target_link_libraries(01_runHW4ConstructorTest hw4_library gtest gtest_main)