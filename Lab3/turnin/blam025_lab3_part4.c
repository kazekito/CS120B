#include <avr/io.h>
#include <stdio.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTC = 0x00;
	DDRC = 0xFF; PORTC = 0x00; 
	unsigned char tempA = 0x00; 
while(1) {
	PORTB = 0x00;
	PORTC = 0x00;
	tempA = PINA & 0xFF;
	
	PORTB = (tempA & 0xF0) >> 4;
	PORTC = (tempA & 0x0F) << 4;	
		
	}
	return 0;
}

