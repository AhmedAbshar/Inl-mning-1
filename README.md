STM32F4 UART Library
This repository contains a simple UART library for STM32F4 microcontrollers. The library is designed to provide an easy interface for UART communication.

Files
1. My_stm32f4_uart_driver.h
This file defines the output pins and USART peripherals. It also contains a structure for USART registers.

2. My_stm32f4_uart_lib.h
This file inherits from My_stm32f4_uart_driver.h and defines two enumerations: UART_ComType and UART_BaudrateType. Additionally, it declares three functions:

LIB_UART_Write(char c): Writes a character to the UART.
LIB_UART_Read(): Reads a character from the UART.
LIB_UART_Init(UART_ComType comType, UART_BaudrateType baudrate): Initializes the UART with specified communication type and baud rate.
3. My_stm32f4_uart_lib.c
This file contains the implementation of the functions declared in My_stm32f4_uart_lib.h. It also defines variables needed for UART configuration.

4. Main.c
The Main.c file contains an example of how to use the UART library. It initializes UART and uses a while-loop to continuously write a character to the UART.

Getting Started
To use this library in your STM32F4 project, follow these steps:

Copy the My_stm32f4_uart_driver.h and My_stm32f4_uart_lib.h files into your project.
Implement the UART functionality in your STM32F4 microcontroller according to the definitions in My_stm32f4_uart_driver.h.
Copy the My_stm32f4_uart_lib.c file into your project and make sure to configure it for your specific microcontroller.
Include My_stm32f4_uart_lib.h in your main application file (e.g., Main.c) and use the provided functions to interact with the UART.
Example Usage
