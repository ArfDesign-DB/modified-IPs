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
	 
 021149	    input  logic clk_i,
	
%000001	    input  logic rst_ni,
	 
 000987	    input  logic spi_rx_i,
	
 001042	    output logic spi_tx_o,
	
 003592	    output logic sck_o,
	 
 000075	    input  logic       start_i,
	
 000881	    input  logic [7:0] byte_data_i,
	 
 006571	    output logic [7:0] byte_data_o,
	
 000448	    output logic       next_tx_byte_o
	 
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
	 
 009955	  logic [CountWidth-1:0] count;
	
%000001	  logic [CountWidth-1:0] limit;
	 
 004940	  logic sck;
	 
 009955	  logic count_at_limit;
	 
 005015	  logic sck_pos;
	
 004940	  logic sck_neg;
	 
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
	 
 001347	  spi_state_t state_q;
	 
	  // ============================================================
	
	  // INTERNAL REGISTERS
	
	  // ============================================================
	 
 003146	  logic [2:0] bit_counter_q;
	 
 004823	  logic [7:0] current_byte_q;
	
 006571	  logic [7:0] recieved_byte_q;
	 
	  // ============================================================
	
	  // SCK ENABLE
	
	  // ============================================================
	 
 000449	  logic sck_en;
	 
	  assign sck_en = (state_q == SEND);
	 
	  // ============================================================
	
	  // SCK GENERATION
	
	  // ============================================================
	 
 021150	  always_ff @(posedge clk_i or negedge rst_ni) begin
	 
 000040	    if (!rst_ni) begin
	 
 000020	      count <= '0;
	
 000020	      sck   <= CPOL;
	 
	    end
	 
 001274	    else if (!(sck_en || start_i)) begin
	 
 000637	      count <= '0;
	
 000637	      sck   <= CPOL;
	 
	    end
	 
 009880	    else if (count_at_limit) begin
 004978	    verilator_coverage: (next point on previous line)

	 
 004940	      count <= '0;
	
 004940	      sck   <= ~sck;
	 
	    end
	 
 004978	    else begin
	 
 004978	      count <= count + 1'b1;
	 
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
	 
 021150	      always_ff @(posedge clk_i or negedge rst_ni) begin
	 
 000040	        if (!rst_ni) begin
	 
 000020	          state_q         <= IDLE;
	
 000020	          current_byte_q  <= '0;
	
 000020	          recieved_byte_q <= '0;
	
 000020	          bit_counter_q   <= '0;
	 
	        end
	 
	        // ------------------------------------------------------
	
	        // SAMPLE MISO ON RISING EDGE
	
	        // ------------------------------------------------------
	 
 005014	        else if (sck_pos) begin
	 
 003592	          if (state_q == SEND) begin
 000711	          verilator_coverage: (next point on previous line)

	 
 001796	            recieved_byte_q <=
	
 001796	            {recieved_byte_q[6:0], spi_rx_i};
	 
	          end
	 
	        end
	 
	        // ------------------------------------------------------
	
	        // SHIFT MOSI ON FALLING EDGE
	
	        // ------------------------------------------------------
	 
 004940	        else if (sck_neg) begin
 005578	        verilator_coverage: (next point on previous line)

	 
 002470	          case (state_q)
	 
	            // --------------------------------------------------
	
	            // IDLE
	
	            // --------------------------------------------------
	 
 000450	            IDLE: begin
	 
 000450	              if (start_i)
%000000	              verilator_coverage: (next point on previous line)

	 
 000225	                state_q <= START;
	 
	            end
	 
	            // --------------------------------------------------
	
	            // LOAD BYTE
	
	            // --------------------------------------------------
	 
 000450	            START: begin
	 
 000225	              current_byte_q <= byte_data_i;
	 
 000225	              bit_counter_q  <= 3'd7;
	 
 000225	              state_q        <= SEND;
	 
	            end
	 
	            // --------------------------------------------------
	
	            // SEND BITS
	
	            // --------------------------------------------------
	 
 003592	            SEND: begin
	 
 001796	              current_byte_q <=
	
 001796	              {current_byte_q[6:0], 1'b0};
	 
 000448	              if (bit_counter_q == 3'd0)
 001572	              verilator_coverage: (next point on previous line)

	 
 000224	                state_q <= STOP;
	 
	              else
	 
 001572	                bit_counter_q <=
	
 001572	                bit_counter_q - 1'b1;
	 
	            end
	 
	            // --------------------------------------------------
	
	            // STOP
	
	            // --------------------------------------------------
	 
 000448	            STOP: begin
	 
 000224	              state_q <= IDLE;
	 
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
	 
	
