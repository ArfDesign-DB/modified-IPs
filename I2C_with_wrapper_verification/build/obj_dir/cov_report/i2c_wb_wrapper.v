	// verilator_coverage annotation
	module i2c_wb_wrapper #(
	    parameter int AW = 32,
	    parameter int DW = 32
	)(
	
	    // =========================================================
	    // System Clock / Reset
	    // =========================================================
	
 263247	    input  logic             clk_i,
%000002	    input  logic             rst_i,
	
	    // =========================================================
	    // Interconnect-style Interface
	    // (Driven directly by TB)
	    // =========================================================
	
 085396	    input  logic             i2c_req_o,
 000068	    input  logic             i2c_we_o,
 000085	    input  logic [AW-1:0]    i2c_addr_o,
 6948024613	    input  logic [DW-1:0]    i2c_wdata_o,
 7472244919	    input  logic [DW/8-1:0]  i2c_be_o,
	
 839019521	    output logic             i2c_rvalid_i,
 20813505035	    output logic [DW-1:0]    i2c_rdata_i,
	
	    // =========================================================
	    // Physical I2C Pins
	    // =========================================================
	
%000000	    input  logic             scl_pad_i,
 1879126067	    output logic             scl_pad_o,
 40200033	    output logic             scl_padoen_o,
	
 1266513248	    input  logic             sda_pad_i,
 023799	    output logic             sda_pad_o,
 000018	    output logic             sda_padoen_o,
	
%000000	    output logic             wb_inta_o
	);
	
	    // =========================================================
	    // Internal Wishbone Signals
	    // =========================================================
	
 2758909285	    logic [2:0] wb_adr_i;
 3185862998	    logic [7:0] wb_dat_i;
 1684631224	    logic [7:0] wb_dat_o;
	
 1982755429	    logic       wb_we_i;
 1886413170	    logic       wb_stb_i;
 1886413170	    logic       wb_cyc_i;
	
 777015124	    logic       wb_ack_o;
	
 2002739831	    logic       wb_rst_i;
 1600336489	    logic       arst_i;
	
	    // =========================================================
	    // Interconnect → Wishbone Translation
	    // =========================================================
	
	    assign wb_cyc_i = i2c_req_o;
	
	    assign wb_stb_i = i2c_req_o;
	
	    assign wb_we_i  = i2c_we_o;
	
	    // OpenCores I2C uses only 3-bit register address
	    assign wb_adr_i = i2c_addr_o[2:0];
	
	    // OpenCores I2C is 8-bit peripheral
	    assign wb_dat_i = i2c_wdata_o[7:0];
	
	    // Reset mapping
	    assign wb_rst_i = rst_i;
	
	    // OpenCores async reset polarity handling
	    assign arst_i = ~rst_i;
	
	    // =========================================================
	    // Wishbone → Interconnect Translation
	    // =========================================================
	
	    assign i2c_rvalid_i = wb_ack_o;
	
	    assign i2c_rdata_i = {
	        {(DW-8){1'b0}},
	        wb_dat_o
	    };
	
	    // =========================================================
	    // OpenCores I2C Master
	    // =========================================================
	
	    i2c_master_top u_i2c_master_top (
	
	        .wb_clk_i      ( clk_i          ),
	        .wb_rst_i      ( wb_rst_i       ),
	        .arst_i        ( arst_i         ),
	
	        .wb_adr_i      ( wb_adr_i       ),
	        .wb_dat_i      ( wb_dat_i       ),
	        .wb_dat_o      ( wb_dat_o       ),
	
	        .wb_we_i       ( wb_we_i        ),
	        .wb_stb_i      ( wb_stb_i       ),
	        .wb_cyc_i      ( wb_cyc_i       ),
	
	        .wb_ack_o      ( wb_ack_o       ),
	        .wb_inta_o     ( wb_inta_o      ),
	
	        .scl_pad_i     ( scl_pad_i      ),
	        .scl_pad_o     ( scl_pad_o      ),
	        .scl_padoen_o  ( scl_padoen_o   ),
	
	        .sda_pad_i     ( sda_pad_i      ),
	        .sda_pad_o     ( sda_pad_o      ),
	        .sda_padoen_o  ( sda_padoen_o   )
	    );
	
	endmodule
	
