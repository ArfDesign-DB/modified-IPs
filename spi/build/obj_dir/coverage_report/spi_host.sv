	// verilator_coverage annotation
	// Copyright lowRISC contributors.
	
	// Licensed under the Apache License, Version 2.0
	
	// SPDX-License-Identifier: Apache-2.0
	 
	module spi_host #(
	
	  parameter int unsigned ClockFrequency = 50_000_000,
	
	  parameter int unsigned BaudRate       = 12_500_000,
	
	  parameter bit CPOL                    = 0,
	
	  parameter bit CPHA                    = 0
	
	)(
	 
 026523	    input  logic clk_i,
	
%000003	    input  logic rst_ni,
	 
 001236	    input  logic spi_rx_i,
	
 001301	    output logic spi_tx_o,
	
 004480	    output logic sck_o,
	 
 000079	    input  logic       start_i,
	
 001114	    input  logic [7:0] byte_data_i,
	 
 008188	    output logic [7:0] byte_data_o,
	
 000559	    output logic       next_tx_byte_o
	 
	);
	 
	  // ============================================================
	
	  // CLOCK GENERATION
	
	  // ============================================================
	 
	  localparam int unsigned ClocksPerBaud =
	
	                              ClockFrequency / BaudRate;
	 
	  localparam int unsigned ToggleCount =
	
	                              ClocksPerBaud / 2;
	 
	  localparam int unsigned CountWidth =
	
	                              $clog2(ToggleCount);
	 
 012404	  logic [CountWidth-1:0] count;
	
%000001	  logic [CountWidth-1:0] limit;
	 
 006163	  logic sck;
	 
 012404	  logic count_at_limit;
	 
 006242	  logic sck_pos;
	
 006162	  logic sck_neg;
	 
	  assign limit = CountWidth'(ToggleCount - 1);
	 
	  assign count_at_limit = (count >= limit);
	 
	  // ============================================================
	
	  // SPI FSM
	
	  // ============================================================
	 
	  typedef enum logic [1:0] {
	 
	    IDLE,
	
	    START,
	
	    SEND,
	
	    STOP
	 
	  } spi_state_t;
	 
 001682	  spi_state_t state_q;
	 
	  // ============================================================
	
	  // INTERNAL REGISTERS
	
	  // ============================================================
	 
 003926	  logic [2:0] bit_counter_q;
	 
 006070	  logic [7:0] current_byte_q;
	
 008188	  logic [7:0] recieved_byte_q;
	 
	  // ============================================================
	
	  // SCK ENABLE
	
	  // ============================================================
	 
 000562	  logic sck_en;
	 
	  assign sck_en = (state_q == SEND);
	 
	  // ============================================================
	
	  // SCK GENERATION
	
	  // ============================================================
	 
 026526	  always_ff @(posedge clk_i or negedge rst_ni) begin
	 
 000062	    if (!rst_ni) begin
	 
 000031	      count <= '0;
	
 000031	      sck   <= CPOL;
	 
	    end
	 
 001734	    else if (!(sck_en || start_i)) begin
	 
 000867	      count <= '0;
	
 000867	      sck   <= CPOL;
	 
	    end
	 
 012326	    else if (count_at_limit) begin
 006202	    verilator_coverage: (next point on previous line)

	 
 006163	      count <= '0;
	
 006163	      sck   <= ~sck;
	 
	    end
	 
 006202	    else begin
	 
 006202	      count <= count + 1'b1;
	 
	    end
	 
	  end
	 
	  // ============================================================
	
	  // SCK OUTPUT
	
	  // ============================================================
	 
	  assign sck_o = sck_en ? sck : CPOL;
	 
	  // ============================================================
	
	  // SCK EDGE DETECTION
	
	  // ============================================================
	 
	  assign sck_pos = count_at_limit && !sck;
	 
	  assign sck_neg = count_at_limit &&  sck;
	 
	  // ============================================================
	
	  // MOSI OUTPUT
	
	  // ============================================================
	 
	  assign spi_tx_o =
	
	          (state_q == SEND) ?
	
	           current_byte_q[7] :
	
	           1'b1;
	 
	  // ============================================================
	
	  // BYTE DONE
	
	  // ============================================================
	 
	  assign next_tx_byte_o =
	
	          (state_q == STOP);
	 
	  // ============================================================
	
	  // RX BYTE OUTPUT
	
	  // ============================================================
	 
	  assign byte_data_o = recieved_byte_q;
	 
	  // ============================================================
	
	  // SPI MODE-0
	
	  // CPOL = 0
	
	  // CPHA = 0
	
	  //
	
	  // SAMPLE on rising edge
	
	  // SHIFT  on falling edge
	
	  // ============================================================
	 
	  generate
	 
	    if (CPHA == 0) begin : gen_mode0
	 
 026526	      always_ff @(posedge clk_i or negedge rst_ni) begin
	 
 000062	        if (!rst_ni) begin
	 
 000031	          state_q         <= IDLE;
	
 000031	          current_byte_q  <= '0;
	
 000031	          recieved_byte_q <= '0;
	
 000031	          bit_counter_q   <= '0;
	 
	        end
	 
	        // ------------------------------------------------------
	
	        // SAMPLE MISO ON RISING EDGE
	
	        // ------------------------------------------------------
	 
 006240	        else if (sck_pos) begin
	 
 004480	          if (state_q == SEND) begin
 000880	          verilator_coverage: (next point on previous line)

	 
 002240	            recieved_byte_q <=
	
 002240	            {recieved_byte_q[6:0], spi_rx_i};
	 
	          end
	 
	        end
	 
	        // ------------------------------------------------------
	
	        // SHIFT MOSI ON FALLING EDGE
	
	        // ------------------------------------------------------
	 
 006162	        else if (sck_neg) begin
 007031	        verilator_coverage: (next point on previous line)

	 
 003081	          case (state_q)
	 
	            // --------------------------------------------------
	
	            // IDLE
	
	            // --------------------------------------------------
	 
 000562	            IDLE: begin
	 
 000562	              if (start_i)
%000000	              verilator_coverage: (next point on previous line)

	 
 000281	                state_q <= START;
	 
	            end
	 
	            // --------------------------------------------------
	
	            // LOAD BYTE
	
	            // --------------------------------------------------
	 
 000562	            START: begin
	 
 000281	              current_byte_q <= byte_data_i;
	 
 000281	              bit_counter_q  <= 3'd7;
	 
 000281	              state_q        <= SEND;
	 
	            end
	 
	            // --------------------------------------------------
	
	            // SEND BITS
	
	            // --------------------------------------------------
	 
 004480	            SEND: begin
	 
 002240	              current_byte_q <=
	
 002240	              {current_byte_q[6:0], 1'b0};
	 
 000560	              if (bit_counter_q == 3'd0)
 001960	              verilator_coverage: (next point on previous line)

	 
 000280	                state_q <= STOP;
	 
	              else
	 
 001960	                bit_counter_q <=
	
 001960	                bit_counter_q - 1'b1;
	 
	            end
	 
	            // --------------------------------------------------
	
	            // STOP
	
	            // --------------------------------------------------
	 
 000558	            STOP: begin
	 
 000279	              state_q <= IDLE;
	 
	            end
	 
	          endcase
	 
	        end
	 
	      end
	 
	    end
	 
	    // ==========================================================
	
	    // CPHA = 1
	
	    // SAMPLE on falling edge
	
	    // SHIFT  on rising edge
	
	    // ==========================================================
	 
	    else begin : gen_mode1
	 
	      always_ff @(posedge clk_i or negedge rst_ni) begin
	 
	        if (!rst_ni) begin
	 
	          state_q         <= IDLE;
	
	          current_byte_q  <= '0;
	
	          recieved_byte_q <= '0;
	
	          bit_counter_q   <= '0;
	 
	        end
	 
	        // ------------------------------------------------------
	
	        // SHIFT MOSI ON RISING EDGE
	
	        // ------------------------------------------------------
	 
	        else if (sck_pos) begin
	 
	          case (state_q)
	 
	            IDLE: begin
	 
	              if (start_i)
	 
	                state_q <= START;
	 
	            end
	 
	            START: begin
	 
	              current_byte_q <= byte_data_i;
	 
	              bit_counter_q  <= 3'd7;
	 
	              state_q        <= SEND;
	 
	            end
	 
	            SEND: begin
	 
	              current_byte_q <=
	
	              {current_byte_q[6:0], 1'b0};
	 
	              if (bit_counter_q == 3'd0)
	 
	                state_q <= STOP;
	 
	              else
	 
	                bit_counter_q <=
	
	                bit_counter_q - 1'b1;
	 
	            end
	 
	            STOP: begin
	 
	              state_q <= IDLE;
	 
	            end
	 
	          endcase
	 
	        end
	 
	        // ------------------------------------------------------
	
	        // SAMPLE MISO ON FALLING EDGE
	
	        // ------------------------------------------------------
	 
	        else if (sck_neg) begin
	 
	          if (state_q == SEND) begin
	 
	            recieved_byte_q <=
	
	            {recieved_byte_q[6:0], spi_rx_i};
	 
	          end
	 
	        end
	 
	      end
	 
	    end
	 
	  endgenerate
	 
	endmodule
	 
	
