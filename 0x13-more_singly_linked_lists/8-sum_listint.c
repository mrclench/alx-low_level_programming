#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - lists sum of listint list
 *
 * @head: head of list
 *
 * Return: value of sum of list
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
