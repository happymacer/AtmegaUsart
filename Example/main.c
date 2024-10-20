/*****************************************************************************
 * AtmegaUart.c
 *
 * Created: 24/08/2024 
 * Author : Happymacer
 *  
 * Version
 *	1 - works to transmit only
 *
 * For now, Im just sending data to the PC.  Receiving can come later - also simplifies and minimises code. 
 *
 ****************************************************************************/ 

//includes
#include <avr/io.h>
#include <stdint.h>
#include <string.h>
#include "AtmegaUartLib.h"

#define F_CPU 8000000UL

//main program
int main(void)
{	
	USART_Init(500000);

	char str[] = "Hello World";
	for (uint8_t i=0; i<strlen(str); i++)
	{
		USART_Transmit(str[i]);
	}
	USART_Transmit(13); //ASCII CR character
	USART_Transmit(10); //ASCII LF character

	for (uint8_t i=0; i<10; i++)
	{
		USART_Transmit(i+48); //48 in ascii is 0 -digits range from 48 to 57
	}
	USART_Transmit(13); 
	USART_Transmit(10); 
	USART_Transmit(7); //ASCII Bell character - windows does produce a tone
	
    while (1) 
    {
		
    }
}








