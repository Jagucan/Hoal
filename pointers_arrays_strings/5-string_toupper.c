#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: Is a pointer.
 * Return: Return str.
 */

char *string_toupper(char *str)
{
	int a;
	int i;

	a = 0;

	while (str[a] != '\0')
		a++;

	for (i = 0; i < a; i++)
	{
		if (str[a] >= 97 && str[a] <= 122)
			str[a] = str[a] - 32;
	}

	return (str);
}
