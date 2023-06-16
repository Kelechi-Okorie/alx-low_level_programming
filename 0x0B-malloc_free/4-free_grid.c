#include "main.h"

/**
 * free_grid - frees a 2 dimensional array
 * @grid: the grid to free
 * @height: teh height of the grid
 *
 * Description: frees a 2 dimensional grid @grid
 * of @height height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
