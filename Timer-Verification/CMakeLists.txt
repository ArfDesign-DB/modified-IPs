cmake_minimum_required(VERSION 3.15)
project(timer_verify)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(RTL_SOURCES
    ${CMAKE_SOURCE_DIR}/rtl/timer.sv
)

set(OBJ_DIR ${CMAKE_BINARY_DIR}/obj_dir)

# ----------------------------
# VERILATOR BUILD (FIXED)
# ----------------------------
add_custom_command(
    OUTPUT ${OBJ_DIR}/Vtimer
    COMMAND verilator
        -Wall
        --cc ${RTL_SOURCES}
        --top-module timer
        --trace
        --coverage
        --exe ${CMAKE_SOURCE_DIR}/tb/tb_timer.cpp
        --Mdir ${OBJ_DIR}
        --build
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

# ----------------------------
# TARGET
# ----------------------------
add_custom_target(verilate ALL
    DEPENDS ${OBJ_DIR}/Vtimer
)

# ----------------------------
# RUN TARGET
# ----------------------------
add_custom_target(run
    COMMAND ${OBJ_DIR}/Vtimer
    WORKING_DIRECTORY ${OBJ_DIR}
    DEPENDS verilate
)
