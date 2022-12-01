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

	new = (list_t *)malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	if (!head)
		head = &new;

	while (str[len])
	{
		dup = strdup(str);

		if (dup == NULL)
		{
			free(new);
			return (NULL);
		}
		len++;
		new->str = dup;
		new->len = len;
		new->next = *head;
	}

	*head = new;
	return (new);
}
