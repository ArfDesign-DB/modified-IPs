TOP=uart
VERILATOR=verilator

RTL_DIR=../rtl/system
PRIM_DIR=../vendor/lowrisc_ip/ip/prim/rtl

CFLAGS=-std=c++17

all:
	$(VERILATOR) \
	--cc $(RTL_DIR)/uart.sv \
	-I$(PRIM_DIR) \
	\
	$(PRIM_DIR)/prim_assert.sv \
	$(PRIM_DIR)/prim_util_pkg.sv \
	$(PRIM_DIR)/prim_count_pkg.sv \
	$(PRIM_DIR)/prim_flop_macros.sv \
	$(PRIM_DIR)/prim_fifo_sync.sv \
	$(PRIM_DIR)/prim_fifo_sync_cnt.sv \
	$(PRIM_DIR)/prim_count.sv \
	\
	--exe tb/tb_uart.cpp \
	--top-module uart \
	-Wno-fatal \
	--trace \
	--coverage \
	--build \
	-CFLAGS "$(CFLAGS)"

run:
	./obj_dir/Vuart

cov:
	verilator_coverage --write-info cov.info obj_dir/Vuart_coverage.dat
	genhtml cov.info --output-directory cov_html

clean:
	rm -rf obj_dir cov.info cov_html waves/*.vcd logs/*
