#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Is a pointer.
 *
 */

void puts2(char *str)
{
	int num = *str++;

	while (num != '\0')
	{
		if (num % 2 == 0)
		_putchar(num);
		num = *str++;
	}

	_putchar('\n');
}
