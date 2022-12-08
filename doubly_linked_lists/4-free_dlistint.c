#include "lists.h"

/**
 * _free_dlist - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void _free_dlistint(dlistint_t *head)
{
    dlistint_t *aux;

	while (aux = head)
	{
		head = head->next;
		free(head);
	}
}
