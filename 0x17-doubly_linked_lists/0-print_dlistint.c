#include "lists.h"
/**
 * print_dlistint - this function prints elements of linked list
 *
 * @h: head of linked list
 *
 * Return: size_t value or number of  nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *currentnode;
	size_t n;

	currentnode = h;
	n = 0;
	while (currentnode)
	{
		printf("%d\n", currentnode->n);
		currentnode = currentnode->next;
		++n;
	}
	return (n);
}
