#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Pointer to the head of the list.
 * @str: String to add to the list.
 * Return: Return  the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last = *head;
	char *dup;
	int len = 0;

	new = malloc(sizeof(list_t));

	for(len = 0; str[len]; len++)
	{
		if (new == NULL)
			return (NULL);

		dup = strdup(str);

		if (dup == NULL)
		{
			free(new);
			return (NULL);
		}

		new->str = dup;
		new->len = len;
		new->next = NULL;
	}

	if (*head != NULL)
	{
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	else 
	*head = new;

	return(*head);
}
