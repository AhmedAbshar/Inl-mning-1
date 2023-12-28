#ifndef MY_STM32F4_UART_LIB_H
#define MY_STM32F4_UART_LIB_H

#include "My_stm32f4_uart_driver.h"

typedef enum {
    UART_ComType1,
    UART_ComType2,
    // Add more if needed
} UART_ComType;

typedef enum {
    UART_Baudrate_9600,
    UART_Baudrate_115200,
    // Add more if needed
} UART_BaudrateType;

void LIB_UART_Write(char c);
char LIB_UART_Read(void);
void LIB_UART_Init(UART_ComType comType, UART_BaudrateType baudrate);

#endif // MY_STM32F4_UART_LIB_H
