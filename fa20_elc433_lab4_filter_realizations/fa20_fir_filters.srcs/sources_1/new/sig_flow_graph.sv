`timescale 1ns / 1ps

// Summing junction
module sum
(
    input integer x,
    input integer y,
    output integer z
);
assign z = x + y;
endmodule

// Gain/multiplying block
module prod
(
    input integer coeff,   // coeff
    input integer din,     // data
    output integer dout
);
assign dout = coeff * din;
endmodule

// Unit delay block
module z_minus_1
(
    input integer din,
    output integer dout,
    
    input clk,
    input reset
);
always @ (posedge clk)
if (reset)
    dout <= 0;
else
    dout <= din;
endmodule
