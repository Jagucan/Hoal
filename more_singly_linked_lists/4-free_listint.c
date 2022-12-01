#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: Pointer to list.
*/

void free_listint(listint_t *head)
{
	listint_t *aux;

	while ((aux = head) != NULL)
	{
		head = head->next;
		free(aux);
	}
}
