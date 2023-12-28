#include "My_stm32f4_uart_lib.h"

int main() {
    // Initialize UART
    LIB_UART_Init(UART_ComType1, UART_Baudrate_115200);

    while (1) {
        // Your application logic here
        char data = 'A';
        LIB_UART_Write(data);
    }

    return 0;
}
