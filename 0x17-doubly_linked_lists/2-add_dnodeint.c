#include "lists.h"
/**
 * add_dnodeint - this function adds a new node
 *
 * @head: Pointer pointer of the to first node
 *
 * @n: integer to store nodes
 *
 * Return: address of the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
