#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: the string to be used
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * to_check - checks the string
 * @s: the string
 * @length: the lenghth
 * @i: to go through the string
 * Return: 1 or 0
 */
int to_check(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (to_check(s, i + 1, length - 1));
}
/**
 * is_palindrome - confirms is a string is palindrome
 * @s: the string
 * Return: returns integers
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (to_check(s, 0, _strlen_recursion(s)));

}
