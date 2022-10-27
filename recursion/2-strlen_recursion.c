#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Is a pointer.
 * Return: Returns the length of a string.
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
