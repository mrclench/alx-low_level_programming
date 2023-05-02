#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - returns value of head node and removes it,
 *
 * @head: head of list
 *
 * Return: value of node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (n);
}
