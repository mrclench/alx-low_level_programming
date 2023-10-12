#include "lists.h"

/**
 * sum_dlistint - Calculates sum of all the dataof a linked list
 *
 * @head: Pointer to the start of linked list
 *
 * Return: Sum of all the data(n) of a linked list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	current = head;
	sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
