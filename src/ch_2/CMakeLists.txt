set(TARGET CH_2)

add_library(${TARGET} src/ch_2.cpp)
target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

target_link_libraries(${TARGET} PUBLIC stats_calc)