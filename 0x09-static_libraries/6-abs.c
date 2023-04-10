#include "main.h"
/**
 * _abs - finds the absolute value of the number
 * @n: is the number to be made absilute
 * Return: always 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
