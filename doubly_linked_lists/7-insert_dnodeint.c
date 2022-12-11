#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: Is the index of the list.
 * @n: Elements to add to the new node.
 * Return: the address of the new node.
 */

dlistint_t *insert_nodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *node, *cop_head = *head, *aux = *head;
	unsigned int a, len = 0;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;

	if (!(*head) && !head)
		return (NULL);

	while (cop_head)
	{
		cop_head = cop_head->next;
		len++;
	}

	if (!idx)
	{
		node->next = *head;
		*head = node;
	}

	else if (idx <= len)
	{
		for (a = 1; a < idx; a++)
			aux = aux->next;

		node->next = aux->next;
		aux->next = node;
	}

	else
		return (NULL);

	return (node);
}
