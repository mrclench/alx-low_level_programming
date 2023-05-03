#include "lists.h"
#include <stdlib.h>

/**
 * reverse_recur - reverses a listint list recursively
 *
 * @first: node to reverse.
 * @second: node after node to reverse
 *
 * Return: void
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *n;

	prev = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = n;
	}

	*head = prev;
	return (*head);
}
