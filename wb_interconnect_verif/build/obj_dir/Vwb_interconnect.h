// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VWB_INTERCONNECT_H_
#define VERILATED_VWB_INTERCONNECT_H_  // guard

#include "verilated.h"

class Vwb_interconnect__Syms;
class Vwb_interconnect___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class Vwb_interconnect VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vwb_interconnect__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&wb_cyc_i,0,0);
    VL_IN8(&wb_stb_i,0,0);
    VL_IN8(&wb_we_i,0,0);
    VL_IN8(&wb_sel_i,3,0);
    VL_OUT8(&wb_ack_o,0,0);
    VL_OUT8(&wb_stall_o,0,0);
    VL_OUT8(&bootrom_req_o,0,0);
    VL_OUT8(&bootrom_we_o,0,0);
    VL_OUT8(&bootrom_be_o,3,0);
    VL_IN8(&bootrom_rvalid_i,0,0);
    VL_OUT8(&sram_req_o,0,0);
    VL_OUT8(&sram_we_o,0,0);
    VL_OUT8(&sram_be_o,3,0);
    VL_IN8(&sram_rvalid_i,0,0);
    VL_OUT8(&xip_req_o,0,0);
    VL_OUT8(&xip_we_o,0,0);
    VL_OUT8(&xip_be_o,3,0);
    VL_IN8(&xip_rvalid_i,0,0);
    VL_OUT8(&uart_req_o,0,0);
    VL_OUT8(&uart_we_o,0,0);
    VL_OUT8(&uart_be_o,3,0);
    VL_IN8(&uart_rvalid_i,0,0);
    VL_OUT8(&gpio_req_o,0,0);
    VL_OUT8(&gpio_we_o,0,0);
    VL_OUT8(&gpio_be_o,3,0);
    VL_IN8(&gpio_rvalid_i,0,0);
    VL_OUT8(&timer_req_o,0,0);
    VL_OUT8(&timer_we_o,0,0);
    VL_OUT8(&timer_be_o,3,0);
    VL_IN8(&timer_rvalid_i,0,0);
    VL_OUT8(&spictrl_req_o,0,0);
    VL_OUT8(&spictrl_we_o,0,0);
    VL_OUT8(&spictrl_be_o,3,0);
    VL_IN8(&spictrl_rvalid_i,0,0);
    VL_OUT8(&i2c_req_o,0,0);
    VL_OUT8(&i2c_we_o,0,0);
    VL_OUT8(&i2c_be_o,3,0);
    VL_IN8(&i2c_rvalid_i,0,0);
    VL_OUT8(&spihost_req_o,0,0);
    VL_OUT8(&spihost_we_o,0,0);
    VL_OUT8(&spihost_be_o,3,0);
    VL_IN8(&spihost_rvalid_i,0,0);
    VL_IN(&wb_adr_i,31,0);
    VL_IN(&wb_dat_i,31,0);
    VL_OUT(&wb_dat_o,31,0);
    VL_OUT(&bootrom_addr_o,31,0);
    VL_OUT(&bootrom_wdata_o,31,0);
    VL_IN(&bootrom_rdata_i,31,0);
    VL_OUT(&sram_addr_o,31,0);
    VL_OUT(&sram_wdata_o,31,0);
    VL_IN(&sram_rdata_i,31,0);
    VL_OUT(&xip_addr_o,31,0);
    VL_OUT(&xip_wdata_o,31,0);
    VL_IN(&xip_rdata_i,31,0);
    VL_OUT(&uart_addr_o,31,0);
    VL_OUT(&uart_wdata_o,31,0);
    VL_IN(&uart_rdata_i,31,0);
    VL_OUT(&gpio_addr_o,31,0);
    VL_OUT(&gpio_wdata_o,31,0);
    VL_IN(&gpio_rdata_i,31,0);
    VL_OUT(&timer_addr_o,31,0);
    VL_OUT(&timer_wdata_o,31,0);
    VL_IN(&timer_rdata_i,31,0);
    VL_OUT(&spictrl_addr_o,31,0);
    VL_OUT(&spictrl_wdata_o,31,0);
    VL_IN(&spictrl_rdata_i,31,0);
    VL_OUT(&i2c_addr_o,31,0);
    VL_OUT(&i2c_wdata_o,31,0);
    VL_IN(&i2c_rdata_i,31,0);
    VL_OUT(&spihost_addr_o,31,0);
    VL_OUT(&spihost_wdata_o,31,0);
    VL_IN(&spihost_rdata_i,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vwb_interconnect___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vwb_interconnect(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vwb_interconnect(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vwb_interconnect();
  private:
    VL_UNCOPYABLE(Vwb_interconnect);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
