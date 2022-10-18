#include "main.h"
#include <stdio.h>

/**
 *
 */

int _strlen(char *s)
{
	
	int ls = 0;
	int st = *s;

	while (st != '\0')
	{
		ls++;
		st = *s++;
	}

	if (ls < 0)

		return (ls - 1);
	else
		return (ls);
}
