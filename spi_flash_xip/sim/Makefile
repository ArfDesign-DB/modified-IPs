TOP      := spi_flash_xip
RTL      := ../rtl/$(TOP).sv
TB_DIR   := ../tb
WAVE_DIR := ../wave
COV_DIR  := ../coverage
OBJ_DIR  := obj_dir

VERILATOR ?= verilator

# Note: Removed --coverage-user since SVA properties are gone
VERILATOR_FLAGS := -Wall \
                   -Wno-SYNCASYNCNET \
                   --cc --exe --build \
                   --trace --assert --timing \
                   --coverage --coverage-line --coverage-toggle \
                   -Mdir $(OBJ_DIR) --top-module $(TOP)

VERILATOR_COVERAGE ?= verilator_coverage

TEST ?= TC_001_spi_flash_xip_read_test
TB_CPP := $(TB_DIR)/$(TEST).cpp

all: run

build:
	@mkdir -p $(WAVE_DIR) $(COV_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
	$(RTL) ../tb/tb_globals.cpp ../tb/spi_flash_xip_cov.cpp $(TB_CPP)

run: build
	./$(OBJ_DIR)/V$(TOP)

clean:
	# Keep coverage artifacts across regression runs
	rm -rf $(OBJ_DIR) logs *.log $(WAVE_DIR) 

.PHONY: all build run clean
