#include "main.h"

/**
 * _strcpy - Copy the string pointer dest to src.
 * @dest: Is a pointer.
 * @src: Is an another pointer.
 * Return: The value of pointer dest.
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
