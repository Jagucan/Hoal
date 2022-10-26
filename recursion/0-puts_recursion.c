#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Is a pointer.
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		/* Print content of pointer s */
		_putchar(*s);
		/* Change to the next character in the string*/
		_puts_recursion(s + 1);
	}

	_putchar('\n');

}