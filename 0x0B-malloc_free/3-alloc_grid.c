#include <stdlib.h>

/**
 * alloc_grid - create 3D array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to array if successful, NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int **buffer;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	buffer = (int **) malloc(sizeof(int *) * height);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		buffer[i] = (int *) malloc(sizeof(int) * width);
		if (buffer[i] == NULL)
		{
			free(buffer);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			buffer[i][j] = 0;
		}
	}
	return (buffer);
}
