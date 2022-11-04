#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Is an unsigned int.
 * @size: Is an unsigned int.
 * Return: Returns a pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, t;
	char *array;

	t = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(t);

	if (array == NULL)
		return (NULL);

	for (a = 0; a < t; a++)
		array[a] = 0;

	return (array);
}
