#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: Is a pointer.
 * Return: Return str.
 */

char *string_toupper(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}

		a++;
	}

	return (str);
}
