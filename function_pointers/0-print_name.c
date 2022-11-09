#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Is a string.
 * @f: Is a char.
 * Return: Return name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
