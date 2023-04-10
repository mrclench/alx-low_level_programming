#include "main.h"
/**
 * _strncat - concatenate the strings
 * @dest: the destination string
 * @src: the string to be added
 * @n: the bytes from src
 * Return: always 0 success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{

		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
