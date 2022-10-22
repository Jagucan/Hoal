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

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
