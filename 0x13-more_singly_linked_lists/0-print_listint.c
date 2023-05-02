#include "list.h"
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
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			count++;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
