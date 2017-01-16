include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runHW5BasicTest basic_check.cpp)
target_link_libraries(00_runHW5BasicTest gtest gtest_main hw5_library)


