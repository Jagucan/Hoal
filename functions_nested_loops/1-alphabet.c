#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 */

void print_alphabet(void)
{
	char letters;

	for (letters = '97'; letters < '123'; letters++)
	{
		_putchar(letters);
	}
		_putchar('\n');

}
