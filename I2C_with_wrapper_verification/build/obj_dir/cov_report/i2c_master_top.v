	// verilator_coverage annotation
	/////////////////////////////////////////////////////////////////////
	////                                                             ////
	////  WISHBONE revB.2 compliant I2C Master controller Top-level  ////
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
	//  $Id: i2c_master_top.v,v 1.12 2009-01-19 20:29:26 rherveille Exp $
	//
	//  $Date: 2009-01-19 20:29:26 $
	//  $Revision: 1.12 $
	//  $Author: rherveille $
	//  $Locker:  $
	//  $State: Exp $
	//
	// Change History:
	//               Revision 1.11  2005/02/27 09:26:24  rherveille
	//               Fixed register overwrite issue.
	//               Removed full_case pragma, replaced it by a default statement.
	//
	//               Revision 1.10  2003/09/01 10:34:38  rherveille
	//               Fix a blocking vs. non-blocking error in the wb_dat output mux.
	//
	//               Revision 1.9  2003/01/09 16:44:45  rherveille
	//               Fixed a bug in the Command Register declaration.
	//
	//               Revision 1.8  2002/12/26 16:05:12  rherveille
	//               Small code simplifications
	//
	//               Revision 1.7  2002/12/26 15:02:32  rherveille
	//               Core is now a Multimaster I2C controller
	//
	//               Revision 1.6  2002/11/30 22:24:40  rherveille
	//               Cleaned up code
	//
	//               Revision 1.5  2001/11/10 10:52:55  rherveille
	//               Changed PRER reset value from 0x0000 to 0xffff, conform specs.
	//
	
	// synopsys translate_off
	`include "timescale.v"
	// synopsys translate_on
	
	`include "i2c_master_defines.v"
	
	module i2c_master_top(
		wb_clk_i, wb_rst_i, arst_i, wb_adr_i, wb_dat_i, wb_dat_o,
		wb_we_i, wb_stb_i, wb_cyc_i, wb_ack_o, wb_inta_o,
		scl_pad_i, scl_pad_o, scl_padoen_o, sda_pad_i, sda_pad_o, sda_padoen_o );
	
		// parameters
		parameter ARST_LVL = 1'b0; // asynchronous reset level
	
		//
		// inputs & outputs
		//
	
		// wishbone signals
 1600336489		input        wb_clk_i;     // master clock input
 2002739831		input        wb_rst_i;     // synchronous active high reset
 1600336489		input        arst_i;       // asynchronous reset
 2758909285		input  [2:0] wb_adr_i;     // lower address bits
 3185862998		input  [7:0] wb_dat_i;     // databus input
 1684631224		output [7:0] wb_dat_o;     // databus output
 1982755429		input        wb_we_i;      // write enable input
 1886413170		input        wb_stb_i;     // stobe/core select signal
 1886413170		input        wb_cyc_i;     // valid bus cycle input
 777015124		output       wb_ack_o;     // bus cycle acknowledge output
%000000		output       wb_inta_o;    // interrupt request signal output
	
		reg [7:0] wb_dat_o;
		reg wb_ack_o;
		reg wb_inta_o;
	
		// I2C signals
		// i2c clock line
%000000		input  scl_pad_i;       // SCL-line input
 1879126067		output scl_pad_o;       // SCL-line output (always 1'b0)
 40200033		output scl_padoen_o;    // SCL-line output enable (active low)
	
		// i2c data line
 1266513248		input  sda_pad_i;       // SDA-line input
 023799		output sda_pad_o;       // SDA-line output (always 1'b0)
 000018		output sda_padoen_o;    // SDA-line output enable (active low)
	
	
		//
		// variable declarations
		//
	
		// registers
 19083967877		reg  [15:0] prer; // clock prescale register
 10239778682		reg  [ 7:0] ctr;  // control register
 10231802391		reg  [ 7:0] txr;  // transmit register
 000338		wire [ 7:0] rxr;  // receive register
 2533074830		reg  [ 7:0] cr;   // command register
 3185863629		wire [ 7:0] sr;   // status register
	
		// done signal: command completed, clear command register
 000018		wire done;
	
		// core enable signal
%000000		wire core_en;
 000018		wire ien;
	
		// status register signals
%000000		wire irxack;
%000002		reg  rxack;       // received aknowledge from slave
 000029		reg  tip;         // transfer in progress
 1227843944		reg  irq_flag;    // interrupt pending flag
%000000		wire i2c_busy;    // bus busy (start signal detected)
 000033		wire i2c_al;      // i2c bus arbitration lost
%000000		reg  al;          // status register arbitration lost bit
	
		//
		// module body
		//
	
		// generate internal reset
 777015124		wire rst_i = arst_i ^ ARST_LVL;
	
		// generate wishbone signals
 1600336489		wire wb_wacc = wb_we_i & wb_ack_o;
	
		// generate acknowledge output signal
 4005479662		always @(posedge wb_clk_i)
 2002739831		  wb_ack_o <= #1 wb_cyc_i & wb_stb_i & ~wb_ack_o; // because timing is always honored
	
		// assign DAT_O
 3403341520		always @(posedge wb_clk_i)
 1701670760		  begin
 1701670760	  	    case (wb_adr_i) // synopsys parallel_case
 3772826340	    		3'b000: wb_dat_o <= #1 prer[7:0];
 3758154954	    		3'b001: wb_dat_o <= #1 prer[15:8];
 14994144	    		3'b010: wb_dat_o <= #1 ctr;
 000258	    		3'b011: wb_dat_o <= #1 rxr; // write is transmit register (txr)
%000000	    		3'b100: wb_dat_o <= #1 sr;  // write is command register (cr)
 1577372674	    		default: wb_dat_o <= #1 8'h00;
	  	    endcase
		  end
	
		// generate registers
 3965510858		always @(posedge wb_clk_i or negedge rst_i)
 3772826340		  if (!rst_i)
 1886413170		    begin
 1886413170		        prer <= #1 16'hffff;
 1886413170		        ctr  <= #1  8'h0;
 1886413170		        txr  <= #1  8'h0;
		    end
 4005479662		  else if (wb_rst_i)
 2002739831		    begin
 2002739831		        prer <= #1 16'hffff;
 2002739831		        ctr  <= #1  8'h0;
 2002739831		        txr  <= #1  8'h0;
		    end
		  else
 1591273700		    if (wb_wacc)
 1600336489		    verilator_coverage: (next point on previous line)

 795636850		      case (wb_adr_i) // synopsys parallel_case
 3838895710		         3'b000 : prer [ 7:0] <= #1 wb_dat_i;
 3369262290		         3'b001 : prer [15:8] <= #1 wb_dat_i;
 2455687888		         3'b010 : ctr         <= #1 wb_dat_i;
 1588628100		         3'b011 : txr         <= #1 wb_dat_i;
 1585865874		         default: ;
		      endcase
	
		// generate command register (special case)
 3770868974		always @(posedge wb_clk_i or negedge rst_i)
 3200577214		  if (!rst_i)
 1600288607		    cr <= #1 8'h0;
 3328496222		  else if (wb_rst_i)
 1664248111		    cr <= #1 8'h0;
 3739795180		  else if (wb_wacc)
 1701603175		  verilator_coverage: (next point on previous line)

 1869897590		    begin
 1678039042		        if (core_en & (wb_adr_i == 3'b100) )
 40763697		        verilator_coverage: (next point on previous line)

 839019521		          cr <= #1 wb_dat_i;
		    end
		  else
 1701603175		    begin
 3758252134		        if (done | i2c_al)
 40200033		        verilator_coverage: (next point on previous line)

 1879126067		          cr[7:4] <= #1 4'h0;           // clear command bits when done
		                                        // or when aribitration lost
 1701603175		        cr[2:1] <= #1 2'b0;             // reserved bits
 1701603175		        cr[0]   <= #1 1'b0;             // clear IRQ_ACK bit
		    end
	
	
		// decode command register
 24274288		wire sta  = cr[7];
 845742703		wire sto  = cr[6];
 1685544803		wire rd   = cr[5];
 1600222305		wire wr   = cr[4];
 942824303		wire ack  = cr[3];
 000093		wire iack = cr[0];
	
		// decode control register
		assign core_en = ctr[7];
		assign ien = ctr[6];
	
		// hookup byte controller block
		i2c_master_byte_ctrl byte_controller (
			.clk      ( wb_clk_i     ),
			.rst      ( wb_rst_i     ),
			.nReset   ( rst_i        ),
			.ena      ( core_en      ),
			.clk_cnt  ( prer         ),
			.start    ( sta          ),
			.stop     ( sto          ),
			.read     ( rd           ),
			.write    ( wr           ),
			.ack_in   ( ack          ),
			.din      ( txr          ),
			.cmd_ack  ( done         ),
			.ack_out  ( irxack       ),
			.dout     ( rxr          ),
			.i2c_busy ( i2c_busy     ),
			.i2c_al   ( i2c_al       ),
			.scl_i    ( scl_pad_i    ),
			.scl_o    ( scl_pad_o    ),
			.scl_oen  ( scl_padoen_o ),
			.sda_i    ( sda_pad_i    ),
			.sda_o    ( sda_pad_o    ),
			.sda_oen  ( sda_padoen_o )
		);
	
		// status register block + interrupt request signal
 000226		always @(posedge wb_clk_i or negedge rst_i)
 000020		  if (!rst_i)
 000010		    begin
 000010		        al       <= #1 1'b0;
 000010		        rxack    <= #1 1'b0;
 000010		        tip      <= #1 1'b0;
 000010		        irq_flag <= #1 1'b0;
		    end
%000000		  else if (wb_rst_i)
 131614		  verilator_coverage: (next point on previous line)

%000000		    begin
%000000		        al       <= #1 1'b0;
%000000		        rxack    <= #1 1'b0;
%000000		        tip      <= #1 1'b0;
%000000		        irq_flag <= #1 1'b0;
		    end
		  else
 131614		    begin
 131614		        al       <= #1 i2c_al | (al & ~sta);
 131614		        rxack    <= #1 irxack;
 131614		        tip      <= #1 (rd | wr);
 131614		        irq_flag <= #1 (done | i2c_al | irq_flag) & ~iack; // interrupt request flag is always generated
		    end
	
		// generate interrupt request signals
 2533774304		always @(posedge wb_clk_i or negedge rst_i)
%000010		  if (!rst_i)
%000005		    wb_inta_o <= #1 1'b0;
%000000		  else if (wb_rst_i)
%000000		  verilator_coverage: (next point on previous line)

%000000		    wb_inta_o <= #1 1'b0;
		  else
%000000		    wb_inta_o <= #1 irq_flag && ien; // interrupt signal is only generated when IEN (interrupt enable bit is set)
	
		// assign status register bits
		assign sr[7]   = rxack;
		assign sr[6]   = i2c_busy;
		assign sr[5]   = al;
		assign sr[4:2] = 3'h0; // reserved
		assign sr[1]   = tip;
		assign sr[0]   = irq_flag;
	
	endmodule
	
