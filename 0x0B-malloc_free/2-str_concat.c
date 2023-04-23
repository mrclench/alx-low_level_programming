#include "main.h"
#include <stdlib.h>
/**
 * str_concat - string concat to address
 * @s1: the first string
 * @s2: the second string
 * Return: new allocation or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str_final;

	unsigned int i, j, k, endpoint;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	str_final = malloc(sizeof(char) * (i + j + 1));

	if (str_final == NULL)
	{
		free(str_final);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		str_final[k] = s1[k];
	endpoint = j;
	for (j = 0; j <= endpoint; k++, j++)
		str_final[k] = s2[j];
	return (str_final);
}
