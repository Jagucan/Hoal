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
	char *dup = malloc(sizeof(char) * (a + 1));

	if (str == NULL)
		return (NULL);
	while (str[a])
		a++;

	if (dup == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		dup[i] = str[i];

	dup[i] = '\0';
	return (dup);
}
