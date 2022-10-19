#include "main.h"

/**
 *
 */

void rev_string(char *s)
{
	int f;
	int i;
	char let;

	i = 0;
	f = _string(s) - 1;

	while (f >= i)
	{
		let = *(s + f);
		*(s + f) = *(s + i);
		*(s + i) = let;
		f--;
		i++;

	}
}
