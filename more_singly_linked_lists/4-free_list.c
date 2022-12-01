#include "lists.h"

/**
 * free_list - frees a list.
 * @head: Pointer to list.
*/

void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head->n);
		free(head);
		head = aux;
	}
}
