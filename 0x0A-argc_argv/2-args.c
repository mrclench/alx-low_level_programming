#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments passed in a program
 * @argv: array of pointers to the strings
 * i: int value for iteration
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
