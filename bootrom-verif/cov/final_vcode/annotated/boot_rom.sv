//      // verilator_coverage annotation
        module boot_rom #(
          parameter int ADDR_WIDTH = 10,  // 1024 words = 4 KB
          parameter     INIT_FILE  = "boot.mem"
        )(
 021524   input  logic              clk_i,
 006972   input  logic [ADDR_WIDTH-1:0] addr_i,
~005388   output logic [31:0]       data_o
        );
        
          logic [31:0] mem [0:2**ADDR_WIDTH-1];
        
%000003   initial begin
%000003     $readmemh(INIT_FILE, mem);
          end
        
 021524   always_ff @(posedge clk_i) begin
 021524     data_o <= mem[addr_i];
          end
        
        endmodule
        
