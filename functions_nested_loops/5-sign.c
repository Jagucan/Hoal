#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: is an caracter 
 * return: 1, 0 or -1 if n is greater or less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('43');
		return (1);
	}
	
	else if (n < 0)
	{
		_putchar('45');
		return (-1);
	}

	else (n == 0)
	{
		_putchar('48');
		return (0);
	}
}
