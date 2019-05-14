/*
 * GccApplication4.c
 *
 * Created: 09-May-19 6:47:32 PM
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
	DDRA=0X40;
	DDRA=0X10;
	DDRA=0X04;
	DDRA=0X01;
    while (1) 
    {
		PORTA=0X55;
	}
}

