#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **gr;
	int a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	gr = malloc(height * sizeof(int *));
	if (gr == 0)
	{
		free (gr);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{

		gr[a] = malloc(width * sizeof(int));
		if (gr[a] == 0)
		{
			while (a >= 0)
			{
				free (gr[a]);
				a--;
				return (NULL);
			}
		}
	}

	return (gr);
}
