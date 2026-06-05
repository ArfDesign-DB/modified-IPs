# SRAM Controller Verification Environment

## Overview

This project contains a Verilator-based verification environment for a simple SRAM Controller IP.

The environment supports:

- Individual testcase execution
- Full regression execution
- VCD waveform generation
- GTKWave debugging
- Directed and random testing
- SRAM memory-map boundary checking
- Code and functional coverage output
- Automated pass/fail reporting

---

## CPU Memory Map

The SRAM controller is configured for the SRAM window in the CPU memory map:

| Start | End | Size | Peripheral | Notes |
|---:|---:|---:|---|---|
| `0x0010_0000` | `0x0010_0FFF` | 4 KB | Boot ROM | Reset vector; synthesized |
| `0x0010_2000` | `0x0010_3FFF` | 8 KB | SRAM | DFFRAM macro via SRAM Controller |
| `0x2000_0000` | `0x2FFF_FFFF` | 256 MB | SPI Flash XIP | External memory-mapped |
| `0x4000_0000` | `0x4000_00FF` | 256 B | UART | TX, RX, status, control |
| `0x4000_0100` | `0x4000_01FF` | 256 B | GPIO | 8-bit, input/output/direction |
| `0x4000_0200` | `0x4000_02FF` | 256 B | RV Timer | RISC-V `mtime` / `mtimecmp` |
| `0x4000_0300` | `0x4000_03FF` | 256 B | SPI Control | SPI flash config registers |
| `0x4000_0400` | `0x4000_04FF` | 256 B | I2C | I2C master controller |
| `0x4000_0500` | `0x4000_05FF` | 256 B | SPI Host | General-purpose SPI master |

The SRAM RTL parameters match this map:

- `SRAM_BASE = 32'h0010_2000`
- `SRAM_SIZE = 32'd8192`
- `WORD_ADDR_WIDTH = 11`, for 2048 32-bit words

The last valid aligned SRAM word address is `0x0010_3FFC`. Address `0x0010_4000`, the previous SRAM base `0x0010_1000`, and all non-SRAM CPU regions must not be accepted by the SRAM controller.

---

## Directory Structure

```text
sram_controller_verif2/
│
├── rtl/
│   └── sram_controller.sv
│
├── tb/
│   ├── tb_top.sv
│   └── clk_rst.sv
│
├── sw/
│   ├── coverage_manager.h
│   ├── memory_map.h
│   ├── tb_common.h
│   ├── tc_sram_con_001_reset.cpp
│   ├── tc_sram_con_002_read_write.cpp
│   ├── tc_sram_con_003_byte_enable.cpp
│   ├── tc_sram_con_004_back_to_back.cpp
│   ├── tc_sram_con_005_boundary.cpp
│   ├── tc_sram_con_006_error_handling.cpp
│   ├── tc_sram_con_007_random_stress.cpp
│   └── tc_sram_con_008_memory_map.cpp
│
├── sim/
│   ├── run.sh
│   ├── Makefile
│   └── obj_dir/
│
└── README.md
```

---

## Prerequisites

Install the following tools:

```bash
sudo apt install verilator gtkwave build-essential
```

---

## Testcases

| Testcase ID | Description |
|---|---|
| `TC_SRAM_CON_001` | Reset Test |
| `TC_SRAM_CON_002` | Read/Write Test |
| `TC_SRAM_CON_003` | Byte Enable Test |
| `TC_SRAM_CON_004` | Back-to-Back Transactions |
| `TC_SRAM_CON_005` | Boundary Address Test |
| `TC_SRAM_CON_006` | Error Handling / Invalid Access Test |
| `TC_SRAM_CON_007` | Random Stress Test |
| `TC_SRAM_CON_008` | CPU Memory Map Decode Test |

---

## Running Individual Testcases

Move to the simulation directory:

```bash
cd sim
```

Run an individual testcase:

```bash
./run.sh TC_SRAM_CON_001
```

Example:

```bash
./run.sh TC_SRAM_CON_008
```

---

## Running Full Regression

```bash
cd sim
./run.sh regress
```

Example output:

```text
==================================================
 SRAM CONTROLLER FULL REGRESSION
==================================================

[RESULT] TC_SRAM_CON_001 PASSED
[RESULT] TC_SRAM_CON_002 PASSED
[RESULT] TC_SRAM_CON_003 PASSED
[RESULT] TC_SRAM_CON_004 PASSED
[RESULT] TC_SRAM_CON_005 PASSED
[RESULT] TC_SRAM_CON_006 PASSED
[RESULT] TC_SRAM_CON_007 PASSED
[RESULT] TC_SRAM_CON_008 PASSED

==================================================
 REGRESSION SUMMARY
==================================================
PASS : 8
FAIL : 0
==== ALL TESTS PASSED ====
==================================================
```

---

## Coverage

Each testcase writes:

- `code_coverage_tc_*.dat` for Verilator code coverage
- `functional_coverage_tc_*.json` for per-test functional coverage bins

Run the full Makefile coverage flow from `sim/`:

```bash
make coverage
```

The coverage flow merges code coverage into `reports/merged_coverage.dat`, annotates the result under `reports/annotated/`, and writes final functional coverage reports:

- `reports/final_functional_coverage.json`
- `reports/final_functional_coverage.txt`

If the per-test `functional_coverage_tc_*.json` files already exist and you only want to regenerate the final functional coverage report, run:

```bash
make functional_coverage
```

The final report includes merged bin counts, per-group coverage percentages, and missed required bins.

---


- `code_coverage_tc_*.dat` for Verilator code coverage
- `functional_coverage_tc_*.json` for functional coverage bins

Run the Makefile coverage flow from `sim/`:

```bash
make coverage
```

The coverage flow merges code coverage into `reports/merged_coverage.dat` and annotates the result under `reports/annotated/`.

---

## Waveform Generation

Each testcase automatically generates a VCD waveform file.

Example generated files:

```text
wave_tc_001.vcd
wave_tc_002.vcd
wave_tc_003.vcd
wave_tc_008.vcd
```

---

## Viewing Waveforms in GTKWave

Example:

```bash
gtkwave wave_tc_001.vcd
```

Open any testcase waveform similarly.

---

## Cleaning Build Files

From `sim/`:

```bash
make clean
```

or:

```bash
rm -rf obj_dir *.vcd *.dat *.json reports
```
