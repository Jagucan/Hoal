#include "hash_tables.h"

/**
 * 
 * 
 * 
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_tab;
	hash_node_t **n_node;
	unsigned long int i;

	n_tab = malloc(sizeof(hash_table_t));
	if (!n_tab)
		return (NULL);

	n_node = malloc(sizeof(hash_node_t *) * size);
	if (!n_node)
	{
		free(n_tab);
		return (NULL);
	}

	n_tab->size = size;
	n_tab->array = n_node;

	for (i=0; i < size; i++)
	    n_node[i] = NULL;

	return (n_tab);
}
