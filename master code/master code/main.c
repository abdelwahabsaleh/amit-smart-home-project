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
	LCD_Init();
	LCD_WRITE_STR("WELCOME HOME");
	_delay_ms(1000);
	LCD_CLEAR();
	LCD_WRITE_STR("GOOD TO SEE YOU");
	SPI_SlaveSelect(0);
	
	 	while(1)
 		{
			// Uint8t data = UART_Receive();
			 
				switch(UART_Receive())
				 {
					 case '1':
					 SPI_Transmit('1');
					 LCD_CLEAR();
					 LCD_WRITE_STR("GREEN LED ON");
					 _delay_ms(500);
					 LCD_CLEAR();
					 LCD_WRITE_STR("BE HAPPY MAN");
					 break;
					 
					 
					 case '2':
					 SPI_Transmit('2');
					 LCD_CLEAR();
					 LCD_WRITE_STR("RED LED ON");
					 _delay_ms(500);
					 LCD_CLEAR();
					 LCD_WRITE_STR("HAVE A NICE TIME");
					 break;
					 
					 case '3':
					 SPI_Transmit('3');
					 LCD_CLEAR();
					 LCD_WRITE_STR("YELLOW LED ON");
					 _delay_ms(500);
					 LCD_CLEAR();
					 LCD_WRITE_STR("I LOVE YOU");
					 break;
					 
					 case '4':
					 SPI_Transmit('4');
					 LCD_CLEAR();
					 LCD_WRITE_STR("GREEN LED OFF");
					 _delay_ms(500);
					 LCD_CLEAR();
					 LCD_WRITE_STR("SYSTEM FALLED");
					 break;
					 
					 case '5':
					 SPI_Transmit('5');
					 LCD_CLEAR();
					 LCD_WRITE_STR("RED LED OFF");
					 _delay_ms(500);
					 LCD_CLEAR();
					 LCD_WRITE_STR("BE CAREFUL");
					 break;
					 
					 case '6':
					 SPI_Transmit('6');
					 LCD_CLEAR();
					 LCD_WRITE_STR("YELLOW LED OFF");
					 _delay_ms(500);
					 LCD_CLEAR();
					 LCD_WRITE_STR("HAPPY NOW?!!!:(");
					 break;
					 
					 default:
					 LCD_CLEAR();
					 LCD_WRITE_STR("WRONG CHOISE");
					 _delay_ms(1000);
					 LCD_CLEAR();
					 LCD_WRITE_STR("123 ON  L1 L2 L3");
					 LCD_WRITE_CMD(0xc0);
					 LCD_WRITE_STR("456 OFF L1 L2 L3");
				 }// END OF SWITCH(DATA)
		}//END OF MAIN WHILE LOOP
}// END OF THE MAIN