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


	while (head != NULL)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}

}
