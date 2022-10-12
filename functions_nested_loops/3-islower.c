#include "main.h"

/**
 * _islower - checks for lowercase
 * @c - character type letter
 * Return: 1 if c is lowercase and 0 otherside
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
