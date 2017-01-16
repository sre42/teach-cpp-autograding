include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(04_runHW1TriangleDeterminingTests triangle_determining_tests.cpp)

target_link_libraries(04_runHW1TriangleDeterminingTests hw1_library gtest gtest_main )