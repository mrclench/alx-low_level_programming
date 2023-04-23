#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * @ac: argument count
 * @av: argument vector
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *arrt;
	int c, i, j, len;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	arrt = malloc((c + 1) * sizeof(char));

	if (arrt == NULL)
	{
		free(arrt);
		return (NULL);
	}

	for (i = j = len = 0; len < c; j++, len++)
	{
		if (av[i][j] == '\0')
		{
			arrt[len] = '\n';
			i++;
			len++;
			j = 0;
		}
		if (len < c - 1)
			arrt[len] = av[i][j];
	}
	arrt[len] = '\0';

	return (arrt);
}
