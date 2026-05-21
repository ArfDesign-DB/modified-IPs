# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vuart.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vuart \
	Vuart___024root__DepSet_hd9b01d36__0 \
	Vuart___024root__DepSet_ha21bd04d__0 \
	Vuart_prim_fifo_sync__W8_Pz1_D80__DepSet_hdfbd315f__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vuart___024root__Slow \
	Vuart___024root__DepSet_hd9b01d36__0__Slow \
	Vuart___024root__DepSet_ha21bd04d__0__Slow \
	Vuart_prim_util_pkg__Slow \
	Vuart_prim_util_pkg__DepSet_h3add10b0__0__Slow \
	Vuart_prim_util_pkg__DepSet_h8178d4c7__0__Slow \
	Vuart_prim_fifo_sync__W8_Pz1_D80__Slow \
	Vuart_prim_fifo_sync__W8_Pz1_D80__DepSet_hdfbd315f__0__Slow \
	Vuart_prim_fifo_sync__W8_Pz1_D80__DepSet_h9c18f3e4__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vuart__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vuart__Syms \
	Vuart__Trace__0__Slow \
	Vuart__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
