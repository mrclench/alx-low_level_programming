#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the linked list
 * @head: head of struct
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	for (next = head->tmp; head != NULL; head = tmp)
	{
		next = head->tmp;
		free(head);
	}
}
