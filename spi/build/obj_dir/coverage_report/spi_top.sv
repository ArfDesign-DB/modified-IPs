	// verilator_coverage annotation
	// Copyright lowRISC contributors.
	// Licensed under the Apache License, Version 2.0, see LICENSE for details.
	// SPDX-License-Identifier: Apache-2.0
	
	module spi_top #(
	  parameter int unsigned ClockFrequency = 50_000_000,
	  parameter int unsigned BaudRate       = 12_500_000,
	  parameter bit CPOL                    = 0,
	  parameter bit CPHA                    = 0,
	  parameter int unsigned AddrWidth      = 32,
	  parameter int unsigned DataWidth      = 32,
	  parameter int unsigned RegAddr        = 12
	) (
 026523	    input  logic clk_i,
%000003	    input  logic rst_ni,
	
 001442	    input  logic                 device_req_i,
 000305	    input  logic [AddrWidth-1:0] device_addr_i,
 001324	    input  logic                 device_we_i,
%000004	    input  logic [3:0]           device_be_i,
 002205	    input  logic [DataWidth-1:0] device_wdata_i,
 001442	    output logic                 device_rvalid_o,
 000078	    output logic [DataWidth-1:0] device_rdata_o,
	
 001236	    input  logic spi_rx_i,
 001301	    output logic spi_tx_o,
 004480	    output logic sck_o,
	
 008188	    output logic [7:0] byte_data_o
	  );
	
	  localparam logic [RegAddr-1:0] SpiTxReg     = RegAddr'('h0);
	  localparam logic [RegAddr-1:0] SpiStatusReg = RegAddr'('h4);
	
 000305	  logic [RegAddr-1:0] reg_addr;
	
	  // Status register read enable
 000118	  logic read_status_q, read_status_d;
 000118	  verilator_coverage: (next point on previous line)

	
	  // Edge detection for popping FIFO elements.
 000559	  logic next_tx_byte_d, next_tx_byte_q;
 000559	  verilator_coverage: (next point on previous line)

	
 000974	  logic       tx_fifo_wvalid;
 000079	  logic       tx_fifo_rvalid, tx_fifo_rready;
 000560	  verilator_coverage: (next point on previous line)

 001114	  logic [7:0] tx_fifo_rdata;
%000008	  logic       tx_fifo_full, tx_fifo_empty;
 000080	  verilator_coverage: (next point on previous line)

 001311	  logic [6:0] tx_fifo_depth;
	
 026526	  always @(posedge clk_i or negedge rst_ni) begin
 000062	    if (!rst_ni) begin
 013232	    verilator_coverage: (next point on previous line)

 000031	      next_tx_byte_q <= '0;
 000031	      device_rvalid_o <= '0;
 013232	    end else begin
 013232	      next_tx_byte_q <= next_tx_byte_d;
 013232	      device_rvalid_o <= device_req_i;
	    end
	  end
	  // This is needed because signal arrives in a slower clock.
	  assign tx_fifo_rready = next_tx_byte_d && ~next_tx_byte_q;
	
	  // We have 1kB space for SPI related registers, ignore top address bits.
	  assign reg_addr = device_addr_i[RegAddr-1:0];
	
	  // FIFO depth signal gives the current valid elements in the FIFO, zero means it's empty.
	  // This will be used in software to indicate whenever we see an empty
	  assign tx_fifo_empty = (tx_fifo_depth == 0);
	
	  // FIFO push happens when software writes to SpiTxReg
	  assign tx_fifo_wvalid = (device_req_i & (reg_addr == SpiTxReg) & device_we_i & device_be_i[0]);
	
	  assign read_status_d = (device_req_i & (reg_addr == SpiStatusReg) & ~device_we_i);
 026526	  always_ff @(posedge clk_i or negedge rst_ni) begin
 000062	    if (!rst_ni) begin
 013232	    verilator_coverage: (next point on previous line)

 000031	      read_status_q  <= 0;
 013232	    end else begin
 013232	      read_status_q  <= read_status_d;
	    end
	  end
	  assign device_rdata_o = read_status_q ? {(DataWidth-2)'('0), tx_fifo_empty, tx_fifo_full} : DataWidth'('0);
	
	  prim_fifo_sync #(
	    .Width ( 8    ),
	    .Pass  ( 1'b0 ),
	    .Depth ( 127  )
	  ) u_tx_fifo (
	    .clk_i (clk_i),
	    .rst_ni,
	    .clr_i (1'b0),
	
	    .wvalid_i(tx_fifo_wvalid), // FIFO Push
	    .wready_o(),
	    .wdata_i (device_wdata_i[7:0]),
	
	    .rvalid_o(tx_fifo_rvalid),
	    .rready_i(tx_fifo_rready), // FIFO Pop
	    .rdata_o (tx_fifo_rdata),
	
	    .full_o (tx_fifo_full),
	    .depth_o(tx_fifo_depth),
	    .err_o() // Unused
	  );
	
	  spi_host #(
	    .ClockFrequency ( ClockFrequency ),
	    .BaudRate       ( BaudRate       ),
	    .CPOL           ( CPOL           ),
	    .CPHA           ( CPHA           )
	  ) u_spi_host (
	    .clk_i (clk_i),
	    .rst_ni(rst_ni),
	
	    .spi_rx_i(spi_rx_i), // Data received from SPI device
	    .spi_tx_o(spi_tx_o), // Data transmitted to SPI device
	    .sck_o   (sck_o), // Serial clock output
	
	    .start_i       (tx_fifo_rvalid), // Starts SPI as long as we have a valid FIFO data.
	    .byte_data_i   (tx_fifo_rdata), // 8-bit data, from FIFO possibly
	    .byte_data_o   (byte_data_o),
	    .next_tx_byte_o(next_tx_byte_d) // requests new byte
	  );
	
	  // Unused signals.
	  //logic [AddrWidth-1-RegAddr:0] unused_device_addr;
%000003	  logic [3:1]                   unused_device_be;
	  //logic [DataWidth-1-8:0]       unused_device_wdata;
	
	  //assign unused_device_addr  = device_addr_i[AddrWidth-1:RegAddr];
	  assign unused_device_be    = device_be_i[3:1];
	  //assign unused_device_wdata = device_wdata_i[DataWidth-1:8];
	
	endmodule
	
