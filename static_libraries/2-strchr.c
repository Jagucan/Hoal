#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer.
 * @c: Var type char.
 * Return: Returns a pointer to the first occurrence.
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}

	return (0);
}
