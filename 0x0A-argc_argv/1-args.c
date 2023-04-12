#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments passed in a program
 * @argv: array of pointers to the strings in a program
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%d\n", argc - 1);
	}
	else
	{
	printf("%s\n", argv[0]);
	}

	return (0);
}
