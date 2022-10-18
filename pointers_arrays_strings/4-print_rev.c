#include "main.h"

/**
 * print_rev - Prints a string, in reverse.
 * @s:Is an pointer.
 */

void print_rev(char *s)
{
	int p = *s;
	int rev = 0;

	while (*s != '\0')
	{
		p = *s++;
		rev++;
	}

	if (rev != 0)
	{
		p = *s--;

		while (rev > 0)
		{
			p = *s--;
			_putchar(p);
			rev--;
		}
	}

	_putchar('\n');

}
