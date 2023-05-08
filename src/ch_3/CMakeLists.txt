set(TARGET CH_3)

add_library(${TARGET} src/ch_3.cpp)
target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
