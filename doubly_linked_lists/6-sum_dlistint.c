#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of linked list.
 * @head: Pointer to list.
 * Return: Returns the sum.
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (!head)
		return (0);

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
