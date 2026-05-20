cmake_minimum_required(VERSION 3.15)

project(verif_gpio)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --------------------------------------------------
# RTL Sources
# --------------------------------------------------
set(RTL_SOURCES
    ${CMAKE_SOURCE_DIR}/../rtl/debounce.sv
    ${CMAKE_SOURCE_DIR}/../rtl/gpio.sv
)

# --------------------------------------------------
# Testbench Sources
# --------------------------------------------------
set(TB_SOURCES
    ${CMAKE_SOURCE_DIR}/../tb/top.cpp
    ${CMAKE_SOURCE_DIR}/../tb/driver.cpp
    ${CMAKE_SOURCE_DIR}/../tb/checker.cpp
    ${CMAKE_SOURCE_DIR}/../tb/ref.cpp
)

# --------------------------------------------------
# Verilator Build Directory
# --------------------------------------------------
set(OBJ_DIR ${CMAKE_BINARY_DIR}/obj_dir)

# --------------------------------------------------
# Verilator Flags
# --------------------------------------------------
set(VERILATOR_FLAGS
    -Wall
    --cc
    --trace
    --coverage
    --top-module gpio
)

# --------------------------------------------------
# Build Verilated Model
# --------------------------------------------------
add_custom_command(
    OUTPUT ${OBJ_DIR}/Vgpio

    COMMAND verilator
        ${VERILATOR_FLAGS}
        ${RTL_SOURCES}
        --exe ${TB_SOURCES}
        --Mdir ${OBJ_DIR}

    COMMAND make -C ${OBJ_DIR} -f Vgpio.mk -j

    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}

    DEPENDS
        ${RTL_SOURCES}
        ${TB_SOURCES}
)

# --------------------------------------------------
# Main Build Target
# --------------------------------------------------
add_custom_target(verilate ALL
    DEPENDS ${OBJ_DIR}/Vgpio
)

# --------------------------------------------------
# Run Simulation
# --------------------------------------------------
add_custom_target(run
    COMMAND ${OBJ_DIR}/Vgpio
    DEPENDS verilate
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

# --------------------------------------------------
# Coverage Report
# --------------------------------------------------
add_custom_target(coverage
    COMMAND verilator_coverage
            --annotate cov_report
            coverage.dat

    DEPENDS run

    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

# --------------------------------------------------
# Clean Coverage Files
# --------------------------------------------------
add_custom_target(clean_cov
    COMMAND rm -rf coverage.dat cov_report
)
