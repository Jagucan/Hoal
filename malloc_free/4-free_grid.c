#include "main.h"

/**
 *
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
