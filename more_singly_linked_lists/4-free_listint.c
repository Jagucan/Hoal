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
		head = aux;
		aux = head->next;
		free(aux);
	}
}
