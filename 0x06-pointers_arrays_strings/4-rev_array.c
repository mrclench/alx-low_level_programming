#include "main.h"
/**
 * reverse_array - reverses the array
 * @a: the array
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, hold;

	i = 0;
	while (i < n / 2)
	{
		hold = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = hold;
		i++;
	}
}
