#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Is a pointer.
 *
 */

void puts2(char *str)
{

	int num = 0;

	for (num = 0; str[num]; num++)
	{
		if (num % 2 == 0)
		_putchar(str[num]);
	}

	_putchar('\n');
}
