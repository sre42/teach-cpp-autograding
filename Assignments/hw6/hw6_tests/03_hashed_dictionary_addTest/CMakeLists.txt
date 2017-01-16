include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW6AddTests hashed_dictionary_addTest.cpp)
target_link_libraries(03_runHW6AddTests hw6_library gtest gtest_main)
