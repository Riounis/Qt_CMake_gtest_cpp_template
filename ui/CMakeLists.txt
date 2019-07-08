file(GLOB GUI_SOURCES "*.cpp")
add_executable(lib_gui ${GUI_SOURCES})
target_link_libraries(lib_gui PRIVATE lib)
