#include "main.h"
/**
 *  * _strlen - Returns the length of a string.
 *   * @s: The string to be measured.
 *    *
 *     * Return: The length of the string.
 *      */
int _strlen(char *s)
{
		int len = 0;

			if (*(s + len))
					{
								len++;
										len += _strlen(s + len);
											}

				return (len);
}
/**
 *  * isPalRec - A recursive function that check a str[s..e] is palindrome or not.
 *   * @str: string to check
 *    * @s: start character
 *     * @e: end character
 *      * Return: 1 if true otherwise 0
 *       */
int isPalRec(char str[], int s, int e)
{
		if (s == e)
					return (1);
			if (str[s] != str[e])
						return (0);
				if (s < e + 1)
							return (isPalRec(str, s + 1, e - 1));
					return (1);
}
/**
 *  * is_palindrome - checks if string is a palindrome
 *   * @s: string
 *    * Return:  1 if a string is a palindrome and 0 if not.
 *     */
int is_palindrome(char *s)
{
		int n = _strlen(s);

			if (n == 0)
						return (1);
				return (isPalRec(s, 0, n - 1));
}
