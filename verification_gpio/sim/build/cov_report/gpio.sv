//      // verilator_coverage annotation
        //typedef int unsigned count_t;
        /*
        module debounce #(
            parameter count_t ClkCount = 500
        ) (
            input  logic clk_i,
            input  logic rst_ni,
        
            input  logic btn_i,
            output logic btn_o
        );
        
          logic [$clog2(ClkCount+1)-1:0] cnt_d, cnt_q;
          logic btn_d, btn_q;
        
          assign btn_o = btn_q;
        
          always_ff @(posedge clk_i or negedge rst_ni) begin : p_fsm_reg
            if (!rst_ni) begin
              cnt_q <= '0;
              btn_q <= '0;
            end else begin
              cnt_q <= cnt_d;
              btn_q <= btn_d;
            end
          end
        
          assign btn_d = (count_t'(cnt_q) >= ClkCount) ? btn_i : btn_q;
          // Clear counter if button input equals stored value or if maximum counter value is reached,
          // otherwise increment counter.
          assign cnt_d = (btn_i == btn_q || count_t'(cnt_q) >= ClkCount) ? '0 : cnt_q + 1;
        
        endmodule
        
        */
        
        
        module gpio #(
          parameter int unsigned GpiWidth  = 8,
          parameter int unsigned GpoWidth  = 16,
          parameter int unsigned AddrWidth = 32,
          parameter int unsigned DataWidth = 32,
          parameter int unsigned RegAddr   = 12
        ) (
 010563   input  logic clk_i,
%000007   input  logic rst_ni,
        
 000132   input  logic                 device_req_i,
%000002   input  logic [AddrWidth-1:0] device_addr_i,
 000042   input  logic                 device_we_i,
 000013   input  logic [3:0]           device_be_i,
%000006   input  logic [DataWidth-1:0] device_wdata_i,
 000132   output logic                 device_rvalid_o,
 000040   output logic [DataWidth-1:0] device_rdata_o,
        
%000008   input  logic [GpiWidth-1:0] gp_i,
%000006   output logic [GpoWidth-1:0] gp_o
        );
        
          localparam int unsigned GPIO_OUT_REG = 32'h0;
          localparam int unsigned GPIO_IN_REG = 32'h4;
          localparam int unsigned GPIO_IN_DBNC_REG = 32'h8;
        
%000002   logic [RegAddr-1:0] reg_addr;
        
%000008   logic [2:0][GpiWidth-1:0] gp_i_q;
%000002   logic [GpiWidth-1:0] gp_i_dbnc;
%000008   logic [GpoWidth-1:0] gp_o_d;
        
 000036   logic gp_o_wr_en;
 000040   logic gp_i_rd_en_d, gp_i_rd_en_q;
 000022   logic gp_i_dbnc_rd_en_d, gp_i_dbnc_rd_en_q;
%000008 logic invalid_address_signal;
          // Instantiate debouncers for all GP inputs.
          for (genvar i = 0; i < GpiWidth; i++) begin : gen_debounce
            debounce #(
              .ClkCount(500)
            ) dbnc (
              .clk_i,
              .rst_ni,
              .btn_i(gp_i_q[2][i]),
              .btn_o(gp_i_dbnc[i])
            );
          end
        
 005285   always @(posedge clk_i or negedge rst_ni) begin
 000023     if (!rst_ni) begin
 000023       gp_i_q            <= '0;
 000023       gp_o              <= '0;
 000023       device_rvalid_o   <= '0;
 000023       gp_i_rd_en_q      <= '0;
 000023       gp_i_dbnc_rd_en_q <= '0;
 005262     end else begin
 005262       gp_i_q <= {gp_i_q[1:0], gp_i};
 000018       if (gp_o_wr_en) begin
 000018         gp_o <= gp_o_d;
              end
 005262       device_rvalid_o   <= device_req_i;
 005262       gp_i_rd_en_q      <= gp_i_rd_en_d;
 005262       gp_i_dbnc_rd_en_q <= gp_i_dbnc_rd_en_d;
            end
          end
        
 000015   logic [3:0] unused_device_be;
        
          // Assign gp_o_d regarding to device_be_i and GpoWidth.
          for (genvar i_byte = 0; i_byte < 4; ++i_byte) begin : gen_gp_o_d;
            if (i_byte * 8 < GpoWidth) begin : gen_gp_o_d_inner
              localparam int gpo_byte_end = (i_byte + 1) * 8 <= GpoWidth ? (i_byte + 1) * 8 : GpoWidth;
              assign gp_o_d[gpo_byte_end - 1 : i_byte * 8] =
                device_be_i[i_byte] ? device_wdata_i[gpo_byte_end - 1 : i_byte * 8] :
                                      gp_o[gpo_byte_end - 1 : i_byte * 8];
              assign unused_device_be[i_byte] = 0;
            end else begin : gen_unused_device_be
              assign unused_device_be[i_byte] = device_be_i[i_byte];
            end
          end
        
          // Decode write and read requests.
          assign reg_addr          = device_addr_i[RegAddr-1:0];
          assign gp_o_wr_en        = device_req_i &  device_we_i & (reg_addr == GPIO_OUT_REG[RegAddr-1:0]);
          assign gp_i_rd_en_d      = device_req_i & ~device_we_i & (reg_addr == GPIO_IN_REG[RegAddr-1:0]);
          assign gp_i_dbnc_rd_en_d = device_req_i & ~device_we_i & (reg_addr == GPIO_IN_DBNC_REG[RegAddr-1:0]);
         
        
        assign invalid_address_signal =
            (reg_addr != GPIO_OUT_REG[RegAddr-1:0]) &&
            (reg_addr != GPIO_IN_REG[RegAddr-1:0]) &&
            (reg_addr != GPIO_IN_DBNC_REG[RegAddr-1:0]);  
          
        
          // Assign device_rdata_o according to request type.
%000001   always_comb begin
 000054     if(invalid_address_signal)
 000054       device_rdata_o = 0;
 000033     else if (gp_i_dbnc_rd_en_q)
 000033       device_rdata_o = {{(DataWidth - GpiWidth){1'b0}}, gp_i_dbnc};
 000059     else if (gp_i_rd_en_q) begin
 000059       device_rdata_o = {{(DataWidth - GpiWidth){1'b0}}, gp_i_q[2]};
              //$display(device_rdata_o);
              
            end
 000054     else if(gp_o_wr_en) begin
 000054       device_rdata_o = {{(DataWidth - GpoWidth){1'b0}}, gp_o};
            end
            else 
 015623     begin
 015623       device_rdata_o = {{(DataWidth - GpoWidth){1'b0}}, gp_o};
            end
          end
          /*
          // Assign device_rdata_o according to request type.
          always_comb begin
            if (gp_i_dbnc_rd_en_q)
              device_rdata_o = {{(DataWidth - GpiWidth){1'b0}}, gp_i_dbnc};
            else if (gp_i_rd_en_q) begin
              device_rdata_o = {{(DataWidth - GpiWidth){1'b0}}, gp_i_q[2]};
            end
            else if(gp_o_wr_en) begin
              device_rdata_o = {{(DataWidth - GpoWidth){1'b0}}, gp_o};
            end
            else
              device_rdata_o = 0;
          end
        */
          // Unused signals.
%000000   logic [AddrWidth-1-RegAddr:0]  unused_device_addr;
%000006   logic [DataWidth-1-GpoWidth:0] unused_device_wdata;
        
          assign unused_device_addr  = device_addr_i[AddrWidth-1:RegAddr];
          assign unused_device_wdata = device_wdata_i[DataWidth-1:GpoWidth];
        endmodule
        
