#include "main.h"

/**
 * alloc_grid - creates 2 d array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Description: creates and returns a pointer to a 2 dimensional
 * grid of @width width and @height height
 * Return: pointer to the 2 dimensional grid on success,
 * NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(height * sizeof(int *));

	if (!p)
		return (NULL);

	for (i = 0 ; i < height; i++)
	{
		p[i] = (int *) malloc(width * sizeof(int));

		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
