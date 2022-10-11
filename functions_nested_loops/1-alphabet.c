#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 */

void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
		_putchar('\n');
}
