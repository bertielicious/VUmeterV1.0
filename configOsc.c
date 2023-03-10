#include "constants.h"
/*bit 7 SPLLEN: Software PLL Enable bit
If PLLEN in Configuration Words = 1:
SPLLEN bit is ignored. PLL is always enabled (subject to oscillator requirements)
If PLLEN in Configuration Words = 0:
1 = PLL is enabled
0 = PLL is disabled
bit 6 SPLLMULT: Software PLL Multiplier Select bit
1 = 3x PLL is enabled
0 = 4x PLL is enabled
bit 5-2 IRCF<3:0>: Internal Oscillator Frequency Select bits
1111 = 16 MHz or 48 MHz HF (see Section 5.2.2.1 ?HFINTOSC?)
1110 = 8 MHz or 24 MHz HF (3x PLL) or 32 MHz HF (4x PLL) (see Section 5.2.2.1 ?HFINTOSC?)
1101 = 4MHz
1100 = 2MHz
1011 = 1MHz
1010 = 500 kHz(1)
1001 = 250 kHz(1)
1000 = 125 kHz(1)
0111 = 500 kHz (default upon Reset)
0110 = 250 kHz
0101 = 125 kHz
0100 = 62.5 kHz
001x = 31.25 kHz(1)
000x = 31 kHz LF
bit 1-0 SCS<1:0>: System Clock Select bits
1x = Internal oscillator block
01 = Secondary oscillator
00 = Clock determined by FOSC<2:0> in Configuration Words.
Note 1: Duplicate frequency derived from HFINTOSC.*/
void configOsc(void)
{
    /*select frquency of internal osc freqency to be 16MHz*/
    OSCCONbits.IRCF3 = HI;
    OSCCONbits.IRCF2 = HI;
    OSCCONbits.IRCF1 = HI;
    OSCCONbits.IRCF0 = HI;
    
    //select internal oscillator
    OSCCONbits.SCS1 = HI;
    OSCCONbits.SCS0 = LO;
    
   
}
