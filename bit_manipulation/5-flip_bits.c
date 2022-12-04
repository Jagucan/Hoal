#include "main.h"

/**
 * flip_bits - Returns the number of bits need to flip to get from one number to another.
 * @n: Is the number.
 * @m: Is a index of bit.
 * Return: Return the number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t_bit, num, b_idx;
	unsigned int bits = 0;
	
	for (t_bit = 0; t_bit <= 32 - 1; t_bit++)
	{
		num = (n >> t_bit)& 1;
		b_idx = (m >> t_bit)& 1;

		if (num != b_idx)
			bits++;
	}

	return (bits);
}