`timescale 1ns / 1ps

// Needed for sin() function
package math_pkg;
  //import dpi task      C Name = SV function name
  import "DPI-C" pure function real sin (input real rTheta);
endpackage : math_pkg

`define M (4)

`define STEP_STIM (n >= 0)
`define IMPL_STIM (n == 0)
`define RAMP_STIM (n)
`define CHIRP_STIM ($rtoi(sin(6.2832*n*n/4000.0)*1023.0))

// Select one of the STIM types above, and insert into the definition of STIM
`define STIM (`CHIRP_STIM)

module tb_digital_filter();

// Needed for sin() function
import math_pkg::*;

////////////////////////////////////////////////////////////////////////    
// Clock & reset generator
//
reg     clk;
reg     rst_ = 0;
wire    reset;

integer reset_count         = 0;

`define NUM_RESET_CYCLES    (10)
`define MAX_CYCLES          (1000)

assign reset = ~rst_;

initial
begin
    clk = 0;
    while (1)
        #5 clk = ~clk;  // toggle clk each 5 ns (100 MHz clock frequency)
end

always @ (posedge clk)
begin
    reset_count <= reset_count + 1;     // always use non-blocking assignment, '<=',
                                        // in sequential processes
    if (reset_count == `NUM_RESET_CYCLES)
        rst_ <= 1;
        
    if (reset_count == `MAX_CYCLES)
        $finish;
end
////////////////////////////////////////////////////////////////////////    

        
////////////////////////////////////////////////////////////////////////    
// Stimulus generator
//
integer coeffs[`M:0] = '{-1, 2, 5, 2, -1};  // rando lowpass filter impulse response

integer din;
integer n;                      // n is the discrete-time index

assign din = reset ? 0 : `STIM; // `STIM is a macro that can produce delta, step, ramp or chirp signals

always @ (posedge clk)
begin
    if (reset)
    begin
        n <= 0;
    end
    else
    begin
        n <= n + 1;
    end
end

// Instantiate the Direct Form I realization of the DUT
integer dout;
direct_form_1
#
(
    .M(`M)      // Filter order (one less than the total number of FIR coeffs)
)
u_df1
(
    .coeffs(coeffs),
    
    .din(din),     // data in
    .dout(dout),   // data out
    
    .clk(clk),
    .reset(reset)
);


endmodule
