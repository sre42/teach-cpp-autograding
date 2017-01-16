include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW6HashedEntryTests hashed_entry_check.cpp)
target_link_libraries(01_runHW6HashedEntryTests hw6_library gtest gtest_main)
