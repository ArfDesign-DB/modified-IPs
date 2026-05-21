cmake_minimum_required(VERSION 3.15)

project(I2C_verif)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -------------------------------------------------
# Paths
# -------------------------------------------------
set(RTL_DIR ${CMAKE_SOURCE_DIR}/rtl)
set(TB_DIR  ${CMAKE_SOURCE_DIR}/tb)
set(OBJ_DIR ${CMAKE_BINARY_DIR}/obj_dir)

# -------------------------------------------------
# RTL Sources
# -------------------------------------------------
set(RTL_SOURCES
    ${RTL_DIR}/timescale.v
    ${RTL_DIR}/i2c_master_defines.v
    ${RTL_DIR}/i2c_master_top.v
    ${RTL_DIR}/i2c_master_bit_ctrl.v
    ${RTL_DIR}/i2c_master_byte_ctrl.v
)

# -------------------------------------------------
# Testbench
# -------------------------------------------------
set(TB_SOURCE
    ${TB_DIR}/i2c_tb.cpp
)

# -------------------------------------------------
# Verilator Command
# -------------------------------------------------
add_custom_command(
    OUTPUT ${OBJ_DIR}/Vi2c_master_top

    COMMAND verilator
        -Wall
        -Wno-ASSIGNDLY
    	-Wno-CASEINCOMPLETE
        --trace
        --coverage
        --cc ${RTL_SOURCES}
        --top-module i2c_master_top
        --exe ${TB_SOURCE}
        -I${RTL_DIR}
        --Mdir ${OBJ_DIR}

    COMMAND make
        -C ${OBJ_DIR}
        -f Vi2c_master_top.mk
        -j

    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}

    DEPENDS
        ${RTL_SOURCES}
        ${TB_SOURCE}
)

# -------------------------------------------------
# Build Target
# -------------------------------------------------
add_custom_target(
    verilate ALL
    DEPENDS ${OBJ_DIR}/Vi2c_master_top
)

# -------------------------------------------------
# Run Simulation
# -------------------------------------------------
add_custom_target(
    run
    COMMAND ${OBJ_DIR}/Vi2c_master_top
    DEPENDS verilate
)
