#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: Is a pointer.
 * Return: Return an integer.
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int a = 0;

	do {
		if (*s == 45)
			i *= -1;

		else if (*s >= 48 && *s <= 57)
			a = a * 10 + (*s - 48);

		else if (a > 0)
			break;

	} while (*s++);

	return (a *i);
}
