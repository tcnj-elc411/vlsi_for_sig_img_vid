`timescale 1ns / 1ps

module direct_form_1
#
(
    FILT_ORDER_N = 5
)
(
    input integer coeffs[FILT_ORDER_N-1:0],
    
    input integer din,     // data in
    output integer dout,   // data out
    
    input clk,
    input reset
);

integer din_delayed[FILT_ORDER_N-2:0];     // delay line
integer prods[FILT_ORDER_N-1:0];        // products of coeffs and delayed data
integer sums[FILT_ORDER_N-2:0];            // sum terms

z_minus_1 u_dm0( .din(din),            .dout(din_delayed[0]), .clk(clk), .reset(reset) );
//z_minus_1 u_dm1( .din(din_delayed[0]), .dout(din_delayed[1]), .clk(clk), .reset(reset) );
//z_minus_1 u_dm2( .din(din_delayed[1]), .dout(din_delayed[2]), .clk(clk), .reset(reset) );
//z_minus_1 u_dm3( .din(din_delayed[2]), .dout(din_delayed[3]), .clk(clk), .reset(reset) );

prod u_prod0( .din(din),            .coeff(coeffs[0]), .dout(prods[0]) );
//prod u_prod1( .din(din_delayed[0]), .coeff(coeffs[1]), .dout(prods[1]) );
//prod u_prod2( .din(din_delayed[1]), .coeff(coeffs[2]), .dout(prods[2]) );
//prod u_prod3( .din(din_delayed[2]), .coeff(coeffs[3]), .dout(prods[3]) );
prod u_prodNM1( .din(din_delayed[FILT_ORDER_N-2]), .coeff(coeffs[FILT_ORDER_N-1]), .dout(prods[FILT_ORDER_N-1]) );

//sum u_sum1( .x(prods[0]), .y(sums[1]), .z(sums[0]) );
//sum u_sum2( .x(prods[1]), .y(sums[2]), .z(sums[1]) );
//sum u_sum3( .x(prods[2]), .y(sums[3]), .z(sums[2]) );
sum u_sum4( .x(prods[FILT_ORDER_N-2]), .y(prods[FILT_ORDER_N-1]), .z(sums[FILT_ORDER_N-2]) );

genvar i;
generate
begin
    for (i=1; i<= FILT_ORDER_N-2; i=i+1) 
    begin
        sum u_sum (
            .x(prods[i-1]),
            .y(sums[i]),
            .z(sums[i-1])
        );
        prod u_prod (
            .din(din_delayed[i-1]),
            .coeff(coeffs[i]),
            .dout(prods[i])
        );
        z_minus_1 u_dm (
            .din(din_delayed[i-1]),
            .dout(din_delayed[i]),
            .clk(clk),
            .reset(reset)
        );
    end 
end
endgenerate

assign dout = sums[0];

endmodule

