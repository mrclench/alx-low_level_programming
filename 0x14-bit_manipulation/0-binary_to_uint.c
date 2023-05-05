#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - function that converts binary into an int
 * @b: char parameter being used
 *
 * Return: converted number or 0 if b is 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c;
	unsigned int len;

	len = strlen(b);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
