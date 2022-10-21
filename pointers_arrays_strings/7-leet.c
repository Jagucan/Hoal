#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s1: Is a Pointer.
 * Return: Return pointer a.
 */

char *leet(char *s1)
{
	int i;
	int n;
	char s2[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char s3[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; s1[i] != '\0'; i++)
	{

		for (n = 0; n <= 9; n++)
		{
			if (s1[i] == s2[n])
			{
				s1[i] = s3[n];
			}
		}
	}

	return (s1);
}
