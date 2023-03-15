#include "main.h"
#include <stdlib>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}