/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: no of elements in @array
 * @cmp: pointer to function used to compare values
 *
 * Return: -1 if @cmp returns zero,
 * A positive number otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) > 0)
			return (i);
	}

	return (-1);
}
