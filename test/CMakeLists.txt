file(GLOB TEST_SOURCES "*.cpp")
add_executable(lib_test ${TEST_SOURCES})
target_link_libraries(lib_test PRIVATE lib)
