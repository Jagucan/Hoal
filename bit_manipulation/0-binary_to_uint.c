#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Is pointing to a string of 0 and 1 chars.
 * Return: The converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	int max_idx = 0;
	unsigned int res = 1, conv_int = 0;

	if (!b)
		return (0);

	max_idx = strlen(b) - 1;

	while (max_idx >= 0)
	{
		if (b[max_idx] != '0' && b[max_idx] != '1')
			return (0);

		conv_int += res * (b[max_idx] - '0');
		res <<= 1;
		max_idx--;
	}

	return (conv_int);
}
