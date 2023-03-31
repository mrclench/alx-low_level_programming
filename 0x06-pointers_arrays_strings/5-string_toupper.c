#include "main.h"
#include <ctype.h>
/**
 * string_toupper - chnages string to uppercase
 * @a: the string
 * Return: return the string
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = toupper(a[i]);
		}
		else
		{
			a[i] = a[i];
		}
	}
	return (a);
}
