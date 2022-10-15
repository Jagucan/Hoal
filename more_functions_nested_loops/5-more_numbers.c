#include <stdio.h>
#include "main.h"

/**
 *
 *
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
