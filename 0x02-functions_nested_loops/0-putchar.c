#include <stdio.h>

int main() {
    int i;
    char str[] = "_putchar\n";
    
    for (i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    
    return 0;
}
