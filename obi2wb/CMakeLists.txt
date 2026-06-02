cmake_minimum_required(VERSION 3.15)
project(obi2wb_verif)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# RTL sources
set(RTL_SOURCES
    ${CMAKE_SOURCE_DIR}/rtl/obi2wb.sv
)

# Verilator output directory
set(OBJ_DIR ${CMAKE_BINARY_DIR}/obj_dir)

# Generate and build Verilator model
add_custom_command(
    OUTPUT ${OBJ_DIR}/Vobi2wb
    COMMAND verilator
        -Wall
        --cc ${RTL_SOURCES}
        --top-module obi2wb
        --trace
        --coverage
        --exe ${CMAKE_SOURCE_DIR}/tb/tb.cpp
        --Mdir ${OBJ_DIR}
        --build
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    DEPENDS ${RTL_SOURCES} ${CMAKE_SOURCE_DIR}/tb/tb.cpp
)

add_custom_target(verilate ALL
    DEPENDS ${OBJ_DIR}/Vobi2wb
)

# Run simulation
add_custom_target(run
    COMMAND ${OBJ_DIR}/Vobi2wb
    DEPENDS verilate
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

# Generate coverage report
add_custom_target(coverage
    COMMAND ${OBJ_DIR}/Vobi2wb
    COMMAND verilator_coverage --write-info coverage.info coverage.dat
    COMMAND  verilator_coverage --annotate cov_report coverage.dat
   # COMMAND cat coverage.info
    DEPENDS verilate
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)
