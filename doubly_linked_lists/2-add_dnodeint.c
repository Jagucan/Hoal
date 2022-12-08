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

	n_node->n = n;

	if (!head)
		head = &n_node;

	if (!(*head))
	{
		(*head) = n_node;
		n_node->next = NULL;
	}

	else
	{
		n_node->next = (*head);
		n_node->prev = NULL;
		(*head)->prev = n_node;
	}

	*head = n_node;
	return (n_node);
}
