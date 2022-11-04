#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Is an unsigned int.
 * Return: Return a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
