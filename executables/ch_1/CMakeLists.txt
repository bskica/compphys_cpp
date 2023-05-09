set(TARGET ch_1)
add_executable(${TARGET} cli_inputs.cpp)

target_link_libraries(${TARGET} PUBLIC CH_1)
