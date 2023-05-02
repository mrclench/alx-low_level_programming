#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print nodes in a lnked list
 * @h: first node of list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			len++;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}

	return (len);
}
