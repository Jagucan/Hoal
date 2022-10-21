#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Is a pointer.
 * @src: Is another pointer.
 * @n: Are the number of characters to copy.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0')
		a++;

	while (dest[a] != '\0' && a < n && n != 0)
	{
		dest[a] = src[a];
		dest[a++] = '\0';
	}

	return (dest);
}
