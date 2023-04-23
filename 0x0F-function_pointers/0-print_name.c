#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - to print name.
 * @name: input the name
 * @f: function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
