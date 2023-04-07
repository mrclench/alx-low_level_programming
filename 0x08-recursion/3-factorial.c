#include "main.h"
#include <stdio.h>

/**
 * factorial - funtion that returns the factorial of a given number
 *
 * @n: parameter to be checked
 *
 * Return: Always n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
