set(TARGET stats_calc)

add_library(${TARGET} src/stats_calc.cpp)
target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
