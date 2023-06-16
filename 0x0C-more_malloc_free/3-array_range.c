#include "main.h"

/**
 * array_range - crates array of integers
 * @min: min value in the array
 * @max: max value in the arary
 *
 * Description: creates array having elements min to
 * max inclusive
 * Return: pointer to the created array on success,
 * NULL on failure
 */
int *array_range(int min, int max)
{
	int *p, n, i;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	p = (int *) malloc(n * sizeof(int));

	if (!p)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
