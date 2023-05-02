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
	listint_t *next;

	if (head == NULL)
		return;

	for (next = head->next; head != NULL; head = next)
	{
		next = head->next;
		free(head);
	}
}
