#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: Is a pointer.
 * Return: eturns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int a = 0;
	int i = 0;
	char *dup = malloc(a * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);
	while (str[a])
		a += 1;

	if (dup == NULL)
		return (NULL);
	while (*str)
	{
		dup[i] = *str;
		str++;
		i += 1;
	}

	dup[i] = *str;
	return (dup);
}
