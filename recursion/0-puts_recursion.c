#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Is a pointer.
*/

void _puts_recursion(char *s)
{
	int a = *s;

	if (a != 0)
	{
		_putchar(a);
		_puts_recursion(a + 1);
	}

}
