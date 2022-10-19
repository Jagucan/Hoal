#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Is a pointer.
 */

void puts_half(char *str)
{

	int len = 0;
	int a;
	int n;

	while (str[len] != '\0')
	len++;

	if (len % 2 == 0)
	a = len / 2;

	else
	a = (len + 1) / 2;

	for (n = a; n < len; n++)
	_putchar(str[n]);
	_putchar('\n');

}
