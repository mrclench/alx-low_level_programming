#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: minimum range
 * @max: maximum range
 * Return: pointer(arrt)
 */

int *array_range(int min, int max)
{
	int *arrt;
	int i;

	if (max < min)
		return (NULL);

	arrt = malloc(sizeof(*arrt) * ((max - min) + 1));

	if (arrt == NULL)
		return (NULL);

	for (i = 0; max >= min; i++, min++)
		arrt[i] = min;

	return (arrt);
}
