// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
// Date        : Wed Jul 22 22:13:25 2020
// Host        : ENGINEER5ZGTRN2 running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               c:/Users/pearlstl/Documents/Vivado/fa20_i2s/fa20_i2s.srcs/sources_1/ip/xadc_wiz_0/xadc_wiz_0_stub.v
// Design      : xadc_wiz_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
module xadc_wiz_0(convst_in, daddr_in, dclk_in, den_in, di_in, 
  dwe_in, reset_in, vauxp3, vauxn3, busy_out, channel_out, do_out, drdy_out, eoc_out, eos_out, 
  alarm_out, vp_in, vn_in)
/* synthesis syn_black_box black_box_pad_pin="convst_in,daddr_in[6:0],dclk_in,den_in,di_in[15:0],dwe_in,reset_in,vauxp3,vauxn3,busy_out,channel_out[4:0],do_out[15:0],drdy_out,eoc_out,eos_out,alarm_out,vp_in,vn_in" */;
  input convst_in;
  input [6:0]daddr_in;
  input dclk_in;
  input den_in;
  input [15:0]di_in;
  input dwe_in;
  input reset_in;
  input vauxp3;
  input vauxn3;
  output busy_out;
  output [4:0]channel_out;
  output [15:0]do_out;
  output drdy_out;
  output eoc_out;
  output eos_out;
  output alarm_out;
  input vp_in;
  input vn_in;
endmodule
