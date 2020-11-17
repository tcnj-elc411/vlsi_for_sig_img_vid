`timescale 1ns / 1ps

// FIFO with Selvaggi-style input and output ports
// Width and depth are parameterized
// Depth = 2^LOG2_DEPTH
// Width = WORDLENGTH

module sp_fifo
#( parameter
    WORDLENGTH = 32,
    LOG2_DEPTH =  2
)
(
    input                   IN_RTS,
    output                  IN_RTR,
    input [WORDLENGTH-1:0]  IN_DAT,
    
    output                  OUT_RTS,
    input                   OUT_RTR,
    output [WORDLENGTH-1:0] OUT_DAT,
    
    input                   clk,
    input                   reset
);

reg [LOG2_DEPTH-1:0]        rptr;
reg [LOG2_DEPTH-1:0]        wptr;
reg [LOG2_DEPTH:0]          num_in_buf;

wire IN_XFC;
wire OUT_XFC;

assign  IN_XFC =  IN_RTR &  IN_RTS;
assign OUT_XFC = OUT_RTR & OUT_RTS;

assign  IN_RTR = (num_in_buf < (1<<LOG2_DEPTH)) & ~reset;
assign OUT_RTS = (num_in_buf > 0) & ~reset;

// num_in_buf
always @ (posedge clk)
begin
    if (reset)
    begin
        num_in_buf = 0;
        wptr       = 0;
        rptr       = 0;
    end
    else
    begin
        if (IN_XFC & ~OUT_XFC)
            num_in_buf <= num_in_buf + 1;
        else if (~IN_XFC & OUT_XFC)
            num_in_buf <= num_in_buf - 1;
            
        if (IN_XFC)
        begin
            if (LOG2_DEPTH == 0)
                wptr <= 0;
            else
                wptr <= (wptr + 1);     // Require a power-of-2 FIFO depth, so will wrap back to 0
        end
        if (OUT_XFC)
            if (LOG2_DEPTH == 0)
                rptr <= 0;
            else
                rptr <= (rptr + 1);
    end
end

ram_model_1w1r 
#(  .WORDLENGTH(WORDLENGTH),
    .LOG2_DEPTH(LOG2_DEPTH)
)
    u_ram_model_1w1r(
        .IN_WADR (wptr),
        .IN_WEN  (IN_XFC),
        .IN_WDAT (IN_DAT),
        .OUT_RADR(rptr),
        .OUT_RDAT(OUT_DAT),
        .clk     (clk)
   
);
endmodule
