//      // verilator_coverage annotation
        module boot_rom #(
          parameter int ADDR_WIDTH = 10,  // 1024 words = 4 KB
          parameter     INIT_FILE  = "boot.mem"
        )(
 001024   input  logic              clk_i,
~000512   input  logic [ADDR_WIDTH-1:0] addr_i,
~000023   output logic [31:0]       data_o
        );
        
          logic [31:0] mem [0:2**ADDR_WIDTH-1];
        
%000001   initial begin
%000001     $readmemh(INIT_FILE, mem);
          end
        
 001024   always_ff @(posedge clk_i) begin
 001024     data_o <= mem[addr_i];
          end
        
        endmodule
        
