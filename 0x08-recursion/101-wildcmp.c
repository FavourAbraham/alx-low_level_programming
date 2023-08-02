#include "main.h"
/**
 *  * match -  compares two strings
 *   * @s1: string one
 *    * @s2: string two
 *     * @after_wldcd: placeholder for position right after wildcard
 *      * Return: 1 if the strings can be considered identical, otherwise return 0.
 *       */
int match(char *s1, char *s2, char *after_wldcd)
{
		if (*s1 == '\0' && *s2 == '\0')
					return (1);
			if (*s1 == '\0' && *s2 == '*')
						return (match(s1, s2 + 1, s2 + 1));
				if (*s1 == '\0' && *s2 != '\0')
							return (0);
					if (*s2 == '*')
								return (match(s1, s2 + 1, s2 + 1));
						if (*s1 == *s2)
									return (match(s1 + 1, s2 + 1, after_wldcd));
							else
										return (match(s1 + 1, after_wldcd, after_wldcd));
}
/**
 *  * wildcmp - compare if string with wildcard matches
 *   * @s1: one string
 *    * @s2: one string
 *     * Return: 1 if matched, 0 if not
 *      */
int wildcmp(char *s1, char *s2)
{
		if (*s1 == '\0' && *s2 == '\0')
					return (1);
			if (*s1 == *s2)
						return (wildcmp(s1 + 1, s2 + 1));
				else if (*s2 == '*')
							return (match(s1, (s2 + 1), (s2 + 1)));
					else
								return (0);
}
