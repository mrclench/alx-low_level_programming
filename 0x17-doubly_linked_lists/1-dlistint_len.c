#include "lists.h"
/**
 *  dlistint_len - this function reads number of linked list
 *
 *  @h: head of linked list
 *
 *  Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *currentnode;
	
	size_t n;
	
	currentnode = h;
	n = 0;
	while (currentnode)
	{
		currentnode = currentnode->next;
		++n;
	}

	return (n);
}
