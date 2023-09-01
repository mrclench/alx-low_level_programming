#include "main.h"
#include "2-get_bit.c"
/**
 * clear_bit - clears index and sets bit to 0
 * @n: integer to look out for
 * @index: index to set to
 * Return: returns 1 if success and -1 if invalid
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);

	return (-1);
}

