#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Is a pointer.
 * @src: Is another pointer.
 * @n: Bytes from src.
 * Return: Return a pointer dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int i;

	for (a = 0;dest[a] != '\0'; a++)

	for (i = 0; src[i] != '\0' && i < n && n != 0; a++)
	{
		dest[a + i] = src[i];
	}

	dest[a + i] = '\0';
	return (dest);
}
