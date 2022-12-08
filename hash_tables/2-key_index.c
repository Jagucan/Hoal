#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: Is the key.
 * @size: Is the size of the array of the hash table.
 * Return: Returns the index at which the key/value pair \
 *			be stored in the array of the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2((const unsigned char *)key) % (size); 

	return (index);
}
