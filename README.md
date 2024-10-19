# AtmegaUsart
This is a transmit only Uart facility for ATMEGA328.  Its copied direct from the AVR ATMEGA328P reference manual and is simple and quick.

Baud rate of 500000 works

Its transmit only as I only need to send data to the PC.  I might add receive later.

To use it simply set the baud rate when initialising the Usart - check the baud rate vs clock freq in te Atmega reference manual.  Remember to set the clock speed in the main program. 

