#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: integer to use
 * @index: index to set to 1
 *
 * Return: 1 if succeeded of -1 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
