`timescale 1ns / 1ps

// Model of a 2-port RAM
//  1 Write Port
//      +
//  1 Read Port
//
// Number of storage elements = 2^(LOG2_DEPTH)
module ram_model_1w1r
#( parameter
    WORDLENGTH = 32,
    LOG2_DEPTH =  2
)
(
    input      [LOG2_DEPTH-1:0] IN_WADR,
    input                       IN_WEN,
    input      [WORDLENGTH-1:0] IN_WDAT,
    
    input      [LOG2_DEPTH-1:0] OUT_RADR,
    output     [WORDLENGTH-1:0] OUT_RDAT,
    
    input                       clk
);

reg [WORDLENGTH-1:0]        dbuf[(1<<LOG2_DEPTH)-1:0];    // storage array

assign OUT_RDAT = dbuf[OUT_RADR];      // retrieve read data

// num_in_buf
always @ (posedge clk)
begin
    if (IN_WEN)
        dbuf[IN_WADR]   <= IN_WDAT;             // store write data
end

endmodule
