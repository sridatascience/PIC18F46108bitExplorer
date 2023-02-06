/* COMPILER DIRECTIVES FOR CHIP CONFIGURATION BITS*/
#include<xc.h>

#pragma config WDT = OFF         // Watchdog Timer Enable bit (WDT enabled)
#pragma config OSC = HS

void delayzz(void) 
{	int i, j;
	for(i=0;i<5000;i++)
     {
	for(j=0;j<2;j++) 

             {       /*  Timer */   }}}

int main(void) 
{
	TRISB = 0xF0 ; // PORT B Setting: Set all the pins in port B to Output. 
  while(1)    
		{
                	
		LATBbits.LATB0 = 1;   // RB-0 to High   
		LATBbits.LATB1 = 1;   // RB-1 to High 

		delayzz();
		
		LATBbits.LATB0 = 0;    // RB-0 to LOW
		LATBbits.LATB1 = 0;    // RB-1 to LOW
        
		delayzz();
	     }
return 1;
}
/* THE END */
