#include <stddef.h>

/**
 * array_iterator - runs @action over each element of @array
 * @array: the array to iterate over
 * @size: no of elements in @array
 * @action: the function to run over each element of @array
 *
 * Return: Always nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
