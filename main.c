#include "msp.h"

/**
 * main.c
 */

void main(void)
{
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;

    P1->DIR |= BIT0; //Bit0 = 0001, set DIR to 0001, DIR = output

    while(1){
        int i;

        for(i = 0; i < 150000; i++); //LED on delay
            P1->OUT |= BIT0; //P1.0 high, LED on

        for(i = 0; i < 150000; i++);//LED off delay
            P1->OUT &= ~BIT0; //P1.0 low, LED off
    }


}

