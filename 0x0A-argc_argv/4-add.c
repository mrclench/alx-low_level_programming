#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_not_digit - function to check if a variable is not a digit
 * @s: the string to check
 *
 * Return: 1 if the string contains a symbol or non-digit variable.
 */

int is_not_digit(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
		{
			return (1);
		}
		s++;
	}
	return (0);
}



/**
 * main - Entry point
 * @argc: arguments passed in a program
 * @argv: array of pointers to the strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_not_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
