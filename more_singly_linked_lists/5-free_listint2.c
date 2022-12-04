#include "lists.h"

/**
 * free_listint2 - frees a list.
 * @head: Pointer to list.
*/

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!head)
		return (0);

	while (*head)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}

	head = NULL;
}
