#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint - adds a node at the end
 * @head: start of node
 * @n: value to give new node
 * Return: the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (*head);
}
