#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - This computes num of bits
 * @n: one
 * @m: two
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k = 0;
	int mine = 0;

	unsigned long int holder;
	unsigned long int private = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		holder = private >> k;
		if (holder & 1)
		{
			mine++;
		}
	}

	return (mine);
}
