#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character type int
 * Return: 1 for lowercase or uppercase and 0 for otherwise
 */

int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}
