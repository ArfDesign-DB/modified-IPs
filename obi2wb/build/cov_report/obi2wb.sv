//      // verilator_coverage annotation
        module obi2wb #(
          parameter AW = 32,
          parameter DW = 32
        )(
 000086   input  logic             clk_i,
%000001   input  logic             rst_ni,
         
          // OBI Interface
%000008   input  logic             obi_req_i,
%000008   output logic             obi_gnt_o,
 777015124   input  logic [AW-1:0]    obi_addr_i,
 1862361719   input  logic             obi_we_i,
 023857   input  logic [DW/8-1:0]  obi_be_i,
%000001   input  logic [DW-1:0]    obi_wdata_i,
 1701670760   output logic             obi_rvalid_o,
 024862   output logic [DW-1:0]    obi_rdata_o,
         
          // Wishbone Interface
 000082   output logic             wb_cyc_o,
%000000   output logic             wb_stb_o,
 000082   output logic             wb_we_o,
 025207   output logic [AW-1:0]    wb_adr_o,
%000001   output logic [DW-1:0]    wb_dat_o,
 788686337   output logic [DW/8-1:0]  wb_sel_o,
 1701670760   input  logic             wb_ack_i,
 024862   input  logic [DW-1:0]    wb_dat_i,
 000082   input  logic             wb_stall_i
        );
         
          // FSM states
          typedef enum logic [0:0] {
            IDLE,
            WAIT_ACK
          } state_e;
         
 000082   state_e state_q, state_d;
         
          // Registered request for multi‑cycle transactions
 025207   logic [AW-1:0]   addr_q;
%000001   logic [DW-1:0]   wdata_q;
 788686337   logic [DW/8-1:0] be_q;
 1701670760   logic            we_q;
         
          // Response register for WAIT_ACK state
 024862   logic [DW-1:0]   rdata_q;
         
          // Outstanding request flag
 000082   logic            req_sent_q;
         
          // Registered rvalid pulse for WAIT_ACK completion
%000000   logic            obi_rvalid_q;
         
          // ---------------------------------------------------------------------
          // Combinational signals for zero‑wait ack and grant
          // ---------------------------------------------------------------------
%000000   logic start_transaction;
 000082   logic immediate_ack;
         
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
 845767279   always_comb begin
 845767279     state_d = state_q;
         
            // Default Wishbone outputs (no cycle)
 845767279     wb_cyc_o = 1'b0;
 845767279     wb_stb_o = 1'b0;
         
            // Default outputs driven by registered request (or direct path when starting)
 845767279     wb_we_o   = we_q;
 845767279     wb_adr_o  = addr_q;
 845767279     wb_dat_o  = wdata_q;
 845767279     wb_sel_o  = be_q;
         
 845767279     case (state_q)
 024862       IDLE: begin
 000012         if (start_transaction) begin
                  // Start Wishbone cycle
 000012           wb_cyc_o = 1'b1;
 000012           wb_stb_o = 1'b1;
         
                  // Use direct path for the very first cycle (no registered delay)
 000012           wb_we_o   = obi_we_i;
 000012           wb_adr_o  = obi_addr_i;
 000012           wb_dat_o  = obi_wdata_i;
 000012           wb_sel_o  = obi_be_i;
         
                  // Next state: if ack is already high (zero‑wait), stay in IDLE;
                  // otherwise go to WAIT_ACK.
 000012           if (wb_ack_i)
%000000             state_d = IDLE;
                  else
 000012             state_d = WAIT_ACK;
                end
              end
         
 777015124       WAIT_ACK: begin
                // Keep cycle active until ack arrives
 777015124         wb_cyc_o = 1'b1;
 777015124         wb_stb_o = 1'b1;
         
                // Hold the latched request
 777015124         wb_we_o   = we_q;
 777015124         wb_adr_o  = addr_q;
 777015124         wb_dat_o  = wdata_q;
 777015124         wb_sel_o  = be_q;
         
 000010         if (wb_ack_i) begin
 000010           wb_stb_o = 1'b0;   // drop strobe after ack
 000010           state_d  = IDLE;
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
 3872686896   always_ff @(posedge clk_i or negedge rst_ni) begin
%000000     if (!rst_ni) begin
 000033       state_q       <= IDLE;
 000033       addr_q        <= '0;
 000033       wdata_q       <= '0;
 000033       be_q          <= '0;
 000033       we_q          <= '0;
 000033       rdata_q       <= '0;
 000033       req_sent_q    <= 1'b0;
 000033       obi_rvalid_q  <= 1'b0;
%000000     end else begin
%000000       state_q <= state_d;
         
              // Default: one‑cycle rvalid pulse
%000000       obi_rvalid_q <= 1'b0;
         
              // Latch request only when we start a transaction that will go to WAIT_ACK
 000034       if (start_transaction && !wb_ack_i) begin
 025207         addr_q     <= obi_addr_i;
 025207         wdata_q    <= obi_wdata_i;
 025207         be_q       <= obi_be_i;
 025207         we_q       <= obi_we_i;
 025207         req_sent_q <= 1'b1;
              end
         
              // WAIT_ACK: capture response and clear outstanding flag
%000000       if (state_q == WAIT_ACK && wb_ack_i) begin
%000000         rdata_q      <= we_q ? '0 : wb_dat_i;   // writes return 0
%000000         obi_rvalid_q <= 1'b1;
%000000         req_sent_q   <= 1'b0;
              end
            end
          end
         
        endmodule
        
