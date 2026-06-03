//      // verilator_coverage annotation
        module obi2wb #(
          parameter AW = 32,
          parameter DW = 32
        )(
 001114   input  logic             clk_i,
%000001   input  logic             rst_ni,
         
          // OBI
 000212   input  logic             obi_req_i,
 000212   output logic             obi_gnt_o,
 777015124   input  logic [AW-1:0]    obi_addr_i,
 1862361719   input  logic             obi_we_i,
 023857   input  logic [DW/8-1:0]  obi_be_i,
%000001   input  logic [DW-1:0]    obi_wdata_i,
         
 1701670760   output logic             obi_rvalid_o,
 023907   output logic [DW-1:0]    obi_rdata_o,
         
          // Wishbone master
 000082   output logic             wb_cyc_o,
%000000   output logic             wb_stb_o,
 000082   output logic             wb_we_o,
 025207   output logic [AW-1:0]    wb_adr_o,
%000001   output logic [DW-1:0]    wb_dat_o,
 788686337   output logic [DW/8-1:0]  wb_sel_o,
         
 1701670760   input  logic             wb_ack_i,
 023907   input  logic [DW-1:0]    wb_dat_i,
 000082   input  logic             wb_stall_i
        );
         
          typedef enum logic [0:0] { IDLE, WAIT_ACK } state_e;
 000082   state_e state_q, state_d;
         
 025207   logic [AW-1:0]   addr_q;
%000001   logic [DW-1:0]   wdata_q;
 788686337   logic [DW/8-1:0] be_q;
 1701670760   logic            we_q;
         
 023907   logic [DW-1:0]   rdata_q;
         
 000082   logic req_sent_q;
%000000   logic wb_active_q;
         
 000082   logic obi_gnt_q;
%000000   logic obi_rvalid_q;
         
          // =========================================================
          // Sequential
          // =========================================================
 000557   always_ff @(posedge clk_i or negedge rst_ni) begin
 025207     if (!rst_ni) begin
 845767279       state_q      <= IDLE;
 845767279       addr_q       <= '0;
 845767279       wdata_q      <= '0;
 845767279       be_q         <= '0;
 845767279       we_q         <= '0;
 845767279       rdata_q      <= '0;
 845767279       req_sent_q   <= 1'b0;
 845767279       wb_active_q  <= 1'b0;
 845767279       obi_gnt_q    <= 1'b0;
 845767279       obi_rvalid_q <= 1'b0;
 025207     end else begin
         
 025207       state_q <= state_d;
         
 025207       obi_gnt_q    <= 1'b0;
 025207       obi_rvalid_q <= 1'b0;
         
              // latch request
 000106       if (state_q == IDLE && obi_req_i && !req_sent_q && !wb_stall_i) begin
 000106         addr_q     <= obi_addr_i;
 000106         wdata_q    <= obi_wdata_i;
 000106         be_q       <= obi_be_i;
 000106         we_q       <= obi_we_i;
 000106         req_sent_q <= 1'b1;
 000106         obi_gnt_q  <= 1'b1;
              end
         
              // WB active control
 000010       if (state_q == IDLE && obi_req_i && !req_sent_q && !wb_stall_i)
 000010         wb_active_q <= 1'b1;
 023907       else if (state_q == WAIT_ACK && wb_ack_i)
 2250517904         wb_active_q <= 1'b0;
         
              // response
 777015124       if (state_q == WAIT_ACK && wb_ack_i) begin
%000000         rdata_q       <= wb_dat_i;
%000000         obi_rvalid_q  <= 1'b1;
%000000         req_sent_q    <= 1'b0;
              end
         
            end
          end
         
          // =========================================================
          // Combinational FSM
          // =========================================================
 3202366256   always_comb begin
 3202366256     state_d = state_q;
         
 3202366256     case (state_q)
         
 000033       IDLE: begin
%000000         if (obi_req_i && !req_sent_q)
%000000           state_d = WAIT_ACK;
              end
         
 032474       WAIT_ACK: begin
%000000         if (wb_ack_i)
%000000           state_d = IDLE;
              end
         
            endcase
          end
         
          // =========================================================
          // Wishbone outputs (clean + registered control)
          // =========================================================
          assign wb_cyc_o = wb_active_q;
          assign wb_stb_o = wb_active_q;
          assign wb_we_o  = we_q;
          assign wb_adr_o = addr_q;
          assign wb_dat_o = wdata_q;
          assign wb_sel_o = be_q;
         
          // =========================================================
          // OBI outputs
          // =========================================================
          assign obi_gnt_o    = obi_gnt_q;
          assign obi_rvalid_o = obi_rvalid_q;
          assign obi_rdata_o  = rdata_q;
         
        endmodule
        
