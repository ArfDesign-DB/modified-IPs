module obi2wb #(
  parameter AW = 32,
  parameter DW = 32
)(
  input  logic             clk_i,
  input  logic             rst_ni,
 
  // OBI Interface
  input  logic             obi_req_i,
  output logic             obi_gnt_o,
  input  logic [AW-1:0]    obi_addr_i,
  input  logic             obi_we_i,
  input  logic [DW/8-1:0]  obi_be_i,
  input  logic [DW-1:0]    obi_wdata_i,
  output logic             obi_rvalid_o,
  output logic [DW-1:0]    obi_rdata_o,
 
  // Wishbone Interface
  output logic             wb_cyc_o,
  output logic             wb_stb_o,
  output logic             wb_we_o,
  output logic [AW-1:0]    wb_adr_o,
  output logic [DW-1:0]    wb_dat_o,
  output logic [DW/8-1:0]  wb_sel_o,
  input  logic             wb_ack_i,
  input  logic [DW-1:0]    wb_dat_i,
  input  logic             wb_stall_i
);
 
  // FSM states
  typedef enum logic [0:0] {
    IDLE,
    WAIT_ACK
  } state_e;
 
  state_e state_q, state_d;
 
  // Registered request for multi‑cycle transactions
  logic [AW-1:0]   addr_q;
  logic [DW-1:0]   wdata_q;
  logic [DW/8-1:0] be_q;
  logic            we_q;
 
  // Response register for WAIT_ACK state
  logic [DW-1:0]   rdata_q;
 
  // Outstanding request flag
  logic            req_sent_q;
 
  // Registered rvalid pulse for WAIT_ACK completion
  logic            obi_rvalid_q;
 
  // ---------------------------------------------------------------------
  // Combinational signals for zero‑wait ack and grant
  // ---------------------------------------------------------------------
  logic start_transaction;
  logic immediate_ack;
 
  assign start_transaction = (state_q == IDLE) && obi_req_i && !req_sent_q && !wb_stall_i;
  assign immediate_ack     = start_transaction && wb_ack_i;
 
  // OBI grant is combinatorial and coincides with the start of the transfer
  assign obi_gnt_o = start_transaction;
 
  // OBI response: either immediate (zero‑wait) or from the registered path
  assign obi_rvalid_o = immediate_ack || obi_rvalid_q;
  assign obi_rdata_o  = immediate_ack ? (obi_we_i ? '0 : wb_dat_i) : rdata_q;
 
  // ---------------------------------------------------------------------
  // FSM next state logic (combinatorial)
  // ---------------------------------------------------------------------
  always_comb begin
    state_d = state_q;
 
    // Default Wishbone outputs (no cycle)
    wb_cyc_o = 1'b0;
    wb_stb_o = 1'b0;
 
    // Default outputs driven by registered request (or direct path when starting)
    wb_we_o   = we_q;
    wb_adr_o  = addr_q;
    wb_dat_o  = wdata_q;
    wb_sel_o  = be_q;
 
    case (state_q)
      IDLE: begin
        if (start_transaction) begin
          // Start Wishbone cycle
          wb_cyc_o = 1'b1;
          wb_stb_o = 1'b1;
 
          // Use direct path for the very first cycle (no registered delay)
          wb_we_o   = obi_we_i;
          wb_adr_o  = obi_addr_i;
          wb_dat_o  = obi_wdata_i;
          wb_sel_o  = obi_be_i;
 
          // Next state: if ack is already high (zero‑wait), stay in IDLE;
          // otherwise go to WAIT_ACK.
          if (wb_ack_i)
            state_d = IDLE;
          else
            state_d = WAIT_ACK;
        end
      end
 
      WAIT_ACK: begin
        // Keep cycle active until ack arrives
        wb_cyc_o = 1'b1;
        wb_stb_o = 1'b1;
 
        // Hold the latched request
        wb_we_o   = we_q;
        wb_adr_o  = addr_q;
        wb_dat_o  = wdata_q;
        wb_sel_o  = be_q;
 
        if (wb_ack_i) begin
          wb_stb_o = 1'b0;   // drop strobe after ack
          state_d  = IDLE;
        end
      end
    endcase
  end

/* always_ff @(posedge clk_i) begin
  $display("%t | OBI: req=%b gnt=%b rvalid=%b we=%b addr=0x%0h be=0x%0h wdata=0x%0h | WB: cyc=%b stb=%b we=%b ack=%b stall=%b adr=0x%0h dat_o=0x%0h sel=0x%0h dat_i=0x%0h | state=%s",
           $time,
           obi_req_i, obi_gnt_o, obi_rvalid_o, obi_we_i, obi_addr_i, obi_be_i, obi_wdata_i,
           wb_cyc_o, wb_stb_o, wb_we_o, wb_ack_i, wb_stall_i, wb_adr_o, wb_dat_o, wb_sel_o, wb_dat_i,
           state_q.name());
end */
  //always @(obi_gnt_o)
// $display("time =%t, obi_gnt_o =%0d", $time,obi_gnt_o);
 
  // ---------------------------------------------------------------------
  // Registered state and request latching
  // ---------------------------------------------------------------------
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q       <= IDLE;
      addr_q        <= '0;
      wdata_q       <= '0;
      be_q          <= '0;
      we_q          <= '0;
      rdata_q       <= '0;
      req_sent_q    <= 1'b0;
      obi_rvalid_q  <= 1'b0;
    end else begin
      state_q <= state_d;
 
      // Default: one‑cycle rvalid pulse
      obi_rvalid_q <= 1'b0;
 
      // Latch request only when we start a transaction that will go to WAIT_ACK
      if (start_transaction && !wb_ack_i) begin
        addr_q     <= obi_addr_i;
        wdata_q    <= obi_wdata_i;
        be_q       <= obi_be_i;
        we_q       <= obi_we_i;
        req_sent_q <= 1'b1;
      end
 
      // WAIT_ACK: capture response and clear outstanding flag
      if (state_q == WAIT_ACK && wb_ack_i) begin
        rdata_q      <= we_q ? '0 : wb_dat_i;   // writes return 0
        obi_rvalid_q <= 1'b1;
        req_sent_q   <= 1'b0;
      end
    end
  end
 
endmodule
