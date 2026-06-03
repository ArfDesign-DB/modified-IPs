	// verilator_coverage annotation
	// Copyright lowRISC contributors (OpenTitan project).
	// Licensed under the Apache License, Version 2.0, see LICENSE for details.
	// SPDX-License-Identifier: Apache-2.0
	//
	// Read and write pointer logic for synchronous FIFOs
	
	//`include "prim_assert.sv"
	
	module prim_fifo_sync_cnt #(
	  // Depth of the FIFO, i.e., maximum number of entries the FIFO can contain
	  parameter int unsigned Depth = 4,
	  // Whether to instantiate hardened counters
	  parameter bit Secure = 1'b0,
	  // Width of the read and write pointers for the FIFO
	  localparam int unsigned PtrW = prim_util_pkg::vbits(Depth),
	  // Width of the 'current depth' output
	  localparam int unsigned DepthW = prim_util_pkg::vbits(Depth+1)
	) (
 026523	  input clk_i,
%000003	  input rst_ni,
%000000	  input clr_i,
 000884	  input incr_wptr_i,
 000560	  input incr_rptr_i,
	  // Write and read pointers.  Value range: [0, Depth-1]
 000874	  output logic [PtrW-1:0] wptr_o,
 000553	  output logic [PtrW-1:0] rptr_o,
%000008	  output logic full_o,
 000080	  output logic empty_o,
	  // Current depth of the FIFO, i.e., number of entries the FIFO currently contains.
	  // Value range: [0, Depth]
 001311	  output logic [DepthW-1:0] depth_o,
%000000	  output logic err_o
	);
	
	  // Internal 'wrap' pointers that have an extra leading bit to account for wraparounds.
	  localparam int unsigned WrapPtrW = PtrW + 1;
 000876	  logic [WrapPtrW-1:0] wptr_wrap_cnt_q, wptr_wrap_set_cnt,
%000003	  verilator_coverage: (next point on previous line)

 000555	                       rptr_wrap_cnt_q, rptr_wrap_set_cnt;
%000003	                       verilator_coverage: (next point on previous line)

	
	  // Derive real read and write pointers by truncating the internal 'wrap' pointers.
	  assign wptr_o = wptr_wrap_cnt_q[PtrW-1:0];
	  assign rptr_o = rptr_wrap_cnt_q[PtrW-1:0];
	
	  // Extract the MSB of the 'wrap' pointers.
%000002	  logic wptr_wrap_msb, rptr_wrap_msb;
%000002	  verilator_coverage: (next point on previous line)

	  assign wptr_wrap_msb = wptr_wrap_cnt_q[WrapPtrW-1];
	  assign rptr_wrap_msb = rptr_wrap_cnt_q[WrapPtrW-1];
	
	  // Wrap pointers when they have reached the maximum value and are about to get incremented.
%000008	  logic wptr_wrap_set, rptr_wrap_set;
%000002	  verilator_coverage: (next point on previous line)

	  assign wptr_wrap_set = incr_wptr_i & (wptr_o == PtrW'(Depth-1));
	  assign rptr_wrap_set = incr_rptr_i & (rptr_o == PtrW'(Depth-1));
	
	  // When wrapping, invert the MSB and reset all lower bits to zero.
	  assign wptr_wrap_set_cnt = {~wptr_wrap_msb, {(WrapPtrW-1){1'b0}}};
	  assign rptr_wrap_set_cnt = {~rptr_wrap_msb, {(WrapPtrW-1){1'b0}}};
	
	  // Full when both 'wrap' counters have a different MSB but all lower bits are equal.
	  assign full_o = wptr_wrap_cnt_q == (rptr_wrap_cnt_q ^ {1'b1, {(WrapPtrW-1){1'b0}}});
	  // Empty when both 'wrap' counters are equal in all bits including the MSB.
	  assign empty_o = wptr_wrap_cnt_q == rptr_wrap_cnt_q;
	
	  // The current depth is equal to:
	  // - when full: the maximum depth;
	  // - when both or none of the 'wrap' pointers are wrapped: the difference of the real pointers;
	  // - when only one of the two 'wrap' pointers is wrapped: the maximum depth minus the difference
	  //   of the real pointers.
	  assign depth_o = full_o                         ? DepthW'(Depth) :
	                   wptr_wrap_msb == rptr_wrap_msb ? DepthW'(wptr_o) - DepthW'(rptr_o) :
	                   DepthW'(Depth) - DepthW'(rptr_o) + DepthW'(wptr_o);
	
	  if (Secure) begin : gen_secure_ptrs
	    logic wptr_err;
	    prim_count #(
	      .Width(WrapPtrW)
	    ) u_wptr (
	      .clk_i,
	      .rst_ni,
	      .clr_i,
	      .set_i(wptr_wrap_set),
	      .set_cnt_i(wptr_wrap_set_cnt),
	      .incr_en_i(incr_wptr_i),
	      .decr_en_i(1'b0),
	      .step_i(WrapPtrW'(1'b1)),
	      .commit_i(1'b1),
	      .cnt_o(wptr_wrap_cnt_q),
	      .cnt_after_commit_o(),
	      .err_o(wptr_err)
	    );
	
	    logic rptr_err;
	    prim_count #(
	      .Width(WrapPtrW)
	    ) u_rptr (
	      .clk_i,
	      .rst_ni,
	      .clr_i,
	      .set_i(rptr_wrap_set),
	      .set_cnt_i(rptr_wrap_set_cnt),
	      .incr_en_i(incr_rptr_i),
	      .decr_en_i(1'b0),
	      .step_i(WrapPtrW'(1'b1)),
	      .commit_i(1'b1),
	      .cnt_o(rptr_wrap_cnt_q),
	      .cnt_after_commit_o(),
	      .err_o(rptr_err)
	    );
	
	    assign err_o = wptr_err | rptr_err;
	
	  end else begin : gen_normal_ptrs
 026526	    always_ff @(posedge clk_i or negedge rst_ni) begin
 000062	      if (!rst_ni) begin
 000031	        wptr_wrap_cnt_q <= {WrapPtrW{1'b0}};
%000000	      end else if (clr_i) begin
%000000	        wptr_wrap_cnt_q <= {WrapPtrW{1'b0}};
%000004	      end else if (wptr_wrap_set) begin
%000002	        wptr_wrap_cnt_q <= wptr_wrap_set_cnt;
 000878	      end else if (incr_wptr_i) begin
 012791	      verilator_coverage: (next point on previous line)

 000439	        wptr_wrap_cnt_q <= wptr_wrap_cnt_q + {{(WrapPtrW-1){1'b0}}, 1'b1};
	      end
	    end
	
 026526	    always_ff @(posedge clk_i or negedge rst_ni) begin
 000062	      if (!rst_ni) begin
 000031	        rptr_wrap_cnt_q <= {WrapPtrW{1'b0}};
%000000	      end else if (clr_i) begin
%000000	        rptr_wrap_cnt_q <= {WrapPtrW{1'b0}};
%000002	      end else if (rptr_wrap_set) begin
%000001	        rptr_wrap_cnt_q <= rptr_wrap_set_cnt;
 000558	      end else if (incr_rptr_i) begin
 012952	      verilator_coverage: (next point on previous line)

 000279	        rptr_wrap_cnt_q <= rptr_wrap_cnt_q + {{(WrapPtrW-1){1'b0}}, 1'b1};
	      end
	    end
	
	    assign err_o = '0;
	  end
	
	endmodule // prim_fifo_sync_cnt
	
