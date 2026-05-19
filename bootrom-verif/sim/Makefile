TOP = boot_rom
TEST ?= TC_001_bootrom_addr_sweep_test

VERILATOR = verilator

all:

	$(VERILATOR) \
	  -Wall \
	  --trace \
	  --timing \
	  --coverage \
	  --coverage-line \
	  --coverage-toggle \
	  --coverage-expr \
	  --top-module $(TOP) \
	  -cc ../rtl/boot_rom.sv \
	  --exe ../tb/$(TEST).cpp

	make -C obj_dir -f V$(TOP).mk V$(TOP)

run:
	./obj_dir/V$(TOP)

clean:
	rm -rf obj_dir
	rm -rf ../waves/*.vcd
	rm -rf coverage
