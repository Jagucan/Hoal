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
	unsigned int length1, length2, a, i;
	char *pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)
	{}

	for (length2 = 0; s2[length2] != '\0'; length2++)
	{}

	if (n < length2)
		length2 = n;

	length2++;
	pointer = malloc(sizeof(char *) * (length2 + 1));

	if (pointer == NULL)
		return (NULL);

	for (a = 0; a < length1; a++)
	{
		pointer[a] = s1[a];
	}

	for (i = 0; i < length2; i++, a++)
	{
		pointer[a] = s2[i];
	}
	
	pointer[a] = '\0';
	return (pointer);
}
