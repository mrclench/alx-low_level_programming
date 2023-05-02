#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print nodes in a lnked list
 * @h: head node of list
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->next);
		h = h->next;
		count++;
	}

	return (count);
}
