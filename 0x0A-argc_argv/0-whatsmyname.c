#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments passed in a program
 * @argv: array of pointers to the strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	else
	{
	printf("Error: no comman-line arguments stated.\n");
	}

	return (0);
}
