#include "main.h"

/**
 * print_last_digit - checks the last digit
 *
 * @a: function parameter
 *
 * Return: Always b
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
