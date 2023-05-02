#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - find the length of linked list
 * @h: struct to go through
 * Return: amount of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
