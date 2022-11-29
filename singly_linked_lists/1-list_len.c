#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Parameters.
 * Return: Returns the number of elements.
*/
size_t list_len(const list_t *h)
{
	size_t n_list = 0;

	while (h != NULL)
	{

		if (h == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		
		h = h->next;
		n_list++;
		
	}

	return (n_list);
}
