#include "main.h"

void fizz_buzz(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
            _putchar('F'), _putchar('i'), _putchar('z'), _putchar('z'), _putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
        else if (i % 3 == 0)
            _putchar('F'), _putchar('i'), _putchar('z'), _putchar('z');
        else if (i % 5 == 0)
            _putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
        else
        {
            int n = i;
            int count = 0;
            while (n != 0)
            {
                n /= 10;
                count++;
            }
            n = i;
            while (count != 0)
            {
                int divisor = 1;
                int j;
                for (j = 0; j < count - 1; j++)
                {
                    divisor *= 10;
                }
                n = n % divisor;
                _putchar(n / (divisor / 10) + '0');
                count--;
            }
        }

        if (i != 100)
            _putchar(' ');
        else
            _putchar('\n');
    }
}
