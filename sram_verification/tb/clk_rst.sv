module clk_rst(
  output logic clk,
  output logic rst_n
);

  initial begin
    clk = 0;
    forever #25 clk = ~clk; // 20MHz
  end

  initial begin
    rst_n = 0;
    #20;
    rst_n = 1;
  end

endmodule
