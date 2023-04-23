#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that sums all parameters
 * @n: number of parameters
 *
 * Return: 0 if n is null otherwise priny
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, count);

	for (unsigned int i = 0; i < count; i++);
		{
		(int n = va_arg(args, int);)
			printf("%d ", n);
		else if (int n == 0)
			return (0);
		}

	va_end(args);
}
