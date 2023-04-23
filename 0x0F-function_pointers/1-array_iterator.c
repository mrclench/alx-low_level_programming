
 

#include "function_pointers.h"
/**
 * array_iterator - parameter function.
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the function you need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
