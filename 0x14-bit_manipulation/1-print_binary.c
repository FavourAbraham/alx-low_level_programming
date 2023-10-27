#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - It is a new function which print the binar of a dec num
 * @n: numb param
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int j, mine = 0;
	unsigned long int holder;

	for (j = 63; j >= 0; j--)
	{
		holder = n >> j;

		if (holder & 1)
		{
		        putchar('1');
		 	mine++;
		}
		else if (mine)
		{
		        putchar('0');
		}
	}

	if (!mine)
	{
        	 putchar('0');
	}
}
