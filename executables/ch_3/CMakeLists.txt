set(TARGET ch_3)

add_executable(${TARGET} examples.cpp)

target_link_libraries(${TARGET} PUBLIC CH_3)