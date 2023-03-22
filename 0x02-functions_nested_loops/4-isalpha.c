#include "main.h"

/**
 * _isalpha - function that checks for cases and presence of alphabets
 *
 * @c: c is the parameter / character to be checked
 *
 * Return: 1 if it is an alphabet
 * and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
