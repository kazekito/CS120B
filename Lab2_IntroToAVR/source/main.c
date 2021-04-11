/*	Author: blam025
 *  Partner(s) Name: Bao Lam Le
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0x00; PORTC = 0xFF;
	DDRD = 0xFF; PORTD = 0x00; 
	unsigned char tempC = 0x00; 
	unsigned char tempA = 0x00;
	unsigned char tempB = 0x00;
	unsigned char tempD = 0x00;
	unsigned char cnt; 
while(1) {
	tempA = PINA & 0xFF;
	tempB = PINB & 0xFF;
	tempC = PINC & 0xFF;
	PORTD = 0x00;
	if ((tempA + tempB + tempC) > 140){
		PORTD = (PORTD & 0x03) | 0x01;
	}
	if ((tempA - tempC) > 80 || (tempC - tempA) > 80){
		PORTD = (PORTD & 0x03) | 0x02;
	}

	PORTD = (((tempA + tempB + tempC) >> 2) & 0xFC)   | (PORTD & 0x03);
	
}
	return 0;
}

