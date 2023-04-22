#include "main.h"

/**
 * wildcmp - compares two strings with wildcards in the second.
 * @s1: first string
 * @s2: second string
 * Return:  returns 1 if the strings are identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		while (*s2 == '*')
			s2++;

		if (*s2 == '\0')
			return (1);

		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2))
				return (1);
			s1++;
		}
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
