/*
 * slave.c
 *
 * Created: 2/28/2021 1:13:43 PM
 * Author : Abdel Wahab
 */ 

#include "CPU_CONFIGURATION.h"
#include "SPI.h"


int main(void)
{
	LED0_Init();
	LED1_Init();	
	LED2_Init();	
	SPI_Init();
	
	SPI_Receive();
	
//	Uint8t data = SPI_Receive();
	
    /* Replace with your application code */
    
	while (1) 
    {
		
		switch(SPI_Receive())
		{
			case '1':
			LED0_ON();
			break;
			
			case '2':
			LED1_ON();
			break;
			
			case '3':
			LED2_ON();
			break;
			
			case '4':
			LED0_OFF();
			break;
			
			case '5':
			LED1_OFF();
			break;
			
			case '6':
			LED2_OFF();
			break;
		}
    }
}

