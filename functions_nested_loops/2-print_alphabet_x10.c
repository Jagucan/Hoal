#include "main.h"

/**
 * print_alphabet_x10 - print an alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int al = 97;
	int num = 0;

	for (num <= 9)
	{
		for (al <= 122)
		{
			_putchar(al);
			al++;
		}
			_putchar('\n');
			num++;

	}
}
