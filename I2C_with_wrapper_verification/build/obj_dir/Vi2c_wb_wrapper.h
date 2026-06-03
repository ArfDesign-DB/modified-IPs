// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VI2C_WB_WRAPPER_H_
#define VERILATED_VI2C_WB_WRAPPER_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vi2c_wb_wrapper__Syms;
class Vi2c_wb_wrapper___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class Vi2c_wb_wrapper VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vi2c_wb_wrapper__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_i,0,0);
    VL_IN8(&i2c_req_o,0,0);
    VL_IN8(&i2c_we_o,0,0);
    VL_IN8(&i2c_be_o,3,0);
    VL_OUT8(&i2c_rvalid_i,0,0);
    VL_IN8(&scl_pad_i,0,0);
    VL_OUT8(&scl_pad_o,0,0);
    VL_OUT8(&scl_padoen_o,0,0);
    VL_IN8(&sda_pad_i,0,0);
    VL_OUT8(&sda_pad_o,0,0);
    VL_OUT8(&sda_padoen_o,0,0);
    VL_OUT8(&wb_inta_o,0,0);
    VL_IN(&i2c_addr_o,31,0);
    VL_IN(&i2c_wdata_o,31,0);
    VL_OUT(&i2c_rdata_i,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vi2c_wb_wrapper___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vi2c_wb_wrapper(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vi2c_wb_wrapper(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vi2c_wb_wrapper();
  private:
    VL_UNCOPYABLE(Vi2c_wb_wrapper);  ///< Copying not allowed

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
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
