#include "main.h"

/**
 * print_alphabet_x10 - print an alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';

	for (alphabet < 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
		_putchar('\n');

}
