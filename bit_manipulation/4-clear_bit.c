#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Is an unsigned int.
 * @index: Is an index of the bit.
 * Return: 1 if it worked, or -1 if an error occurred.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (n == 0 && index < sizeof(int) * 8)
		return (0);

	if (index >= sizeof(int) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
