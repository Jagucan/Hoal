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
	listint_t *node, *cop_head = *head, *aux = *head;
	unsigned int a, len = 0;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;

	if (!(*head) && !head)
		return (NULL);

	for (len = 0; cop_head != 0; len++)
		cop_head = cop_head->next;

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
