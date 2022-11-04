#include "main.h"

/**
 * free_grid - Frees a 2 dimensional.
 * @grid: Is a pointer to pointer.
 * @height: Is an integer.
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
