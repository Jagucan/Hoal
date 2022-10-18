#include "main.h"


/**
 *
 */

void _puts(char *str)
{
	int s = *str;

	while (s != 0)
	{
		s = *str++;
		_putchar(s);
	}
		
	_putchar('\n');
}
