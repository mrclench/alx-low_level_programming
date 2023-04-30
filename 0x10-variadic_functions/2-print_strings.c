#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints a string.
 * @separator: seperator char
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list stringArgs;
	char *strArg;

	va_start(stringArgs, n);
	for (k = 0; k < n; k++)
	{
		strArg = va_arg(stringArgs, char *);

		if (separator != NULL && k > 0)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
	}
	va_end(stringArgs);
	printf("\n");
}
