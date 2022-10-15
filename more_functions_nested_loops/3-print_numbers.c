#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Print number from 0 to 9.
 * @num: Is an number.
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
		_putchar('\n');
}

