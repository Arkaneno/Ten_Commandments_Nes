
/*
A simple "Ten Commandments" example.
Set the screen background color and palette colors.
Then write a message to the nametable.
Finally, turn on the PPU to display video.
*/

#include "neslib.h"

// link the pattern table into CHR ROM
//#link "chr_generic.s"

// main function, run after console reset
void main(void) {

  // set palette colors
  pal_col(0,0x02);	// set screen to dark blue
  pal_col(1,0x14);	// fuchsia
  pal_col(2,0x20);	// grey
  pal_col(3,0x30);	// white

  // write text to name table
  vram_adr(NTADR_A(2,2));		// set address
vram_write("1.Thou shalt have no other ", 28);  // write bytes to video RAM
  vram_write("      gods before me            ", 32);  
  vram_write("                                ", 32);
  vram_write("    2.Thou shalt not make unto  ", 32);
  vram_write("      thee any graven image     ", 32);
  vram_write("                                ", 32);
  vram_write("    3.Thou shalt not take the   ", 32);
  vram_write("      name of the Lord thy God  ", 32);
  vram_write("      in vain                   ", 32);
  vram_write("                                ", 32);
  vram_write("    4.Remember the sabbath day, ", 32);
  vram_write("      to keep it holy           ", 32);
  vram_write("                                ", 32);
  vram_write("    5.Honor thy father and thy  ", 32);
  vram_write("      mother                    ", 32);
  vram_write("                                ", 32);
  vram_write("    6.Thou shalt not murder     ", 32);
  vram_write("                                ", 32);
  vram_write("    7.Thou shalt not commit     ", 32);
  vram_write("      adultery                  ", 32);
  vram_write("                                ", 32);
  vram_write("    8.Thou shalt not steal      ", 32);
  vram_write("                                ", 32);
  vram_write("    9.Thou shalt not bear false ", 32);
  vram_write("    witness against thy neighbor", 32);
  vram_write("                                ", 32);
  vram_write("    10.Thou shalt not covet     ", 32);
  
  // enable PPU rendering (turn on screen)
  ppu_on_all();

  // infinite loop
  while (1) ;
}
