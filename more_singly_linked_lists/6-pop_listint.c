#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: Return the head.
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!(*head))
		return (0);

	while (*head != NULL)
	{
		node = *head;
		n = (*head)->n;
		*head = (*head)->next;
	}
}
