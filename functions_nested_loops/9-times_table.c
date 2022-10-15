#include "main.h"

/**
 *
 */

void times_table(void)
{

	int row = 0;
	int col = 0;
	int num;

	while(row <= 9)
	{
		row++;

		_putchar('0');
		_putchar(',');
		_putchar(' ');

		while (col <= 9)
		{
			num = (col * row);
			col++;
			_putchar((num % 10) + '0');

			if ((num / 10) > 0)
			{
				_putchar((num / 10) + '0');
			}
			
			else 
			{
				_putchar(' ');
			}
			
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}	
				_putchar('\n');
	}
}

