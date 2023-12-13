#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: the array to print
 * @l: the lower index
 * @h: the higher index
 *
 * Description: prints the array given
 * Return: void
*/
void print_array(int *array, size_t l, size_t h)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= h; i++)
	{
		printf("%d", array[i]);
		if (i < h)
			printf(", ");
	}
	printf("\n");
}

/**
 * search - uses binary search
 * @array: the array to search
 * @value: the value to search for
 * @l: the lower bound index
 * @h: the upper bound index
 *
 * Description: searches an array using binary search
 * Return: returns index of found value on success,
 * -1 otherwise
*/
int search(int *array, int value, size_t l, size_t h)
{
	size_t mid = 0;

	print_array(array, l, h);

	if (l > h)
		return (-1);

	mid = l + ((h - l) / 2);
	if (value == array[mid])
		return (mid);
	if (value < array[mid])
		return (search(array, value, l, mid - 1));
	if (value > array[mid])
		return (search(array, value, mid + 1, h));

	return (-1);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Description: searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * Return: index of found value on success
 * -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (search(array, value, 0, size - 1));
}
