#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: size of the search array
 * @cmp: the compare function
 *
 * Description: searches for a given integer
 * Return: index of the integer found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}

	return (-1);
}
