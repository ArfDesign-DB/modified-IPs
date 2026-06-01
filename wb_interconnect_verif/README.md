SRAM Address Decode Alignment
-----------------------------------------

Overview:
--------------

While developing and verifying the Wishbone Interconnect, the SRAM address mapping was reviewed to ensure compatibility with mask-based address decoding.

The SRAM is currently mapped as:

Peripheral	Start Address	End Address	Size
SRAM	0x0010_2000	0x0010_3FFF	8 KB

Why the Change Was Needed:
----------------------------------------

Initially, the SRAM region was placed at:

0x0010_1000 - 0x0010_2FFF

Although this provided an 8 KB address space, the starting address was not naturally aligned to the size of the memory region.

For an 8 KB memory block:

8 KB = 0x2000 bytes

A mask-based decoder for an 8 KB region requires the lower 13 address bits to be ignored:

SRAM_MASK = 0xFFFF_E000

When the base address is not aligned to the region size, a simple mask comparison cannot reliably identify all addresses belonging to that region. In such cases, range-based decoding must be used instead.

Updated Address Mapping;
---------------------------------

To simplify the decoder implementation, the SRAM base address was moved to an 8 KB aligned boundary:

0x0010_2000 - 0x0010_3FFF

This allows the interconnect to use a straightforward mask-based decode:

localparam logic [31:0] SRAM_BASE = 32'h0010_2000;
localparam logic [31:0] SRAM_MASK = 32'hFFFF_E000;

sram_sel = ((wb_adr_i & SRAM_MASK) == SRAM_BASE);

Benefits:
----------

Simple and efficient address decoding logic.
No address range comparisons required.
Easier to maintain and verify.
Follows common SoC memory map alignment practices.
Reduces the chance of decode-related bugs when the design is expanded in the future.

Verification Impact:
----------------------

The SRAM read and write testcases were updated to use the new SRAM base address. Verification was performed using the Verilator-based testbench, and the SRAM transactions were successfully routed through the interconnect after the address alignment update.

Final Configuration:
----------------------

SRAM Base Address : 0x0010_2000
SRAM End Address  : 0x0010_3FFF
SRAM Size         : 8 KB
Decode Method     : Mask-Based
Decode Mask       : 0xFFFF_E000
