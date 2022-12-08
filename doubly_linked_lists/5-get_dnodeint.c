#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a listint_t linked list.
 * @index: Is the index of the node, starting at 0
 * @head: Pointer to list.
 * Return: Returns the nth node.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;

	if (!head)
		return (NULL);

	while (index != 0)
	{
		if (node->next == NULL)
			return (NULL);

		node = node->next;
		index--;
	}

	return (node);
}
