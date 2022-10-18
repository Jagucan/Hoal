#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 */

void _puts(char *str)
{
	int s = *str;

	while (s != 0)
	{
		s = *str++;
		_putchar(s);
	}

	_putchar(10);
}
