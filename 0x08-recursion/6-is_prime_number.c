#include "main.h"
/**
 *  * primeno - get prime number
 *   * @num: integer
 *    * @i: integer
 *     * Return: prime no.
 *      */
int primeno(int i, int num)
{
		if (num == i)
					return (1);
			else if (num % i == 0)
						return (0);
				else
							return (primeno(i + 1, num));
}
/**
 *  * is_prime_number - checks prime number
 *   * @n: integer to check
 *    * Return:  returns 1 if the input integer is a prime number,
 *     * otherwise return 0.
 *      */
int is_prime_number(int n)
{
		int i = 2;

			if (n <= 1)
						return (0);
				if (n >= 2 && n <= 3)
							return (1);
					return (primeno(i, n));
}
