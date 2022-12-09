#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: Is the index of the list.
 * @n: Elements to add to the new node.
 * Return: the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *aux = *head;
	unsigned int len = 0;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;

	if (!head)
		head = &node;

	if (!(*head))
		*head = node;

	if (idx)
	{
		if (!node->next)
			return (NULL);

		node = node->next;
		(*head) = node;
	}

	else
	{
		aux = aux->next;
		len++;
		node->next = aux->next;
		aux->next = node;
	}

	return (node);
}
