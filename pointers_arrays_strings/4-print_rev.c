#include "main.h"

/**
 * print_rev - Prints a string, in reverse.
 */

void print_rev(char *s)
{
	char str = *s;
	int rev = 0;

	while (str != '\0')
	{
		str = *s++;

		while (rev >= 0)
		{
			_putchar(str);
			rev--;
		}
	}

	_putchar('\n');

}
