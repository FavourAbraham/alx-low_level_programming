#include "main.h"

/**
 * _putchar - Custom implementation of putchar
 * @c: The character to be printed
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * is_prime - Check if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime(long int n)
{
    if (n <= 1)
        return 0;

    if (n <= 3)
        return 1;

    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (long int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }

    return 1;
}

/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the given number
 */
int largest_prime_factor(long int n)
{
    long int largest_factor = 2;

    while (n > largest_factor)
    {
        if (n % largest_factor == 0)
        {
            if (is_prime(n / largest_factor))
                return n / largest_factor;
        }

        largest_factor++;
    }

    return largest_factor;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    long int num = 612852475143;
    int largest_prime;

    largest_prime = largest_prime_factor(num);
    _putchar(largest_prime + '0');
    _putchar('\n');

    return 0;
}
