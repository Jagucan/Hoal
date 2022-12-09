#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Is the hash table you want to add or update.
 * @value: Is the value associated with the key.
 * @key: Is the key.
 * Return: Returns: 1 if it succeeded, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	char *value_dup, *key_dup;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	value_dup = strdup(value);
	key_dup = strdup(key);
	if (!value_dup || !key_dup)
	{
		free(node);
		return (0);
	}

	index = hash_djb2((const unsigned char *)key_dup) % (ht->size);

	node->key = key_dup;
	node->value = value_dup;
	node->next = NULL;

	if (ht->array[index] && strcmp(ht->array[index]->key, key_dup) != 0))
		node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}
