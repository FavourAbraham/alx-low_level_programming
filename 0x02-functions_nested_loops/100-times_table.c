#include "main.h"

/**
 * print_number - Prints a number.
 * @n: The number to be printed.
 */
void print_number(int n)
{
	if (n >= 10)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to print the times table for.
 */
void print_times_table(int n)
{
	int row, column, product;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		_putchar('0');

		for (column = 1; column <= n; column++)
		{
			_putchar(',');
			_putchar(' ');

			product = row * column;

			if (product < 10)
				_putchar(' ');
			
			print_number(product);
		}

		_putchar('\n');
	}
}
