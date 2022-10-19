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

	while (str[i++])
		num++;

	for (i = 0; i < num; i += 2)
		putchar(str[i]);
		putchar('10');
}
