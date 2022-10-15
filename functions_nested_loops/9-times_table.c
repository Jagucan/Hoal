#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{

	int row = 0;
	int col = 0;
	int num;
	
	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (col = 1; col <= 9; col++)
		{
			num = (col * row);

			if ((num / 10) > 0)
			{
				_putchar((num / 10) + '0');
			}

			else 
			{
				_putchar(' ');
			}
				_putchar((num % 10) + '0');

			if (col < 9)
		
			{
				_putchar(',');
				_putchar(' ');
			}
		}	
				_putchar('\n');
	}
}

