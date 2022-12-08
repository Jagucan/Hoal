#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list.
 * @h: Node of the head.
 * Return: Returns the number of elements.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_list = 0;

	if (!h)
		return (n_list);

	while (h)
	{
		h = h->next;
		n_list++;
	}
	return (n_list);
}
