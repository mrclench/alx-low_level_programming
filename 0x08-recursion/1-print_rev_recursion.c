#include "main.h"
#include "4-print_rev.c"

/**
 * _print_rev_recursion - this is a function that prints a string in reverse.
 *
 * @s: pointer to the string that is to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
