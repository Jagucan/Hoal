#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: Is the string to rersed.
 */

void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	char len;

	while (s[i++])
		a++;

	for (i = a  - 1; i >= a / 2; i--)
	{
		len = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = len;
	}
}
