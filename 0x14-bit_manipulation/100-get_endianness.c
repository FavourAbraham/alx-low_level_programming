#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_endianness -To check endianness
 * Return: Output
 */
int get_endianness(void)
{
	unsigned int icount = 1;
	char *mycharacter = (char *) &icount;

	return (*mycharacter);
}

