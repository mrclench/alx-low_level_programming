#include "main.h"

/**
 *get_endianness- A function which checks if machine is little or a big endian
 *
 * Return:Returns 0 for big machines and 1 for little machines
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
