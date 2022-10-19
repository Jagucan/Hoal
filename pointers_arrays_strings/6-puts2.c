#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Is a pointer.
 *
 */

void puts2(char *str)
{
	int num = 0;
	int i = 0;

	i = i + 2;

	while (*(str + num) != '\0')
	{
		_putchar(num);
		num++;

		while (i <= num && *(str + 1) != '\0')
		{
			_putchar(str[i]);
		}

	}

	_putchar('\n');
}
