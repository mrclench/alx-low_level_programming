#include "main.h"
#include "2-strlen.c"
#include <string.h>

/**
 * _strncat - mai function to concatenate a string into another string
 *
 * @dest: destination of append
 * @src: src variable
 * @n: number of bytes
 *
 * Return: a character of value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

