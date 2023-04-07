#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of the power of an int
 *
 * @x: paramter used
 * @y: power of parameter
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (_pow_recursion(x, y - 1) * x);
}
