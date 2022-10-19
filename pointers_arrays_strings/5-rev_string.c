#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: Is the string to rersed.
 */

void rev_string(char *s)
{
	int f;
	int i;
	char let;

	i = 0;
	f = 0;

	while (s[i++])

		let++;

	for (i = f  - 1; i >= f / 2; i--)
	{

		let = s[i];
		s[i] = s[f- i - 1];
		s[f - i - 1] = let;

	}
}
