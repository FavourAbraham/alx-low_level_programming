#include "main.h"
#include <stdio.h>
#include <math.h>

int main(void)
{
    long number = 612852475143;
    int result = largest_prime_factor(number);
    _putchar(result + '0'); /* Convert the largest prime factor to character and print it */
    _putchar('\n'); /* Print a new line */
    return (0);
}

/* Helper function to check if a number is prime */
int is_prime(long n)
{
    if (n <= 1)
        return (0);

    for (long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return (0);
    }
    return (1);
}

/* Function to find the largest prime factor of a given number */
int largest_prime_factor(long n)
{
    long largest_factor = -1;

    /* Remove all factors of 2 */
    while (n % 2 == 0)
    {
        largest_factor = 2;
        n /= 2;
    }

    /* Now n must be odd, so we can skip even numbers */
    for (long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            largest_factor = i;
            n /= i;
        }
    }

    /* If n is still greater than 2, it must be the largest prime factor */
    if (n > 2)
        largest_factor = n;

    return largest_factor;
}
