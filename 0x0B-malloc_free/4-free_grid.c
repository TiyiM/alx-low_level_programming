#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Write a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int e;

	if (grid == NULL || height == 0)
		return;

	for (e = 0; e < height; e++)
		free(grid[e]);

	free(grid);
}
