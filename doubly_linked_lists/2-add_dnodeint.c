#include "lists.h"

size_t _print_dlistint_backward(const dlistint_t *h);

/**
 * add_dnodeint - Adds a new node at the beginning of a list.
 * @head: Pointer to the head of the list.
 * @n: Elements to add to the list.
 * Return: Return  the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);

	if (!head)
		head = &n_node;

	if (!(*head))
		*head = n_node;

	else
	{
		n_node->n = n;
		n_node->prev = NULL;
		n_node->next = (*head);
	}

	*head = n_node;
	return (n_node);
}
