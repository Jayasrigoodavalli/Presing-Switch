/*
 * GccApplication2.c
 *
 * Created: 09-May-19 4:02:55 PM
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
	DDRA=0XFF;
    while (1) 
    {
		PORTA=0XFF;
		_delay_ms(100);
		PORTA=0X00;
		_delay_ms(100);
    }
}

