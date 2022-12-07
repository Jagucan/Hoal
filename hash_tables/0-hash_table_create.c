#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Is the size of the array.
 * Return: Returns a pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_tab;
	hash_node_t **n_node;

	n_tab = malloc(sizeof(hash_table_t));
	if (!n_tab)
		return (NULL);

	n_node = malloc(sizeof(hash_node_t *) * size);
	if (n_node == NULL)
	{
		free(n_tab);
		return (NULL);
	}

	n_tab->size = size;
	n_tab->array = n_node;

	return (n_tab);
}
