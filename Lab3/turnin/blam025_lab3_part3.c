#include <avr/io.h>
#include <stdio.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; 
	DDRC = 0xFF; PORTC = 0x00; 
	unsigned char tempA = 0x00; 
	unsigned cnt;
	unsigned char key;
	unsigned char seated;
	unsigned char belt;
while(1) {
	key = 0;
	seated = 0;
	belt = 0;
	PORTC = 0x00;
	tempA = PINA & 0x7F;
	cnt = 0;
	
	if ((tempA & 0x01)){ cnt += 1;}
	if ((tempA & 0x02)){ cnt += 2;}
	if ((tempA & 0x04)){ cnt += 4;}
	if ((tempA & 0x08)){ cnt += 8;}

	if ((tempA & 0x40) == 0x40){ belt = 1;}
	if ((tempA & 0x20) == 0x20){ seated = 1;}
	if ((tempA & 0x10) == 0x10){ key = 1;}

	if (cnt == 0){ PORTC = PORTC | 0x40; }
	if (cnt >= 1 && cnt <= 2) { PORTC = PORTC | 0x60; }
	if (cnt == 3 || cnt == 4) { PORTC = PORTC | 0x70; }
	if (cnt == 5 || cnt == 6) { PORTC = PORTC | 0x38; }
	if (cnt >= 7 && cnt <= 9) { PORTC = PORTC | 0x3C; }
	if (cnt >= 10 && cnt <= 12){ PORTC = PORTC | 0x3E; }
	if (cnt >= 13 && cnt <= 15){ PORTC = PORTC | 0x3F; }

	if (key && seated && !belt){ PORTC = PORTC | 0x80; }
		
	}
	return 0;
}

