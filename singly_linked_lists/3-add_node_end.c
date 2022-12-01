#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Pointer to the head of the list.
 * @str: String to add to the list.
 * Return: Return  the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dup = strdup(str);
	if (!dup)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (!(*head))
		*head = new;

	else
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}

	last = *head;
	return (last);
}
