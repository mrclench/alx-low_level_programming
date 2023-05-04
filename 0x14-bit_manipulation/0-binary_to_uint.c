#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts binary into an int
 * @b: char parameter being used
 *
 * Return: converted number or 0 if b is 0
 */

unsigned int binary_to_uint(const char *b)
{
	char s[] = "";
	int count = 0;
	unsigned int i = 0;

	while (b[count])
		i = (i << 1) | (s[count++] - '0');
	return (i);
}
