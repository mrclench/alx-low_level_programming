#include "main.h"

/**
 * _strlen - returns the string length
 * @s: string whoes length to be prrinted
 *  Return: length of the string
 */

char _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}
