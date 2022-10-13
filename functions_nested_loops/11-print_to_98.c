#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - priints all natural numbers from n to 98.
 * @n - is an number.
 * Return. there is no return to describe.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}

	else if (n > 98)
	{
		while (n > 98)
		{
		printf("%d, ", n);
		n--;
		}
	}

	printf("%d\n", n);
}
