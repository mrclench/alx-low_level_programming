#include "main.h"

/**
 * get_bit - gets value of biy at index
 * @n: number to get bit value from
 * @index: index of n to get bit value
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return ((n >> index) & 1);
}

