# =========================================================
# SRAM CONTROLLER DV MAKEFILE
# Verilator + GTKWave + Coverage
# =========================================================

TOP = tb_top

# Keep Verilator builds independent of any stale ccache entries.
VERILATOR = env OBJCACHE= verilator

# =========================================================
# COMMON FLAGS
# =========================================================

FLAGS = -Wall --cc --trace --exe --build --timing \
	--coverage \
	-Wno-UNDRIVEN \
	-Wno-UNUSEDSIGNAL \
	-Wno-UNUSEDPARAM \
	-Wno-BLKSEQ

# =========================================================
# DIRECTORIES
# =========================================================

RTL = ../rtl/sram_controller.sv

TB = \
	../tb/tb_top.sv \
	../tb/clk_rst.sv

SW = ../sw

# =========================================================
# TEST MAP
# =========================================================

TC_SRAM_CON_001 = tc_sram_con_001_reset.cpp
TC_SRAM_CON_002 = tc_sram_con_002_read_write.cpp
TC_SRAM_CON_003 = tc_sram_con_003_byte_enable.cpp
TC_SRAM_CON_004 = tc_sram_con_004_back_to_back.cpp
TC_SRAM_CON_005 = tc_sram_con_005_boundary.cpp
TC_SRAM_CON_006 = tc_sram_con_006_error_handling.cpp
TC_SRAM_CON_007 = tc_sram_con_007_random_stress.cpp
TC_SRAM_CON_008 = tc_sram_con_008_memory_map.cpp

# =========================================================
# DEFAULT TARGET
# =========================================================

.PHONY: all clean clean_obj regress coverage functional_coverage TC_SRAM_CON_001 TC_SRAM_CON_002 TC_SRAM_CON_003 TC_SRAM_CON_004 TC_SRAM_CON_005 TC_SRAM_CON_006 TC_SRAM_CON_007 TC_SRAM_CON_008

all:
	@echo "======================================"
	@echo " SRAM CONTROLLER DV"
	@echo "======================================"
	@echo "Usage:"
	@echo "  make TC_SRAM_CON_001"
	@echo "  make TC_SRAM_CON_002"
	@echo "  make TC_SRAM_CON_008"
	@echo "  make regress"
	@echo "  make coverage"
	@echo "  make functional_coverage"
	@echo "======================================"

# =========================================================
# INDIVIDUAL TESTS
# =========================================================

clean_obj:
	rm -rf obj_dir

TC_SRAM_CON_001: clean_obj
	$(VERILATOR) $(FLAGS) $(RTL) $(TB) $(SW)/$(TC_SRAM_CON_001) \
	--top-module $(TOP) -o sim_001
	./obj_dir/sim_001

TC_SRAM_CON_002: clean_obj
	$(VERILATOR) $(FLAGS) $(RTL) $(TB) $(SW)/$(TC_SRAM_CON_002) \
	--top-module $(TOP) -o sim_002
	./obj_dir/sim_002

TC_SRAM_CON_003: clean_obj
	$(VERILATOR) $(FLAGS) $(RTL) $(TB) $(SW)/$(TC_SRAM_CON_003) \
	--top-module $(TOP) -o sim_003
	./obj_dir/sim_003

TC_SRAM_CON_004: clean_obj
	$(VERILATOR) $(FLAGS) $(RTL) $(TB) $(SW)/$(TC_SRAM_CON_004) \
	--top-module $(TOP) -o sim_004
	./obj_dir/sim_004

TC_SRAM_CON_005: clean_obj
	$(VERILATOR) $(FLAGS) $(RTL) $(TB) $(SW)/$(TC_SRAM_CON_005) \
	--top-module $(TOP) -o sim_005
	./obj_dir/sim_005

TC_SRAM_CON_006: clean_obj
	$(VERILATOR) $(FLAGS) $(RTL) $(TB) $(SW)/$(TC_SRAM_CON_006) \
	--top-module $(TOP) -o sim_006
	./obj_dir/sim_006

TC_SRAM_CON_007: clean_obj
	$(VERILATOR) $(FLAGS) $(RTL) $(TB) $(SW)/$(TC_SRAM_CON_007) \
	--top-module $(TOP) -o sim_007
	./obj_dir/sim_007

TC_SRAM_CON_008: clean_obj
	$(VERILATOR) $(FLAGS) $(RTL) $(TB) $(SW)/$(TC_SRAM_CON_008) \
	--top-module $(TOP) -o sim_008
	./obj_dir/sim_008

# =========================================================
# REGRESSION
# =========================================================

regress:
	@echo "======================================"
	@echo " RUNNING FULL REGRESSION"
	@echo "======================================"

	@make TC_SRAM_CON_001
	@make TC_SRAM_CON_002
	@make TC_SRAM_CON_003
	@make TC_SRAM_CON_004
	@make TC_SRAM_CON_005
	@make TC_SRAM_CON_006
	@make TC_SRAM_CON_007
	@make TC_SRAM_CON_008

	@echo "======================================"
	@echo " ALL TESTS COMPLETED"
	@echo "======================================"

# =========================================================
# COVERAGE REPORT
# =========================================================

coverage:
	@echo "======================================"
	@echo " RUNNING COVERAGE REGRESSION"
	@echo "======================================"

	@make regress

	@mkdir -p reports

	verilator_coverage \
		--write reports/merged_coverage.dat \
		code_coverage_tc_*.dat

	verilator_coverage \
		--annotate reports/annotated \
		reports/merged_coverage.dat

	@make functional_coverage

	@echo "======================================"
	@echo " COVERAGE REPORT GENERATED"
	@echo "======================================"

# =========================================================
# FINAL FUNCTIONAL COVERAGE REPORT
# =========================================================

functional_coverage:
	@mkdir -p reports
	python3 ../sw/merge_functional_coverage.py \
		--json-out reports/final_functional_coverage.json \
		--text-out reports/final_functional_coverage.txt \
		functional_coverage_tc_*.json

# =========================================================
# CLEAN
# =========================================================

clean: clean_obj
	rm -rf reports
	rm -f *.vcd
	rm -f *.dat
	rm -f *.json
