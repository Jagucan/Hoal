#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14, 10 times
 */

void more_numbers(void)
{

	int num = 0;
	int v = 0;

	while (v <= 9)
	{
		v = 0;
		v++;

		while (num <= 14)
		{
			if (num > 9)
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			num++;
		}
			_putchar('\n');
	}
}
