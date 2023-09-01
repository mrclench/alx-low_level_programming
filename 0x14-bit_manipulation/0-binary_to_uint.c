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
	unsigned int i = 0;
	unsigned int c;
	unsigned int len;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	for (c = 0; c < len; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	i <<= 1;
	i |= (b[c] - '0');
	}
	return (i);
}

