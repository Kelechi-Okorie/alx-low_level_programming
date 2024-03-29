#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search
 *
 * Description: searchs for the @value in the @array
 * Return: the index of the found value on success, -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}

	return (-1);
}
