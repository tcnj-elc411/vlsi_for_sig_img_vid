import numpy as np
import random

INT32_MAX       = ((1 << 31) - 1)
INT32_MIN       = (-(1 << 31))
SHIFT_16_ROUND  = (1 << 15)

NUM_VECS = 1000

fd = open( "dot_box_stim_resp_1", "w" )

fd.write( "// X0 X1 X2 X3 X4 X5 X6 X7  Y0 Y1 Y2 Y3 Y4 Y5 Y6 Y7  DAT     DAT16\n")

test_val = 0

out_arr = np.zeros( (4), np.int64 )
in_vals = np.zeros( (4), np.int64 )

IN_X = np.zeros( [8], 'int64' )
IN_Y = np.zeros( [8], 'int64' )

def twos_comp( val, bits ):
    if (val >= 0):
        return val
    else:
        return (1 << bits) + val

for i in range(0x10000):
    for idx in range (8):
        IN_X[idx] = random.randrange(-(1 << 15), (1 << 15));
        fd.write( "%04X " % twos_comp(IN_X[idx],16) )
    
    for idx in range (8):
        IN_Y[idx] = random.randrange(-(1 << 15), (1 << 15));
        fd.write( "%04X " % twos_comp(IN_Y[idx],16) )

    sop = 0
    for idx in range (8):                    
        sop += (IN_X[idx] * IN_Y[idx])
    
    if (sop >= INT32_MAX):
        sop = INT32_MAX
    if (sop <= INT32_MIN):
        sop = INT32_MIN
    fd.write( "%08X " % twos_comp(sop, 32) );

    sop_round = sop + SHIFT_16_ROUND
    if (sop_round >= INT32_MAX):
        sop_round = INT32_MAX
    if (sop_round <= INT32_MIN):
        sop_round = INT32_MIN
    sop_round = sop_round >> 16
    
    fd.write( "%04X " % twos_comp(sop_round, 16) );

    fd.write( "\n" );

fd.close()

