#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer.
 * @src: Pointer.
 * @n: Unsigne data type.
 * Return: Returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
