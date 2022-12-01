#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: Pointer to list.
*/

void free_listint(listint_t *head)
{
	listint_t *aux;

	aux = head;

	while (aux)
	{
		aux = head->next;
		free(aux);
	}
}
