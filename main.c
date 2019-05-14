/*
 * GccApplication7.c
 *
 * Created: 10-May-19 11:20:00 AM
 * Author : JAYASREE
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRC=0X01;
	DDRD=0X00;
	
    while (1) 
    {
		if((PIND & (1<<PD0)) ==0) //IF Switch is pressed
		{
			PORTC=(1<<PC0); //Turn ON LED
			_delay_ms(2000);
			PORTC=(0<<PC0); //Turn OFF LED
		}
    }
}

