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
	char *dup = malloc(a * sizeof(char));

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a = a + 1;

	if (dup == NULL)
		return (NULL);
	while (*str)
	{
		dup[i] = *str;
		str = str + 1;
		i = i + 1;
	}

	dup[i] = *str;
	return (dup);
}
