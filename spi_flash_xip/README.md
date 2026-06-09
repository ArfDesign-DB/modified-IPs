# spi_flash_xip

SystemVerilog RTL and simulation environment for SPI flash XIP verification with Verilator and GTKWave.

## Interface

The RTL exposes a no-stall XIP request/response interface. A read is requested by asserting `xip_req_i` with `xip_we_i` low while the controller is idle; `xip_rvalid_o` pulses for one cycle when `xip_rdata_o` contains the returned flash data. Writes are not implemented by the current SPI read-only controller.

```systemverilog
input  logic             xip_req_i,
input  logic             xip_we_i,
input  logic [AW-1:0]    xip_addr_i,
input  logic [DW-1:0]    xip_wdata_i,
input  logic [DW/8-1:0]  xip_be_i,

output logic             xip_rvalid_o,
output logic [DW-1:0]    xip_rdata_o
```

## Directory structure

- `rtl/` : RTL design files.
- `sim/` : Simulation build and run utilities (`Makefile`, `run.sh`).
- `tb/` : C++ testcases (one file per testcase).
- `sw/` : SystemVerilog functional coverage definitions using `cover property` assertions.
- `wave/` : Generated `.vcd` waveforms (one per testcase).
- `coverage/` : Code/functional coverage data and regression reports.

## Prerequisites

- Verilator
- GCC/G++
- GTKWave
- Make

## Run

From repo root:

```bash
./sim/run.sh --test TC_001_spi_flash_xip_read_test
./sim/run.sh --regression
```

Then open waves:

```bash
gtkwave wave/TC_001_spi_flash_xip_read_test.vcd
```
