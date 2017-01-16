include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runBasicHW6Tests basic_check.cpp)

target_link_libraries(00_runBasicHW6Tests gtest gtest_main hw6_library)
