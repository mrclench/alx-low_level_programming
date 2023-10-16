#include "main.h"

/**
 * _puts - prints a string
 * @i the parameter being used
 * @str: string to print
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
