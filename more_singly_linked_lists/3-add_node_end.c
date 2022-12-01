#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Pointer to the head of the list.
 * @str: String to add to the list.
 * Return: Return  the address of the new element, or NULL if it failed.
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node, *l_node;

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
	{
		while (l_node->next)
			l_node = l_node->next;
		l_node->next = n_node;
	}

	l_node = *head;
	return (l_node);
}
