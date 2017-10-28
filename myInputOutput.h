#include <avr/io.h>

typedef _Bool           bool;
void pinMode(char port,int pinNo,int type);//type =1 means output and o means input

void digitalWrite(char port,int pinNo,int type);//type = 1 means high and 0 means low

int digitalRead(char port,int pinNo);

void pinMode(char port,int pinNo,int type) {
	int a = 0;
	switch(port) {
		case 'D'                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      :
			if(type == 1) {
				DDRD = DDRD | (1 << pinNo);
			}
			else {
				DDRD = DDRD & ~(1 << pinNo);
			}
			break;
		case 'B':
			if(type == 1) {
				DDRB = DDRB | (1 << pinNo);
			}
			else {
				DDRB = DDRB & ~(1 << pinNo);
			}
			break;
		case 'C':
			if(type == 1) {
				DDRC = DDRC | (1 << pinNo);
			}
			else {
				DDRC = DDRC & ~(1 << pinNo);
			}
			break;
	}
}

void digitalWrite(char port,int pinNo,int type) {
	switch(port) {
		case 'B':
			if(type == 1) {
				PORTB = PORTB | (1 << pinNo);
			}
			else {
				PORTB = PORTB & ~(1 << pinNo);
			}
			break;
		case 'C':
			if(type == 1) {
				PORTC = PORTC | (1 << pinNo);
			}
			else {
				PORTC = PORTC & ~(1 << pinNo);
			}
			break;
		case 'D':
			if(type == 1) {
				PORTD = PORTD | (1 << pinNo);
			}
			else {
				PORTD = PORTD & ~(1 << pinNo);
			}
			break;
	}
}

int digitalRead(char port,int pinNo) {
	int output = 1;
	switch(port) {
		case 'B':
			if(PINB & (1 << pinNo)){
				output = 1;
			}
			else {
				output = 0;
			}	
			break;
		case 'C':
			if(PINC & (1 << pinNo)){
				output = 1;
			}
			else {
				output = 0;
			}
			break;
		case 'D':
			if(PIND & (1 << pinNo)){
				output = 1;
			}
			else {
				output = 0;
			}
			break;
	}
	return output;
} 
