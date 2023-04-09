#include "main.h"

/**
 * square_root - returns the square root of a number recursively
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 * Return: the square root if it exists, otherwise -1
 */
int square_root(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	else if (guess * guess == n)
		return (guess);
	else
		return (square_root(n, guess + 1));
}

/**
 * _sqrt_recursion - funtion that returns the natural square root of a number
 *
 * @n: parameter used
 *
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square_root(n, 0));
}
