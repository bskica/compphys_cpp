set(TARGET ch_2)
add_executable(${TARGET} examples.cpp)

target_link_libraries(${TARGET} PUBLIC stats_calc CH_2)