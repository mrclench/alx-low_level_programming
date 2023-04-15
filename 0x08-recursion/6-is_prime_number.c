#include "main.h"

/**
 * check_prime - function to check if an integer is a prime number
 * @n: numbers to check
 * @i: second number to check
 * Return: Always 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i - 1));
}

/**
 * is_prime_number - provides the prime numbers in a string
 * @n: the number to be checked
 * Return: 1 if the number is a prime number and 0 if otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, n / 2));
}
