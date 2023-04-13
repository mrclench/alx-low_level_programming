#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: arguments passed in a program
 * @argv: array of pointers to the strings
 * a: first integer
 * b: second integer
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%d\n", product);

	return (0);
}
