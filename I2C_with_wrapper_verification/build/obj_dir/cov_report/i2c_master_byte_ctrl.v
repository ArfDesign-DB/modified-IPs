	// verilator_coverage annotation
	/////////////////////////////////////////////////////////////////////
	////                                                             ////
	////  WISHBONE rev.B2 compliant I2C Master byte-controller       ////
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
	//  $Id: i2c_master_byte_ctrl.v,v 1.6 2003-08-09 07:01:33 rherveille Exp $
	//
	//  $Date: 2003-08-09 07:01:33 $
	//  $Revision: 1.6 $
	//  $Author: rherveille $
	//  $Locker:  $
	//  $State: Exp $
	//
	// Change History:
	//               $Log: not supported by cvs2svn $
	//               Revision 1.5  2002/12/26 15:02:32  rherveille
	//               Core is now a Multimaster I2C controller
	//
	//               Revision 1.4  2002/11/30 22:24:40  rherveille
	//               Cleaned up code
	//
	//               Revision 1.3  2001/11/05 11:59:25  rherveille
	//               Fixed wb_ack_o generation bug.
	//               Fixed bug in the byte_controller statemachine.
	//               Added headers.
	//
	
	// synopsys translate_off
	`include "timescale.v"
	// synopsys translate_on
	
	`include "i2c_master_defines.v"
	
	module i2c_master_byte_ctrl (
		clk, rst, nReset, ena, clk_cnt, start, stop, read, write, ack_in, din,
		cmd_ack, ack_out, dout, i2c_busy, i2c_al, scl_i, scl_o, scl_oen, sda_i, sda_o, sda_oen );
	
		//
		// inputs & outputs
		//
 1600336489		input clk;     // master clock
 2002739831		input rst;     // synchronous active high reset
 777015124		input nReset;  // asynchronous active low reset
%000000		input ena;     // core enable signal
	
 19083967877		input [15:0] clk_cnt; // 4x SCL
	
		// control inputs
 24274288		input       start;
 845742703		input       stop;
 1685544803		input       read;
 1600222305		input       write;
 942824303		input       ack_in;
 10231802391		input [7:0] din;
	
		// status outputs
 000018		output       cmd_ack;
		reg cmd_ack;
%000000		output       ack_out;
		reg ack_out;
%000000		output       i2c_busy;
 000033		output       i2c_al;
 000338		output [7:0] dout;
	
		// I2C signals
%000000		input  scl_i;
 1879126067		output scl_o;
 40200033		output scl_oen;
 1266513248		input  sda_i;
 023799		output sda_o;
 000018		output sda_oen;
	
	
		//
		// Variable declarations
		//
	
		// statemachine
		parameter [4:0] ST_IDLE  = 5'b0_0000;
		parameter [4:0] ST_START = 5'b0_0001;
		parameter [4:0] ST_READ  = 5'b0_0010;
		parameter [4:0] ST_WRITE = 5'b0_0100;
		parameter [4:0] ST_ACK   = 5'b0_1000;
		parameter [4:0] ST_STOP  = 5'b1_0000;
	
		// signals for bit_controller
 2533074958		reg  [3:0] core_cmd;
 023799		reg        core_txd;
 1266513824		wire       core_ack, core_rxd;
 023799		verilator_coverage: (next point on previous line)

	
		// signals for shift register
 000338		reg [7:0] sr; //8bit shift register
 000105		reg       shift, ld;
%000000		verilator_coverage: (next point on previous line)

	
		// signals for state machine
 000105		wire       go;
 1919326100		reg  [2:0] dcnt;
 1266513792		wire       cnt_done;
	
		//
		// Module body
		//
	
		// hookup bit_controller
		i2c_master_bit_ctrl bit_controller (
			.clk     ( clk      ),
			.rst     ( rst      ),
			.nReset  ( nReset   ),
			.ena     ( ena      ),
			.clk_cnt ( clk_cnt  ),
			.cmd     ( core_cmd ),
			.cmd_ack ( core_ack ),
			.busy    ( i2c_busy ),
			.al      ( i2c_al   ),
			.din     ( core_txd ),
			.dout    ( core_rxd ),
			.scl_i   ( scl_i    ),
			.scl_o   ( scl_o    ),
			.scl_oen ( scl_oen  ),
			.sda_i   ( sda_i    ),
			.sda_o   ( sda_o    ),
			.sda_oen ( sda_oen  )
		);
	
		// generate go-signal
		assign go = (read | write | stop) & ~cmd_ack;
	
		// assign dout output to shift-register
		assign dout = sr;
	
		// generate shift register
 263248		always @(posedge clk or negedge nReset)
%000000		  if (!nReset)
%000000		    sr <= #1 8'h0;
 000036		  else if (rst)
 000018		    sr <= #1 8'h0;
%000000		  else if (ld)
%000000		    sr <= #1 din;
 047598		  else if (shift)
 000018		  verilator_coverage: (next point on previous line)

 023799		    sr <= #1 {sr[6:0], core_rxd};
	
		// generate counter
 1554030248		always @(posedge clk or negedge nReset)
%000000		  if (!nReset)
%000000		    dcnt <= #1 3'h0;
 000066		  else if (rst)
 000033		    dcnt <= #1 3'h0;
%000000		  else if (ld)
%000000		    dcnt <= #1 3'h7;
 000160		  else if (shift)
 794314050		  verilator_coverage: (next point on previous line)

 000080		    dcnt <= #1 dcnt - 3'h1;
	
		assign cnt_done = ~(|dcnt);
	
		//
		// state machine
		//
 7376064039		reg [4:0] c_state; // synopsis enum_state
	
%000000		always @(posedge clk or negedge nReset)
 000226		  if (!nReset)
 000113		    begin
 000113		        core_cmd <= #1 `I2C_CMD_NOP;
 000113		        core_txd <= #1 1'b0;
 000113		        shift    <= #1 1'b0;
 000113		        ld       <= #1 1'b0;
 000113		        cmd_ack  <= #1 1'b0;
 000113		        c_state  <= #1 ST_IDLE;
 000113		        ack_out  <= #1 1'b0;
		    end
%000004		  else if (rst | i2c_al)
 131612		  verilator_coverage: (next point on previous line)

%000002		   begin
%000002		       core_cmd <= #1 `I2C_CMD_NOP;
%000002		       core_txd <= #1 1'b0;
%000002		       shift    <= #1 1'b0;
%000002		       ld       <= #1 1'b0;
%000002		       cmd_ack  <= #1 1'b0;
%000002		       c_state  <= #1 ST_IDLE;
%000002		       ack_out  <= #1 1'b0;
		   end
		else
 131612		  begin
		      // initially reset all signals
 131612		      core_txd <= #1 sr[7];
 131612		      shift    <= #1 1'b0;
 131612		      ld       <= #1 1'b0;
 131612		      cmd_ack  <= #1 1'b0;
	
 131612		      case (c_state) // synopsis full_case parallel_case
 2455687888		        ST_IDLE:
 3838895710		          if (go)
 1684631145		          verilator_coverage: (next point on previous line)

 1919447855		            begin
 3403341520		                if (start)
 1701670760		                  begin
 1701670760		                      c_state  <= #1 ST_START;
 1701670760		                      core_cmd <= #1 `I2C_CMD_START;
		                  end
 1577372674		                else if (read)
 788686337		                  begin
 788686337		                      c_state  <= #1 ST_READ;
 788686337		                      core_cmd <= #1 `I2C_CMD_READ;
		                  end
 000258		                else if (write)
%000000		                verilator_coverage: (next point on previous line)

 000129		                  begin
 000129		                      c_state  <= #1 ST_WRITE;
 000129		                      core_cmd <= #1 `I2C_CMD_WRITE;
		                  end
		                else // stop
%000000		                  begin
%000000		                      c_state  <= #1 ST_STOP;
%000000		                      core_cmd <= #1 `I2C_CMD_STOP;
	
		                      // generate command acknowledge signal
%000000		                      cmd_ack  <= #1 1'b1;
		                  end
	
 1919447855		                ld <= #1 1'b1;
		            end
	
 4005479662		        ST_START:
 1591273700		          if (core_ack)
 1600336489		          verilator_coverage: (next point on previous line)

 795636850		            begin
 1588628100		                if (read)
 792932937		                verilator_coverage: (next point on previous line)

 794314050		                  begin
 794314050		                      c_state  <= #1 ST_READ;
 794314050		                      core_cmd <= #1 `I2C_CMD_READ;
		                  end
		                else
 792932937		                  begin
 792932937		                      c_state  <= #1 ST_WRITE;
 792932937		                      core_cmd <= #1 `I2C_CMD_WRITE;
		                  end
	
 795636850		                ld <= #1 1'b1;
		            end
	
 3758252134		        ST_WRITE:
 1678039042		          if (core_ack)
 40763697		          verilator_coverage: (next point on previous line)

 3772826340		            if (cnt_done)
 1982755429		            verilator_coverage: (next point on previous line)

 1886413170		              begin
 1886413170		                  c_state  <= #1 ST_ACK;
 1886413170		                  core_cmd <= #1 `I2C_CMD_READ;
		              end
		            else
 1982755429		              begin
 1982755429		                  c_state  <= #1 ST_WRITE;       // stay in same state
 1982755429		                  core_cmd <= #1 `I2C_CMD_WRITE; // write next bit
 1982755429		                  shift    <= #1 1'b1;
		              end
	
 3200577214		        ST_READ:
 3403206350		          if (core_ack)
 1664248111		          verilator_coverage: (next point on previous line)

 1701603175		            begin
 80400066		                if (cnt_done)
 1869897590		                verilator_coverage: (next point on previous line)

 40200033		                  begin
 40200033		                      c_state  <= #1 ST_ACK;
 40200033		                      core_cmd <= #1 `I2C_CMD_WRITE;
		                  end
		                else
 1869897590		                  begin
 1869897590		                      c_state  <= #1 ST_READ;       // stay in same state
 1869897590		                      core_cmd <= #1 `I2C_CMD_READ; // read next bit
		                  end
	
 1701603175		                shift    <= #1 1'b1;
 1701603175		                core_txd <= #1 ack_in;
		            end
	
 3200444610		        ST_ACK:
 1691485406		          if (core_ack)
 1685544803		          verilator_coverage: (next point on previous line)

 845742703		            begin
 3770868974		               if (stop)
 24274288		               verilator_coverage: (next point on previous line)

 1885434487		                 begin
 1885434487		                     c_state  <= #1 ST_STOP;
 1885434487		                     core_cmd <= #1 `I2C_CMD_STOP;
		                 end
		               else
 24274288		                 begin
 24274288		                     c_state  <= #1 ST_IDLE;
 24274288		                     core_cmd <= #1 `I2C_CMD_NOP;
	
		                     // generate command acknowledge signal
 24274288		                     cmd_ack  <= #1 1'b1;
		                 end
	
		                 // assign ack_out output to bit_controller_rxd (contains last received bit)
 845742703		                 ack_out <= #1 core_rxd;
	
	//	                 // generate command acknowledge signal
	//	                 cmd_ack  <= #1 1'b1;
	
 845742703		                 core_txd <= #1 1'b1;
		             end
		           else
 1685544803		             core_txd <= #1 ack_in;
	
 007608		        ST_STOP:
 1919203038		          if (core_ack)
 000093		          verilator_coverage: (next point on previous line)

 959601519		            begin
 959601519		                c_state  <= #1 ST_IDLE;
 959601519		                core_cmd <= #1 `I2C_CMD_NOP;
	
		                // generate command acknowledge signal
 959601519		                cmd_ack  <= #1 1'b1;
		            end
	
		      endcase
		  end
	endmodule
	
