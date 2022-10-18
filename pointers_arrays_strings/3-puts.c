#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: Is an pointer.
 */

void _puts(char *str)
{
	int s = *str;

	while (s != 0)
	{
		s = *str++;

		if (s > 0)
		
			_putchar(s - 1);
	}

	_putchar(10);
}
