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

	for (num = 0; num <= 14; num++)
	{
		_putchar(num);
	
		while (v <= 10)
		{
			_putchar(v);
			v++;
		}
			_putchar('\n');
	}
}
