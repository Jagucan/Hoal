#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: Is an pointer.
 */

void _puts(char *str)
{
	char s = *str++;

	while (s != 0)
	{

		_putchar(s);
		s = *str++;

	}

	_putchar('\n');
}
