#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 * @grid: array to free
 * @height: number of array inside to free
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
