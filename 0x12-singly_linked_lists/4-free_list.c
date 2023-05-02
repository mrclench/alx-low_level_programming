#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t list
 *
 * @head: head of list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = temp;
	}
}
