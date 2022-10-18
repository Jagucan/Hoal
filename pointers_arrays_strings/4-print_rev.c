#include "main.h"

/**
 *
 */

void print_rev(char *s)
{
	char str = *s;
	int rev = 0;

	while (str != '\0')
	{
		str = *s++;
	}

	while (rev >= 0)
	{
		rev--;
		_putchar(str);
	}

	_putchar('\n');

}
