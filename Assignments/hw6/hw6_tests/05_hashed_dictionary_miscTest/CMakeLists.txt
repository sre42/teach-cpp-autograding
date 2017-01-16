include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(05_runHW6MiscTests hashed_dictionary_miscTest.cpp)
target_link_libraries(05_runHW6MiscTests hw6_library gtest gtest_main)
