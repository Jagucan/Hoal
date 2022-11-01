#include "main.h"
#include <stdlib.h>

/**
 * Returns a pointer to a newly allocated space in memory.
 * @str: Is a pointer.
 * Return: eturns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int a = 0;
	char *dup = malloc(sizeof(char) * a);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (dup == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; str[a] != '\0'; a++)
			dup[a] = str[a];
	}
	dup[a] = '\0';
	return (dup);
}
