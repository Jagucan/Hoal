#include "lists.h"

/**
 * print_list - Prints all the elements of a list.
 * @h: Node of the head.
 * Return: Return the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	unsigned int n_node = 0;

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
