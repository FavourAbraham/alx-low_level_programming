#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to print the times table for.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int row, column, product;

	for (row = 0; row <= n; row++)
	{
		_putchar('0');

		for (column = 1; column <= n; column++)
		{
			product = row * column;

			_putchar(',');
			_putchar(' ');

			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
