#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Is an integer
 * Return: 1 for uppercase or 0 for otherwise
 */

int _isupper(int c)
{

	if (c > 96 && c < 123)

		return (0);

	else
		return (1);

}
