#include "main.h"

/**
 * print_alphabet_x10 - print an alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int num = '0';

	while (num < 10)
	{
		while (alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}
			_putchar('\n');
			num++;
}
