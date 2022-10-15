#include "main.h"
#include <unistd.h>
#include "putchar.h"

/**
 *
 *
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
		_putchar("\n");
	}

}

