#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: Pointer to the head of the list.
 * @n: Elements to add to the list.
 * Return: Return  the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = (listint_t *)malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (!head)
		head = &n_node;

	if (!(*head))
		*head = n_node;

	else
		n_node->next = (*head);

	*head = n_node;
	return (n_node);
}
