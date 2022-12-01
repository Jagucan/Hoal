#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: Pointer to list.
*/

void free_listint2(listint_t **head)
{
	listint_t *aux;

	while ((*head))
	{
		aux = (*head)->next;
		free(aux);
		*head = aux;
	}

	*head = NULL;
}
