#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input here
 * Return: Always 0 (Success) Done
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
