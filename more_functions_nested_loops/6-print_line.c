#include "main.h"

/**
 * print_line - Draws a straight line.
 * @n: Is the number of times the character _ should be printed.
 */

void print_line(int n)
{

	int lines;

	if (n > 0)
	{

		for (lines = 0; lines < n; lines++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}

	else
	{
		_putchar('\n');
	}

}
