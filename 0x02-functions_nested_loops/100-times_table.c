#include "main.h"

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
		for (column = 0; column <= n; column++)
		{
			product = row * column;

			if (column != 0)
				print_comma_space();

			print_number(product);
		}

		_putchar('\n');
	}
}

/**
 * print_number - Prints a number with appropriate formatting.
 * @number: The number to print.
 */
void print_number(int number)
{
	if (number >= 100)
	{
		_putchar((number / 100) + '0');
		print_number(number % 100);
	}
	else if (number >= 10)
	{
		_putchar((number / 10) + '0');
		_putchar((number % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar((number % 10) + '0');
	}
}

/**
 * print_comma_space - Prints a comma and a space.
 */
void print_comma_space(void)
{
	_putchar(',');
	_putchar(' ');
}
