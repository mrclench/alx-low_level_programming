#include "main.h"

/**
 * print_sign - This function prints signs
 *
 * @n: this n is the parameter used to make the function work
 *
 * Return: 1, 0 and -1
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
