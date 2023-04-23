#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates mem for an array, suing malloc.
 * @nmemb: array
 * @size: bytes size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *pt;

	if (nmemb == 0 || size == 0)
		return ('\0');

	pt = malloc(nmemb * size);

	if (pt == NULL)
		return ('\0');

	for (i = 0; i < nmemb * size; i++)
		pt[i] = 0;

	return ((void *)pt);
}
