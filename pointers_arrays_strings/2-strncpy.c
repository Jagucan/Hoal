#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Is a pointer.
 * @src: Is another pointer.
 * @n: Are the number of characters to copy.
 * Return: Return dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	while (a < n)
	{
		a++;
		dest[a] = '\0';
	}
	return (dest);
}
