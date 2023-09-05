/*
 * byggernNode1.c
 *
 * Created: 29.08.2023 08:43:04
 * Author : linuse
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include "UARTinterface.h"
#include "RAM.h"

#define FOSC 4915200// Clock Speed
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD-1


int main(void)
{
	
    /* Replace with your application code */
	/*DDRA = 0x80;
    while (1) 
    {
		
		PORTA |= (1 << PC0);
		_delay_ms(500);
		
		PORTA &= ~(1 << PC0);
		_delay_ms(500);
    }*/
	
	USART_Init(MYUBRR);
	xmem_init();
	
	//unsigned char ch = 'a';
	//unsigned char data = '0b1111111';
	sram_test();
	//latch_test();
		
/*
	printf(" HELLO EARTH ");
	printf("%c test ", data);
	while (1)
	{
		ch = USART_Receive();
		USART_Transmit(ch);
		_delay_ms(10);
		printf("%c test ", data);
		xmem_write(data, 0x1FFF);
	}*/
	
}

