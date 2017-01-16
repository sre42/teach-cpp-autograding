include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(07_runHW2GetPointerToTests get_pointer_to_tests.cpp)
target_link_libraries(07_runHW2GetPointerToTests hw2_library gtest gtest_main)