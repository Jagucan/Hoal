#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to list.
 * Return: Returns the sum.
*/

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum;

	if (!head)
		return (0);

	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}

	return (sum);
}