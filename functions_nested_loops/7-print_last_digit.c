#include "main.h"

/**
 *
 *
 */

int print_last_digit(int x)
{
	int num = x % 10;

	if (num < 0)
		num *= -1;


_putchar(num + '0');

return (num);
}
