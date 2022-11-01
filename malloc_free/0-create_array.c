#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars.
 * @size: Is an unsigned integer.
 * @c: Is a character.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ar = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	else if (ar == 0)
		return (NULL);

	else
		for (a = 0; a < size; a++)
			ar[a] = c;

	return (ar);
}
