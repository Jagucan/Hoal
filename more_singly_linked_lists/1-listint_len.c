#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Node of the head.
 * Return: Returns the number of elements.
*/

size_t listint_len(const listint_t *h)
{
	unsigned int n_list = 0;

	if (!h)
		return (n_list);

	while (h)
	{
		h = h->next;
		n_list++;
	}

	return (n_list);
}
