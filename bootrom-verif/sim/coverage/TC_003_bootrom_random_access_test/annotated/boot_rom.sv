//      // verilator_coverage annotation
        module boot_rom #(
          parameter int ADDR_WIDTH = 10,  // 1024 words = 4 KB
          parameter     INIT_FILE  = "boot.mem"
        )(
 020000   input  logic              clk_i,
 006680   input  logic [ADDR_WIDTH-1:0] addr_i,
~005250   output logic [31:0]       data_o
        );
        
          logic [31:0] mem [0:2**ADDR_WIDTH-1];
        
%000001   initial begin
%000001     $readmemh(INIT_FILE, mem);
          end
        
 020000   always_ff @(posedge clk_i) begin
 020000     data_o <= mem[addr_i];
          end
        
        endmodule
        
