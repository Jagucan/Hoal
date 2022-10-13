#include "main.h"

/**
 * print_alphabet_x10 - print an alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int al;
	int num;

	for (num = 0; num <= 9; num++)
	{
		for (al = 97; al <= 122; al++)
		{
			_putchar(al);
		}
			_putchar('\n');
	}
}
