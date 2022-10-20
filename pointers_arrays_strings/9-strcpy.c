#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest, @src: The are points.
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = '\0';
	return (dest);
}
