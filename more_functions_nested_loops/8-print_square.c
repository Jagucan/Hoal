#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: Is the size of the square.
 * If size is 0 or less, the function should print only a new line.
 */

void print_square(int size)
{
	int l;
	int a;

	if (size > 0)
	{

		for (l = 1; l <= size; l++)
		{

			for (a = 1; a <= size; a++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
