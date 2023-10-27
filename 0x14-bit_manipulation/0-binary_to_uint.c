#include <stddef.h>
#include "main.h"

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    unsigned int result = 0;
    int power = 1;

    for (int i = 0; b[i] != '\0'; i++) {
        char currentChar = b[i];

        if (currentChar == '0') {        
 	} else if (currentChar == '1') {
            result += (1 << (power - 1));
        } else {
            return 0;
        }

        power++;
    }

    return result;
}

