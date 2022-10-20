#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest, @src: the are points.
 */

char *_strcpy(char *dest, char *src)
{
	int sd = 0;
	int a;

	while (src[sd] != '\0')
	{
		sd++;
	}

	for (a = 0; a < sd; a++)
	{
		dest[sd] = src[sd];
	}

	dest[a] = '\0';

	return (dest);
}
