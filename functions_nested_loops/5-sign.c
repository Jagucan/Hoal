#include "main.h"

/**
 * print_sign - prints sign of the var n and return the corresponding number
 * @n: is an caracter
 * return: 1, 0 or -1 if n is greater or less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
