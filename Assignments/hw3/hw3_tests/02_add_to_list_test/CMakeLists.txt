include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(02_runHW3AddToListTest add_to_list_test.cpp)
target_link_libraries(02_runHW3AddToListTest hw3_library gtest gtest_main)