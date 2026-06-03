	// verilator_coverage annotation
	/////////////////////////////////////////////////////////////////////
	////                                                             ////
	////  WISHBONE rev.B2 compliant I2C Master bit-controller        ////
	////                                                             ////
	////                                                             ////
	////  Author: Richard Herveille                                  ////
	////          richard@asics.ws                                   ////
	////          www.asics.ws                                       ////
	////                                                             ////
	////  Downloaded from: http://www.opencores.org/projects/i2c/    ////
	////                                                             ////
	/////////////////////////////////////////////////////////////////////
	////                                                             ////
	//// Copyright (C) 2001 Richard Herveille                        ////
	////                    richard@asics.ws                         ////
	////                                                             ////
	//// This source file may be used and distributed without        ////
	//// restriction provided that this copyright statement is not   ////
	//// removed from the file and that any derivative work contains ////
	//// the original copyright notice and the associated disclaimer.////
	////                                                             ////
	////     THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY     ////
	//// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED   ////
	//// TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS   ////
	//// FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL THE AUTHOR      ////
	//// OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,         ////
	//// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES    ////
	//// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE   ////
	//// GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR        ////
	//// BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF  ////
	//// LIABILITY, WHETHER IN  CONTRACT, STRICT LIABILITY, OR TORT  ////
	//// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  ////
	//// OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE         ////
	//// POSSIBILITY OF SUCH DAMAGE.                                 ////
	////                                                             ////
	/////////////////////////////////////////////////////////////////////
	
	//  CVS Log
	//
	//  $Id: i2c_master_bit_ctrl.v,v 1.10 2003-08-09 07:01:33 rherveille Exp $
	//
	//  $Date: 2003-08-09 07:01:33 $
	//  $Revision: 1.10 $
	//  $Author: rherveille $
	//  $Locker:  $
	//  $State: Exp $
	//
	// Change History:
	//               $Log: not supported by cvs2svn $
	//               Revision 1.9  2003/03/10 14:26:37  rherveille
	//               Fixed cmd_ack generation item (no bug).
	//
	//               Revision 1.8  2003/02/05 00:06:10  rherveille
	//               Fixed a bug where the core would trigger an erroneous 'arbitration lost' interrupt after being reset, when the reset pulse width < 3 clk cycles.
	//
	//               Revision 1.7  2002/12/26 16:05:12  rherveille
	//               Small code simplifications
	//
	//               Revision 1.6  2002/12/26 15:02:32  rherveille
	//               Core is now a Multimaster I2C controller
	//
	//               Revision 1.5  2002/11/30 22:24:40  rherveille
	//               Cleaned up code
	//
	//               Revision 1.4  2002/10/30 18:10:07  rherveille
	//               Fixed some reported minor start/stop generation timing issuess.
	//
	//               Revision 1.3  2002/06/15 07:37:03  rherveille
	//               Fixed a small timing bug in the bit controller.\nAdded verilog simulation environment.
	//
	//               Revision 1.2  2001/11/05 11:59:25  rherveille
	//               Fixed wb_ack_o generation bug.
	//               Fixed bug in the byte_controller statemachine.
	//               Added headers.
	//
	
	//
	/////////////////////////////////////
	// Bit controller section
	/////////////////////////////////////
	//
	// Translate simple commands into SCL/SDA transitions
	// Each command has 5 states, A/B/C/D/idle
	//
	// start:	SCL	~~~~~~~~~~\____
	//	SDA	~~~~~~~~\______
	//		 x | A | B | C | D | i
	//
	// repstart	SCL	____/~~~~\___
	//	SDA	__/~~~\______
	//		 x | A | B | C | D | i
	//
	// stop	SCL	____/~~~~~~~~
	//	SDA	==\____/~~~~~
	//		 x | A | B | C | D | i
	//
	//- write	SCL	____/~~~~\____
	//	SDA	==X=========X=
	//		 x | A | B | C | D | i
	//
	//- read	SCL	____/~~~~\____
	//	SDA	XXXX=====XXXX
	//		 x | A | B | C | D | i
	//
	
	// Timing:     Normal mode      Fast mode
	///////////////////////////////////////////////////////////////////////
	// Fscl        100KHz           400KHz
	// Th_scl      4.0us            0.6us   High period of SCL
	// Tl_scl      4.7us            1.3us   Low period of SCL
	// Tsu:sta     4.7us            0.6us   setup time for a repeated start condition
	// Tsu:sto     4.0us            0.6us   setup time for a stop conditon
	// Tbuf        4.7us            1.3us   Bus free time between a stop and start condition
	//
	
	// synopsys translate_off
	`include "timescale.v"
	// synopsys translate_on
	
	`include "i2c_master_defines.v"
	
	module i2c_master_bit_ctrl(
		clk, rst, nReset, 
		clk_cnt, ena, cmd, cmd_ack, busy, al, din, dout,
		scl_i, scl_o, scl_oen, sda_i, sda_o, sda_oen
		);
	
		//
		// inputs & outputs
		//
 1600336489		input clk;
 2002739831		input rst;
 777015124		input nReset;
%000000		input ena;            // core enable signal
	
 19083967877		input [15:0] clk_cnt; // clock prescale value
	
 2533074958		input  [3:0] cmd;
 1266513824		output       cmd_ack; // command complete acknowledge
		reg cmd_ack;
%000000		output       busy;    // i2c bus busy
		reg busy;
 000033		output       al;      // i2c bus arbitration lost
		reg al;
	
 023799		input  din;
 023799		output dout;
		reg dout;
	
		// I2C lines
%000000		input  scl_i;         // i2c clock line input
%000001		output scl_o;         // i2c clock line output
 40200033		output scl_oen;       // i2c clock line output enable (active low)
		reg scl_oen;
 1266513248		input  sda_i;         // i2c data line input
%000001		output sda_o;         // i2c data line output
 000018		output sda_oen;       // i2c data line output enable (active low)
		reg sda_oen;
	
	
		//
		// variable declarations
		//
	
%000005		reg sSCL, sSDA;             // synchronized SCL and SDA inputs
 1266513680		verilator_coverage: (next point on previous line)

 023799		reg dscl_oen;               // delayed scl_oen
 1266886880		reg sda_chk;                // check SDA output (Multi-master arbitration)
 023799		reg clk_en;                 // clock generation signals
 1266514224		wire slave_wait;
	//	reg [15:0] cnt = clk_cnt;   // clock divider counter (simulation)
 4452425905		reg [15:0] cnt;             // clock divider counter (synthesis)
	
		//
		// module body
		//
	
		// whenever the slave is not ready it can delay the cycle by pulling SCL low
		// delay scl_oen
 263248		always @(posedge clk)
 131624		  dscl_oen <= #1 scl_oen;
	
		assign slave_wait = dscl_oen && !sSCL;
	
	
		// generate clk enable signal
 4005479662		always @(posedge clk or negedge nReset)
 3200672978		  if(~nReset)
 1600336489		    begin
 1600336489		        cnt    <= #1 16'h0;
 1600336489		        clk_en <= #1 1'b1;
		    end
 1554030248		  else if (rst)
 777015124		    begin
 777015124		        cnt    <= #1 16'h0;
 777015124		        clk_en <= #1 1'b1;
		    end
 000066		  else if ( ~|cnt || ~ena)
%000000		  verilator_coverage: (next point on previous line)

 1585865874		    if (~slave_wait)
%000000		    verilator_coverage: (next point on previous line)

 792932937		      begin
 792932937		          cnt    <= #1 clk_cnt;
 792932937		          clk_en <= #1 1'b1;
		      end
		    else
%000000		      begin
%000000		          cnt    <= #1 cnt;
%000000		          clk_en <= #1 1'b0;
		      end
		  else
%000000		    begin
%000000	                cnt    <= #1 cnt - 16'h1;
%000000		        clk_en <= #1 1'b0;
		    end
	
	
		// generate bus status controller
 1886413170		reg dSCL, dSDA;
 1879077477		verilator_coverage: (next point on previous line)

 7497072		reg sta_condition;
 000129		reg sto_condition;
	
		// synchronize SCL and SDA inputs
		// reduce metastability risc
 3838895710		always @(posedge clk or negedge nReset)
 3403341520		  if (~nReset)
 1701670760		    begin
 1701670760		        sSCL <= #1 1'b1;
 1701670760		        sSDA <= #1 1'b1;
	
 1701670760		        dSCL <= #1 1'b1;
 1701670760		        dSDA <= #1 1'b1;
		    end
%000000		  else if (rst)
 788686337		  verilator_coverage: (next point on previous line)

%000000		    begin
%000000		        sSCL <= #1 1'b1;
%000000		        sSDA <= #1 1'b1;
	
%000000		        dSCL <= #1 1'b1;
%000000		        dSDA <= #1 1'b1;
		    end
		  else
 788686337		    begin
 788686337		        sSCL <= #1 scl_i;
 788686337		        sSDA <= #1 sda_i;
	
 788686337		        dSCL <= #1 sSCL;
 788686337		        dSDA <= #1 sSDA;
		    end
	
		// detect start condition => detect falling edge on SDA while SCL is high
		// detect stop condition => detect rising edge on SDA while SCL is high
 1585865874		always @(posedge clk or negedge nReset)
 1588628100		  if (~nReset)
 794314050		    begin
 794314050		        sta_condition <= #1 1'b0;
 794314050		        sto_condition <= #1 1'b0;
		    end
 3369262290		  else if (rst)
 1227843944		  verilator_coverage: (next point on previous line)

 1684631145		    begin
 1684631145		        sta_condition <= #1 1'b0;
 1684631145		        sto_condition <= #1 1'b0;
		    end
		  else
 1227843944		    begin
 1227843944		        sta_condition <= #1 ~sSDA &  dSDA & sSCL;
 1227843944		        sto_condition <= #1  sSDA & ~dSDA & sSCL;
		    end
	
		// generate i2c bus busy signal
 3772826340		always @(posedge clk or negedge nReset)
 4005479662		  if(!nReset)
 2002739831		    busy <= #1 1'b0;
 1591273700		  else if (rst)
 1600336489		  verilator_coverage: (next point on previous line)

 795636850		    busy <= #1 1'b0;
		  else
 1600336489		    busy <= #1 (sta_condition | busy) & ~sto_condition;
	
		// generate arbitration lost signal
		// aribitration lost when:
		// 1) master drives SDA high, but the i2c bus is low
		// 2) stop detected while not requested
 1982755429		reg cmd_stop;
 3739795180		always @(posedge clk or negedge nReset)
 80400066		  if (~nReset)
 40200033		    cmd_stop <= #1 1'b0;
 3758252134		  else if (rst)
 1879126067		    cmd_stop <= #1 1'b0;
 1678039042		  else if (clk_en)
 40763697		  verilator_coverage: (next point on previous line)

 839019521		    cmd_stop <= #1 cmd == `I2C_CMD_STOP;
	
 3770868974		always @(posedge clk or negedge nReset)
 3200577214		  if (~nReset)
 1600288607		    al <= #1 1'b0;
 3403206350		  else if (rst)
 1664248111		  verilator_coverage: (next point on previous line)

 1701603175		    al <= #1 1'b0;
		  else
 1664248111		    al <= #1 (sda_chk & ~sSDA & sda_oen) | (sto_condition & ~cmd_stop);
	
	
		// generate dout signal (store SDA on rising edge of SCL)
 3371089606		always @(posedge clk)
 48548576		  if(sSCL & ~dSCL)
 845742703		  verilator_coverage: (next point on previous line)

 24274288		    dout <= #1 sSDA;
	
		// generate statemachine
	
		// nxt_state decoder
		parameter [16:0] idle    = 17'b0_0000_0000_0000_0000;
		parameter [16:0] start_a = 17'b0_0000_0000_0000_0001;
		parameter [16:0] start_b = 17'b0_0000_0000_0000_0010;
		parameter [16:0] start_c = 17'b0_0000_0000_0000_0100;
		parameter [16:0] start_d = 17'b0_0000_0000_0000_1000;
		parameter [16:0] start_e = 17'b0_0000_0000_0001_0000;
		parameter [16:0] stop_a  = 17'b0_0000_0000_0010_0000;
		parameter [16:0] stop_b  = 17'b0_0000_0000_0100_0000;
		parameter [16:0] stop_c  = 17'b0_0000_0000_1000_0000;
		parameter [16:0] stop_d  = 17'b0_0000_0001_0000_0000;
		parameter [16:0] rd_a    = 17'b0_0000_0010_0000_0000;
		parameter [16:0] rd_b    = 17'b0_0000_0100_0000_0000;
		parameter [16:0] rd_c    = 17'b0_0000_1000_0000_0000;
		parameter [16:0] rd_d    = 17'b0_0001_0000_0000_0000;
		parameter [16:0] wr_a    = 17'b0_0010_0000_0000_0000;
		parameter [16:0] wr_b    = 17'b0_0100_0000_0000_0000;
		parameter [16:0] wr_c    = 17'b0_1000_0000_0000_0000;
		parameter [16:0] wr_d    = 17'b1_0000_0000_0000_0000;
	
 4941946764		reg [16:0] c_state; // synopsis enum_state
	
 3403341520		always @(posedge clk or negedge nReset)
 1577372674		  if (!nReset)
 788686337		    begin
 788686337		        c_state <= #1 idle;
 788686337		        cmd_ack <= #1 1'b0;
 788686337		        scl_oen <= #1 1'b1;
 788686337		        sda_oen <= #1 1'b1;
 788686337		        sda_chk <= #1 1'b0;
		    end
 000290		  else if (rst | al)
%000000		  verilator_coverage: (next point on previous line)

 000145		    begin
 000145		        c_state <= #1 idle;
 000145		        cmd_ack <= #1 1'b0;
 000145		        scl_oen <= #1 1'b1;
 000145		        sda_oen <= #1 1'b1;
 000145		        sda_chk <= #1 1'b0;
		    end
		  else
%000000		    begin
%000000		        cmd_ack   <= #1 1'b0; // default no command acknowledge + assert cmd_ack only 1clk cycle
	
 3758154954		        if (clk_en)
 7497072		        verilator_coverage: (next point on previous line)

 1879077477		          case (c_state) // synopsis full_case parallel_case
		            // idle state
 3758252134		            idle:
 1879126067		            begin
 1879126067		                case (cmd) // synopsis full_case parallel_case
 047598		                  `I2C_CMD_START:
 023799		                     c_state <= #1 start_a;
	
 000210		                  `I2C_CMD_STOP:
 000105		                     c_state <= #1 stop_a;
	
%000000		                  `I2C_CMD_WRITE:
%000000		                     c_state <= #1 wr_a;
	
 000210		                  `I2C_CMD_READ:
 000105		                     c_state <= #1 rd_a;
	
%000000		                  default:
%000000		                    c_state <= #1 idle;
		                endcase
	
 1879126067		                scl_oen <= #1 scl_oen; // keep SCL in same state
 1879126067		                sda_oen <= #1 sda_oen; // keep SDA in same state
 1879126067		                sda_chk <= #1 1'b0;    // don't check SDA output
		            end
	
		            // start
 80400066		            start_a:
 40200033		            begin
 40200033		                c_state <= #1 start_b;
 40200033		                scl_oen <= #1 scl_oen; // keep SCL in same state
 40200033		                sda_oen <= #1 1'b1;    // set SDA high
 40200033		                sda_chk <= #1 1'b0;    // don't check SDA output
		            end
	
 2533028672		            start_b:
 1266514336		            begin
 1266514336		                c_state <= #1 start_c;
 1266514336		                scl_oen <= #1 1'b1; // set SCL high
 1266514336		                sda_oen <= #1 1'b1; // keep SDA high
 1266514336		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
 047598		            start_c:
 023799		            begin
 023799		                c_state <= #1 start_d;
 023799		                scl_oen <= #1 1'b1; // keep SCL high
 023799		                sda_oen <= #1 1'b0; // set SDA low
 023799		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
 000036		            start_d:
 000018		            begin
 000018		                c_state <= #1 start_e;
 000018		                scl_oen <= #1 1'b1; // keep SCL high
 000018		                sda_oen <= #1 1'b0; // keep SDA low
 000018		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
%000000		            start_e:
%000000		            begin
%000000		                c_state <= #1 idle;
%000000		                cmd_ack <= #1 1'b1;
%000000		                scl_oen <= #1 1'b0; // set SCL low
%000000		                sda_oen <= #1 1'b0; // keep SDA low
%000000		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
		            // stop
 000036		            stop_a:
 000018		            begin
 000018		                c_state <= #1 stop_b;
 000018		                scl_oen <= #1 1'b0; // keep SCL low
 000018		                sda_oen <= #1 1'b0; // set SDA low
 000018		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
%000000		            stop_b:
%000000		            begin
%000000		                c_state <= #1 stop_c;
%000000		                scl_oen <= #1 1'b1; // set SCL high
%000000		                sda_oen <= #1 1'b0; // keep SDA low
%000000		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
%000006		            stop_c:
%000003		            begin
%000003		                c_state <= #1 stop_d;
%000003		                scl_oen <= #1 1'b1; // keep SCL high
%000003		                sda_oen <= #1 1'b0; // keep SDA low
%000003		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
%000006		            stop_d:
%000003		            begin
%000003		                c_state <= #1 idle;
%000003		                cmd_ack <= #1 1'b1;
%000003		                scl_oen <= #1 1'b1; // keep SCL high
%000003		                sda_oen <= #1 1'b1; // set SDA high
%000003		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
		            // read
 1591273700		            rd_a:
 795636850		            begin
 795636850		                c_state <= #1 rd_b;
 795636850		                scl_oen <= #1 1'b0; // keep SCL low
 795636850		                sda_oen <= #1 1'b1; // tri-state SDA
 795636850		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
%000000		            rd_b:
%000000		            begin
%000000		                c_state <= #1 rd_c;
%000000		                scl_oen <= #1 1'b1; // set SCL high
%000000		                sda_oen <= #1 1'b1; // keep SDA tri-stated
%000000		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
 000066		            rd_c:
 000033		            begin
 000033		                c_state <= #1 rd_d;
 000033		                scl_oen <= #1 1'b1; // keep SCL high
 000033		                sda_oen <= #1 1'b1; // keep SDA tri-stated
 000033		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
%000000		            rd_d:
%000000		            begin
%000000		                c_state <= #1 idle;
%000000		                cmd_ack <= #1 1'b1;
%000000		                scl_oen <= #1 1'b0; // set SCL low
%000000		                sda_oen <= #1 1'b1; // keep SDA tri-stated
%000000		                sda_chk <= #1 1'b0; // don't check SDA output
		            end
	
		            // write
 1554030248		            wr_a:
 777015124		            begin
 777015124		                c_state <= #1 wr_b;
 777015124		                scl_oen <= #1 1'b0; // keep SCL low
 777015124		                sda_oen <= #1 din;  // set SDA
 777015124		                sda_chk <= #1 1'b0; // don't check SDA output (SCL low)
		            end
	
 3200672978		            wr_b:
 1600336489		            begin
 1600336489		                c_state <= #1 wr_c;
 1600336489		                scl_oen <= #1 1'b1; // set SCL high
 1600336489		                sda_oen <= #1 din;  // keep SDA
 1600336489		                sda_chk <= #1 1'b1; // check SDA output
		            end
	
 4005479662		            wr_c:
 2002739831		            begin
 2002739831		                c_state <= #1 wr_d;
 2002739831		                scl_oen <= #1 1'b1; // keep SCL high
 2002739831		                sda_oen <= #1 din;
 2002739831		                sda_chk <= #1 1'b1; // check SDA output
		            end
	
 3772826340		            wr_d:
 1886413170		            begin
 1886413170		                c_state <= #1 idle;
 1886413170		                cmd_ack <= #1 1'b1;
 1886413170		                scl_oen <= #1 1'b0; // set SCL low
 1886413170		                sda_oen <= #1 din;
 1886413170		                sda_chk <= #1 1'b0; // don't check SDA output (SCL low)
		            end
	
		          endcase
		    end
	
	
		// assign scl and sda output (always gnd)
		assign scl_o = 1'b0;
		assign sda_o = 1'b0;
	
	endmodule
	
