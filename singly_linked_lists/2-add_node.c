#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: Pointer to the head of the list.
 * @str: String to add to the list.
 * Return: Return  the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;
	int len = 0;

	new = malloc(sizeof(list_t));

	while(str[len])
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
		new->next = *head;
		len++;
	}

	*head = new;
	return(new);
}
