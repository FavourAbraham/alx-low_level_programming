#include "main.h"
/**
 * why  - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */
int why(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (why(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (why(s1 + 1, s2) || why(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (why(s1 + 1, s2 + 1));
	}
	return (0);
}
