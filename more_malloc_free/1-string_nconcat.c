#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: Is a pointer.
 * @s2: Is a pointer.
 * @n: Is an unsigned int.
 * Return: Returns a pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, a, i;
	char *pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}

	if (n < len2)
		len2 = n;

	len2 += 1;
	pointer = malloc(sizeof(char *) * (len2 + 1));

	if (pointer == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		pointer[a] = s1[a];	

	for (a = len1; a < len1 + n; a++)
	{
		pointer[a] = s2[i];
		i++;
	}
	pointer[len1 + n] = '\0';
	return (pointer);
}
