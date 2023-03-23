#include "main.h"

/**
 * print_most_numbers - function that prints digits except 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (i != '2')
			if (i != '4')
			_putchar(i);
	}
	_putchar('\n');

}
