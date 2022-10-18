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

		while (rev >= *s)
		{
			_putchar(str);
			rev--;
		}
	}

	_putchar('\n');

}
