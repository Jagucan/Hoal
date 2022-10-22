#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Is a pointer.
 * @b: Var type char.
 * @n: Unsigne data type.
 * Return: Return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
