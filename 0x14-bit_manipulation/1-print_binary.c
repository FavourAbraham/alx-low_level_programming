#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n) {
    if (n == 0) {
        putchar('0');
        return;
    }

    int i;
    int leadingZero = 1;

    for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--) {
        unsigned long int mask = 1UL << i;

        if (n & mask) {
            putchar('1');
            leadingZero = 0;
        } else if (!leadingZero) {
            putchar('0');
        }
    }
}

