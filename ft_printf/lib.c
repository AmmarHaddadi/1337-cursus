#include "lib.h"
#include <unistd.h>
#include <stdint.h>

void put_unsigned(unsigned int num) {
    if (num >= 10) {
        put_unsigned(num / 10);
    }
    ft_putchar_fd((num % 10) + '0', 1);
}


void print_address(void *add) {
    char *hex = "0123456789abcdef";
    write(1, "0x", 2);
    
    
}