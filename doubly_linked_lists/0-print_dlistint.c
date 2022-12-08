#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list.
 * @h: Node of the head.
 * Return: Return: the number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_node = 0;

	if (!h)
		return (n_node);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_node++;
	}

	return (n_node);
}
