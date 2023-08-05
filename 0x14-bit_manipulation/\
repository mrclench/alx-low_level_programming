#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_binary - function that converts int into binary
 * @n: int parameter being used
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	i <<= ((sizeof(n) * 8) - 1);
	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n == 1)
	{
		putchar('1');
		return;
	}

	while (i > 0)
	{
		if ((i & n) == 0)
			i = i >> 1;
		else
			break;
	}
	while (i > 0)
	{
		if ((i & n) == 0)
			putchar('0');
		else
			putchar('1');
		i = i >> 1;
	}
}
