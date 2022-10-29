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
	int i;

	for (a = 0; accept[a]; a++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[a] == accept[i])
				return (s + 1);
		}
	}

	return (0);
}
