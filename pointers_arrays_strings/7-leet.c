#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @a: Is a Pointer.
 * Return: Return pointer a.
 */

char *leet(char *a)
{
	int i = 0, 
	int n;

	char s1[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char s2[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	while (a[i] != '\0')
	{
		a++;

		for (n = 0; n <= 8; n++)
		{
			if (a[i] == s1[n])
				a[i] = s2[n];
		}
	}

	return (a);
}
