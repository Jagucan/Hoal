#include "main.h"

/**
 * _print__rev_recursion - Prints a string in reverse.
 * @s: Is a pointer.
*/

void _print__rev_recursion(char *s)
{
    if (*s)
    {
        _print_rev_recursion(s + 1);
        _putchar(*s);
    }
}