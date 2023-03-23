set(TARGET CH_1)

add_library(${TARGET} src/ch_1.cpp)
target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)