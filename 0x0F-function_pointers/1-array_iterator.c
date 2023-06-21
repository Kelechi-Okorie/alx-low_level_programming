#include "function_pointers.h"

/**
 * array_iterator - executes given function on each array element
 * @array: the array to iterate on
 * @size: the size of the array
 * @action: the function to execute
 *
 * Description: Executes a function on each array element
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int n))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);

}
