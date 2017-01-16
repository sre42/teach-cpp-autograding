include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(04_runHW6RemoveTests hashed_dictionary_removeTest.cpp)
target_link_libraries(04_runHW6RemoveTests hw6_library gtest gtest_main)
