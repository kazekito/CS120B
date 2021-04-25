/*	Author: blam025
 *  Partner(s) Name: Bao Lam Le
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <stdio.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif


enum SM_STATES{SM_st0, SM_st1, SM_st2, SM_st3, SM_st4, SM_st5, SM_st6, SM_init}SM_STATE;

void SM_Func(){
switch(SM_STATE){
	case SM_init:
	if (PINA == 0x00){
	SM_STATE = SM_st1;
	}
	if (PINA == 0x01 || PINA == 0x02){
	SM_STATE = SM_st1;
	}
	if (PINA == 0x03 || PINA == 0x04){
	SM_STATE = SM_st2;
	}
	if (PINA == 0x05 || PINA == 0x06){
	SM_STATE = SM_st3;
	}
	if (PINA >= 0x07 && PINA <= 0x09){
	SM_STATE = SM_st4;
	}
	if (PINA >= 0x0A && PINA <= 0x0C){
	SM_STATE = SM_st5;
	}
	if (PINA >= 0x0D && PINA <= 0x0F){
	SM_STATE = SM_st6;
	}
	break;
	case SM_st1:
	case SM_st2:
	case SM_st3:
	case SM_st4:
	case SM_st5:
	case SM_st6:
	default:
	break;
}

switch(SM_STATE){
	case SM_init:
	break;
	case SM_st0:
	PORTC = 0x40;
	SM_STATE = SM_init;
	break;
	case SM_st1:
	PORTC = 0x60;
	SM_STATE = SM_init;
	break;
	case SM_st2:
	PORTC = 0x70;
	SM_STATE = SM_init;
	break;
	case SM_st3:
	PORTC = 0x38;
	SM_STATE = SM_init;
	break;
	case SM_st4:
	PORTC = 0x3C;
	SM_STATE = SM_init;
	break;
	case SM_st5:
	PORTC = 0x3E;
	SM_STATE = SM_init;
	break;
	case SM_st6:
	PORTC = 0x3F;
	SM_STATE = SM_init;
	break;
	default:
	SM_STATE = SM_init;
	break;	
}	

}
int main(void) {
        DDRA: 0x00; PORTA: 0xFF;
        DDRC: 0xFF; PORTC: 0x00;
        SM_STATE = SM_init;
        while(1){
        SM_Func();
	}

return 0;
}
