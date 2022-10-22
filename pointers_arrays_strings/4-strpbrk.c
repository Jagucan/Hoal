#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer.
 * @accept: Pointer.
 * Return: Returns a pointer to the byte in s.
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{

		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}

		s++;
	}

	return ('\0');
}
