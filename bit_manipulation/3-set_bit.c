#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Is an unsigned int.
 * @index: Is an index of the bit.
 * Returns: 1 if it worked, or -1 if an error occurred.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!index)
		return (0);

	if (n == 0 && index < 64)
		return (0);

	if (index >= 64)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
