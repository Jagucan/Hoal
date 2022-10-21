#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @n: Is a number.
 * @a: Is a pointer.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux = 0;

	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[i - n - 1];
		a[i -n - 1] = aux;
	}
}

