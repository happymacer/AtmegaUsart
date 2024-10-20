# AtmegaUsart
This is a transmit only Uart facility for ATMEGA328.  It is copied direct from the AVR ATMEGA328P reference manual and is so small, simple and quick. It is transmit only as I only need to send data to the PC.

Baud rate of 500000 works.

Ive only included the relevant library files, not the Microchip/ATMEL studio setup, so you need to set that up first with your code.  

To use it add the 2 library files to your code, and call the USART_init function to set the baud rate when initialising the Usart - check the baud rate vs clock freq in the Atmega reference manual.  Remember to set the clock speed in the main program, although it defaults to 8MHz. 

Have a look at the example code if uncertain.  
