#include "main.h"
/**
 * check_pal - checks if characters are equal recursively
 * @s: string to check
 * @i: iterator for the beginning of the string
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
    if (i >= len)
        return (1);
    if (*(s + i) != *(s + len - 1))
        return (0);
    return (check_pal(s, i + 1, len - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is, 0 if it's not
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s); 
    if (len <= 1)
        return (1);
    return (check_pal(s, 0, len));
}
/**
 * _strlen_recursion - returns the length of a string recursively
 * @s: string to calculate the length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}

