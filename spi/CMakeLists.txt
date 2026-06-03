cmake_minimum_required(VERSION 3.15)

project(SPI_verif)

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
    ${RTL_DIR}/prim_util_pkg.sv
    ${RTL_DIR}/prim_count_pkg.sv
    ${RTL_DIR}/prim_flop.sv
    ${RTL_DIR}/prim_generic_flop.sv
    ${RTL_DIR}/prim_fifo_sync.sv
    ${RTL_DIR}/prim_fifo_sync_cnt.sv
    ${RTL_DIR}/prim_count.sv    
    ${RTL_DIR}/spi_host.sv
    ${RTL_DIR}/spi_top.sv  
)

# -------------------------------------------------
# Testbench
# -------------------------------------------------
set(TB_SOURCE
    ${TB_DIR}/spi_tb.cpp
)

# -------------------------------------------------
# Verilator Command
# -------------------------------------------------
add_custom_command(
    OUTPUT ${OBJ_DIR}/Vspi_top

    COMMAND verilator
        -Wall
        -Wno-fatal
        -Wno-PINCONNECTEMPTY
        -Wno-ASSIGNDLY
    	-Wno-CASEINCOMPLETE
        --trace
        --coverage
        --cc ${RTL_SOURCES}
        --top-module spi_top
        --exe ${TB_SOURCE}
        -I${RTL_DIR}
        --Mdir ${OBJ_DIR}

    COMMAND make
        -C ${OBJ_DIR}
        -f Vspi_top.mk
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
    DEPENDS ${OBJ_DIR}/Vspi_top
)

# -------------------------------------------------
# Run Simulation
# -------------------------------------------------
add_custom_target(
    run
    COMMAND ${OBJ_DIR}/Vspi_top
    DEPENDS verilate
)
