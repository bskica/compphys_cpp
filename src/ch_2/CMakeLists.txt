set(TARGET CH_2)

add_library(${TARGET} src/ch_2.cpp)
target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)