#include "main.h"

/**
 *
 *
 */

int print_last__digit(int num)
{
	num = num % 10;

	if (num < 0)
		num *= 0;
		_putchar(num + 0);
		return (num);
}
