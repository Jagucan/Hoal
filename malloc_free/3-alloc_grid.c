#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Is an integer.
 * @height: Is an integer.
 * Return: Return NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **gr;
	int a;

	if (width <= 0 || height <= 0)
	return (NULL);

	gr = malloc(height * sizeof(int *));
	if (gr == 0)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		gr[a] = malloc(width * sizeof(int *));
		if (gr[a] == NULL)
		{
			while (a >= 0)
			{
				free(gr[a]);
				a--;
			}
		free(gr);
		return (NULL);
		}
	}
	return (gr);
}
