#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory assigned to a 2D array
 * @grid: address of the 2D array
 * @height: height of the grid, rows of the 2D array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
