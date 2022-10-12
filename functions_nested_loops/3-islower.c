#include "main.h"

/**
 * _islower - checks for lowercase
 * c - character type letter
 * __islower return 1 for lowercase an 0 for no lowercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
