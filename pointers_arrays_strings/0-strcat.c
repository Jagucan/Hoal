#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * Return: Returns a pointer to the resulting string dest.
 * @dest: Is a pointer.
 * @src: Is an another pointer.
 */

char *_strcat(char *dest, char *src)
{

	int j = 0;
	int i = 0;

	while (dest[j] != '\0')
		j++;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	dest[j] = '\0';
	return (dest);
}
