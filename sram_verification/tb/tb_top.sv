module tb_top(
    input  logic clk,
    input  logic rst_n,

    // SRAM Controller Interface
    input  logic        sram_req_i,
    input  logic        sram_we_i,
    input  logic [31:0] sram_addr_i,
    input  logic [31:0] sram_wdata_i,
    input  logic [3:0]  sram_be_i,

    output logic [31:0] sram_rdata_o,
    output logic        sram_rvalid_o
);

  logic [31:0] mem [0:2047];

  logic              mem_en_o;
  logic [3:0]        mem_we_o;
  logic [10:0]       mem_addr_o;
  logic [31:0]       mem_wdata_o;
  logic [31:0]       mem_rdata_i;

  // =====================================================
  // DUT
  // =====================================================

  sram_controller dut (
      .clk_i(clk),
      .rst_ni(rst_n),

      .sram_req_i(sram_req_i),
      .sram_we_i(sram_we_i),
      .sram_addr_i(sram_addr_i),
      .sram_wdata_i(sram_wdata_i),
      .sram_be_i(sram_be_i),

      .sram_rdata_o(sram_rdata_o),
      .sram_rvalid_o(sram_rvalid_o),

      .mem_en_o(mem_en_o),
      .mem_we_o(mem_we_o),
      .mem_addr_o(mem_addr_o),
      .mem_wdata_o(mem_wdata_o),
      .mem_rdata_i(mem_rdata_i)
  );

  // =====================================================
  // SRAM MODEL
  // =====================================================

  always_ff @(posedge clk) begin

      if (mem_en_o) begin

          if (mem_we_o[0])
              mem[mem_addr_o][7:0] <= mem_wdata_o[7:0];

          if (mem_we_o[1])
              mem[mem_addr_o][15:8] <= mem_wdata_o[15:8];

          if (mem_we_o[2])
              mem[mem_addr_o][23:16] <= mem_wdata_o[23:16];

          if (mem_we_o[3])
              mem[mem_addr_o][31:24] <= mem_wdata_o[31:24];

      end

      // synchronous read
      mem_rdata_i <= mem[mem_addr_o];

  end

endmodule
