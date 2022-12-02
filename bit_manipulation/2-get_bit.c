#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Is an unsigned int.
 * @index: Is an index of the bit.
 * Return: The value of the bit at index or -1 if an error.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (!index)
		return (0);

	if (n == 0 && index < 64)
		return (0);

	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
