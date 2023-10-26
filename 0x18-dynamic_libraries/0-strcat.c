#include "main.h"


/**
 * _strcat - main funtion to concatenate two strings
 *
 * @dest: destination of append
 *
 * @src: src
 *
 * Return: a character of value
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = _strlen(dest);

	for (i = 0 ; (i <= _strlen(src)) != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
