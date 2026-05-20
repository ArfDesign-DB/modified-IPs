module obi2wb #(
  parameter AW = 32,
  parameter DW = 32
)(
  input  logic             clk_i,
  input  logic             rst_ni,

  // --------------------------------------------------
  // OBI Interface (Master Side)
  // --------------------------------------------------
  input  logic             obi_req_i,
  output logic             obi_gnt_o,
  input  logic [AW-1:0]    obi_addr_i,
  input  logic             obi_we_i,
  input  logic [DW/8-1:0]  obi_be_i,
  input  logic [DW-1:0]    obi_wdata_i,
  output logic             obi_rvalid_o,
  output logic [DW-1:0]    obi_rdata_o,

  // --------------------------------------------------
  // Wishbone B4 Pipelined (Slave Side)
  // --------------------------------------------------
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

  // --------------------------------------------------
  // State Machine
  // --------------------------------------------------
  typedef enum logic {
    IDLE,
    WAIT_ACK
  } state_e;

  state_e state_q;

  // --------------------------------------------------
  // Registered WB Request
  // --------------------------------------------------
  logic [AW-1:0]   addr_q;
  logic [DW-1:0]   wdata_q;
  logic [DW/8-1:0] be_q;
  logic            we_q;

  // Registered WB Read Data
  //logic [DW-1:0]   rdata_q;

  // Request accepted flag
  logic req_sent_q;

  // --------------------------------------------------
  // Sequential Logic
  // --------------------------------------------------
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin

      state_q     <= IDLE;
      req_sent_q  <= 1'b0;

      addr_q      <= '0;
      wdata_q     <= '0;
      be_q        <= '0;
      we_q        <= '0;

     // rdata_q     <= '0;

    end else begin

      case (state_q)

        // ==========================================
        // IDLE
        // ==========================================
        IDLE: begin

          // WB accepts request
          if (obi_req_i &&
              !wb_stall_i &&
              !req_sent_q) begin

            req_sent_q <= 1'b1;
            state_q    <= WAIT_ACK;

            // Latch request
            addr_q     <= obi_addr_i;
            wdata_q    <= obi_wdata_i;
            be_q       <= obi_be_i;
            we_q       <= obi_we_i;
          end
        end

        // ==========================================
        // WAIT_ACK
        // ==========================================
        WAIT_ACK: begin

          // WB response received
          if (wb_ack_i) begin

            req_sent_q <= 1'b0;
            state_q    <= IDLE;

            // Capture read data
//             rdata_q    <= wb_dat_i;
          end
        end

      endcase
    end
  end

  // --------------------------------------------------
  // Combinational Outputs
  // --------------------------------------------------
  always_comb begin

    // ----------------------------------------------
    // Defaults
    // ----------------------------------------------
    obi_gnt_o     = 1'b0;
    obi_rvalid_o  = 1'b0;
    obi_rdata_o   = wb_dat_i;

    wb_cyc_o      = 1'b0;
    wb_stb_o      = 1'b0;

    wb_we_o       = we_q;
    wb_adr_o      = addr_q;
    wb_dat_o      = wdata_q;
    wb_sel_o      = be_q;

    // ----------------------------------------------
    // FSM Outputs
    // ----------------------------------------------
    case (state_q)

      // ==========================================
      // IDLE
      // ==========================================
      IDLE: begin

        // Present WB request
        if (obi_req_i && !req_sent_q) begin

          wb_cyc_o = 1'b1;
          wb_stb_o = 1'b1;
          
         // $display("from the DUT wb_cyc_o=%0d, wb_stb_o =%0d,time =%0t",wb_cyc_o, wb_stb_o,$time);

          // Directly drive current request
          wb_we_o  = obi_we_i;
          wb_adr_o = obi_addr_i;
          wb_dat_o = obi_wdata_i;
          wb_sel_o = obi_be_i;

          // WB accepted request
          if (!wb_stall_i) begin
            obi_gnt_o = 1'b1;
            //$display("obi_gnt_o=%0d time =%0t",obi_gnt_o, $time);
          end
        end
      end

      // ==========================================
      // WAIT_ACK
      // ==========================================
      WAIT_ACK: begin

        // Keep cycle alive
        wb_cyc_o = 1'b1;

        // IMPORTANT:
        // STB must remain LOW after acceptance
        // in pipelined Wishbone
       wb_stb_o = 1'b0;
      //  $display(" ===================     from DUT wb_ack_i=%0d, time =%0t",wb_ack_i,$time);
        // Response phase
        if (wb_ack_i) begin
          obi_rvalid_o = 1'b1;
          $display("================= from DUT obi_rvalid_o=%0d, time =%0t",obi_rvalid_o,$time);
          
         
        end
      end

      // ==========================================
      // Default
      // ==========================================
      default: begin
        wb_cyc_o = 1'b0;
        wb_stb_o = 1'b0;
      end

    endcase
  end

endmodule














