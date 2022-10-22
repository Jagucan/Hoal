#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer.
 * @c: Var type char.
 * Return: Returns a pointer
 */
char *_strchr(char *s, char c)
{

	if (*s == c)
	{
		return (s);
		*s++;
	}

	return (0);
}
