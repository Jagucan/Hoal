#include "main.h"

/**
 * print_alphabet_x10 - print an alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int num = 0;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{	
		while (num <= 10)
		{
			_putchar(alphabet);
			num++;
		}
	}
			_putchar('\n');
}
