cmake_minimum_required(VERSION 3.12)

project(wb_interconnect_verif LANGUAGES C CXX)

find_program(VERILATOR verilator REQUIRED)

set(RTL
    ../rtl/wb_interconnect.sv
)

# =========================================================
# BOOTROM READ
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_bootrom_read

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_bootrom_read.cpp
        ../tb/tests/test_bootrom_read.cpp
        ../tb/tick.cpp

        -o Vwb_bootrom_read

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_bootrom_read
    DEPENDS obj_dir/Vwb_bootrom_read
)

add_custom_command(TARGET test_bootrom_read POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_bootrom_read
    ${CMAKE_BINARY_DIR}/test_bootrom_read
)

# =========================================================
# BOOTROM WRITE
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_bootrom_write

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_bootrom_write.cpp
        ../tb/tests/test_bootrom_write.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_bootrom_write

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_bootrom_write
    DEPENDS obj_dir/Vwb_bootrom_write
)

add_custom_command(TARGET test_bootrom_write POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_bootrom_write
    ${CMAKE_BINARY_DIR}/test_bootrom_write
)


# =========================================================
# TEST DECODE ERROR 
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_decode_error

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_decode_error.cpp
        ../tb/tests/test_decode_error.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_decode_error

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_decode_error
    DEPENDS obj_dir/Vwb_decode_error
)

add_custom_command(TARGET test_decode_error POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_decode_error
    ${CMAKE_BINARY_DIR}/test_decode_error
)


# =========================================================
# RESET BEHAVIOR
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_reset_behavior

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_reset_behavior.cpp
        ../tb/tests/test_reset_behavior.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_reset_behavior

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_reset_behavior
    DEPENDS obj_dir/Vwb_reset_behavior
)

add_custom_command(TARGET test_reset_behavior POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_reset_behavior
    ${CMAKE_BINARY_DIR}/test_reset_behavior
)



# =========================================================
# SRAM WRITE
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_sram_write

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_sram_write.cpp
        ../tb/tests/test_sram_write.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_sram_write

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_sram_write
    DEPENDS obj_dir/Vwb_sram_write
)

add_custom_command(TARGET test_sram_write POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_sram_write
    ${CMAKE_BINARY_DIR}/test_sram_write
)



# =========================================================
# SRAM READ
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_sram_read

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_sram_read.cpp
        ../tb/tests/test_sram_read.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_sram_read

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_sram_read
    DEPENDS obj_dir/Vwb_sram_read
)

add_custom_command(TARGET test_sram_read POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_sram_read
    ${CMAKE_BINARY_DIR}/test_sram_read
)



# =========================================================
# UART WRITE
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_uart_write

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_uart_write.cpp
        ../tb/tests/test_uart_write.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_uart_write

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_uart_write
    DEPENDS obj_dir/Vwb_uart_write
)

add_custom_command(TARGET test_uart_write POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_uart_write
    ${CMAKE_BINARY_DIR}/test_uart_write
)




# =========================================================
# GPIO WRITE
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_gpio_write

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_gpio_write.cpp
        ../tb/tests/test_gpio_write.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_gpio_write

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_gpio_write
    DEPENDS obj_dir/Vwb_gpio_write
)

add_custom_command(TARGET test_gpio_write POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_gpio_write
    ${CMAKE_BINARY_DIR}/test_gpio_write
)


# =========================================================
# TIMER WRITE
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_timer_write

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_timer_write.cpp
        ../tb/tests/test_timer_write.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_timer_write

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_timer_write
    DEPENDS obj_dir/Vwb_timer_write
)

add_custom_command(TARGET test_timer_write POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_timer_write
    ${CMAKE_BINARY_DIR}/test_timer_write
)




# =========================================================
# I2C WRITE
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_i2c_write

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_i2c_write.cpp
        ../tb/tests/test_i2c_write.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_i2c_write

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_i2c_write
    DEPENDS obj_dir/Vwb_i2c_write
)

add_custom_command(TARGET test_i2c_write POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_i2c_write
    ${CMAKE_BINARY_DIR}/test_i2c_write
)


# =========================================================
# XIP WRITE
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_xip_write

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_xip_write.cpp
        ../tb/tests/test_xip_write.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_xip_write

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_xip_write
    DEPENDS obj_dir/Vwb_xip_write
)

add_custom_command(TARGET test_xip_write POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_xip_write
    ${CMAKE_BINARY_DIR}/test_xip_write
)


# =========================================================
# XIP READ
# =========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_xip_read

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace
        -Wall
        -I../tb
        --top-module wb_interconnect

        ${RTL}

        ../tb/main/main_xip_read.cpp
        ../tb/tests/test_xip_read.cpp
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_xip_read

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(test_xip_read
    DEPENDS obj_dir/Vwb_xip_read
)

add_custom_command(TARGET test_xip_read POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_BINARY_DIR}/obj_dir/Vwb_xip_read
    ${CMAKE_BINARY_DIR}/test_xip_read
)






# ========================================================
# REGRESSION (WITH CODE + FUNCTIONAL COVERAGE SUPPORT)
# ========================================================

add_custom_command(
    OUTPUT obj_dir/Vwb_regression

    COMMAND ${VERILATOR}
        --cc
        --exe
        --build
        --trace

        # ====================================================
        # CODE COVERAGE (IMPORTANT FIX)
        # ====================================================
        --coverage


        -Wall
        -I../tb

        --top-module wb_interconnect

        ${RTL}

        # ====================================================
        # TESTS
        # ====================================================
        ../tb/main/main_regression.cpp

        ../tb/tests/test_bootrom_write.cpp
        ../tb/tests/test_bootrom_read.cpp
        ../tb/tests/test_sram_write.cpp
        ../tb/tests/test_sram_read.cpp
        ../tb/tests/test_gpio_write.cpp
        ../tb/tests/test_gpio_read.cpp
        ../tb/tests/test_uart_write.cpp
        ../tb/tests/test_uart_read.cpp
        ../tb/tests/test_timer_write.cpp
        ../tb/tests/test_timer_read.cpp
        ../tb/tests/test_decode_error.cpp
        ../tb/tests/test_i2c_write.cpp
        ../tb/tests/test_i2c_read.cpp
        ../tb/tests/test_xip_write.cpp
        ../tb/tests/test_xip_read.cpp
        ../tb/tests/test_spictrl_write.cpp
        ../tb/tests/test_spictrl_read.cpp
        ../tb/tests/test_spihost_write.cpp
        ../tb/tests/test_spihost_read.cpp
        
        ../tb/tests/test_coverage_killer.cpp
        ../tb/tests/test_coverage_autopilot.cpp

        # ====================================================
        # TB INFRA
        # ====================================================
        ../tb/tick.cpp
        ../tb/wb_coverage.cpp

        -o Vwb_regression

    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

# ========================================================
# TARGET
# ========================================================

add_custom_target(test_regression
    DEPENDS obj_dir/Vwb_regression
)

# ========================================================
# COPY EXECUTABLE
# ========================================================

add_custom_command(TARGET test_regression POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_BINARY_DIR}/obj_dir/Vwb_regression
        ${CMAKE_BINARY_DIR}/test_regression
)
