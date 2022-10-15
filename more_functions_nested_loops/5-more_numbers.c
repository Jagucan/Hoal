#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14, 10 times
 */

void more_numbers(void)
{
	int num;
	int v = 0;

	for (v = 0; v <= 10; v++)
	{
		_putchar(v);
	
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
			_putchar('\n');
	}
}
