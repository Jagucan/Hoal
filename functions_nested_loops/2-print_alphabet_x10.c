#include "main.h"

/**
 * print_alphabet_x10 - print an alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int num = '0';

	for (alphabet <= 'z')
	{
		while (num < 10)
		{
			_putchar(alphabet);
			num++;
		}
	}
			_putchar('\n');
			alphabet++;
}
