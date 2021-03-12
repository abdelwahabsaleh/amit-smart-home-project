/*
 * master code.c
 *
 * Created: 2/27/2021 8:24:02 PM
 * Author : Abdel Wahab
 */ 


#include "CPU_CONFIGURATION.h"



int main(void)
{
	
	UART_Init();
	SPI_Init();
	SPI_SlaveSelect(0);
	
	 	while(1)
 		{
			// Uint8t data = UART_Receive();
			 
				switch(UART_Receive())
				 {
					 case '1':
					 SPI_Transmit('1');
					 break;
					 
					 
					 case '2':
					 SPI_Transmit('2');
					 break;
					 
					 case '3':
					 SPI_Transmit('3');
					 break;
					 
					 case '4':
					 SPI_Transmit('4');
					 break;
					 
					 case '5':
					 SPI_Transmit('5');
					 break;
					 
					 case '6':
					 SPI_Transmit('6');
					 break;
					 
//					 default:
//					 LCD_CLEAR();
//					 LCD_WRITE_STR("WRONG CHOISE");
//					 _delay_ms(1000);
//					 LCD_CLEAR();
//					 LCD_WRITE_STR("123 ON  L1 L2 L3");
//					 LCD_WRITE_CMD(0xc0);
//					 LCD_WRITE_STR("456 OFF L1 L2 L3");
				 }// END OF SWITCH(DATA)
		}//END OF MAIN WHILE LOOP
}// END OF THE MAIN