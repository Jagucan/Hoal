#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: Is an pointer.
 */

void _puts(char *str)
{
	int s = *str;

	while (s != "  00")
	{
		s = *str++;



			_putchar(s);
	}

	_putchar(10);
}
