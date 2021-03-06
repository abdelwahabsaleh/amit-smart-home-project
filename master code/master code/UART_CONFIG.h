/*
* UART_CONFIG.h
*
* Created: 2/13/2021 9:10:53 PM
 * Author : Abdel Wahab
*/


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_

#include "CPU_CONFIGURATION.h"

#define FRQ      160000
#define BAUDRATE 96

typedef enum
{
	UART_NOK = 0,
	UART_OK = 1
}UART_Status;



#endif /* UART_CONFIG_H_ */