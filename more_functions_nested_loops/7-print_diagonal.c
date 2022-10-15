#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Is the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	int l;
	int a;

	if (n > 0)
		{

			for (l = 0; l < n; l++)
			{

				for (a = 0; a < l; a++)
				{
					_putchar(' ');
				}
				
				_putchar('\\');
				_putchar('\n');
			}
		}

	else
	{
		_putchar('\n');
	}
}
