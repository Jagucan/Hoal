#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @index: Is the index of the node, starting at 0
 * @head: Pointer to list.
 * Return: Returns the nth node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

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
