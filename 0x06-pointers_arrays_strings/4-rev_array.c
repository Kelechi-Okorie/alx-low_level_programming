/**
 * reverse_array - reverses the content of array
 * @a: the array to reverse
 * @n: number of elements of the array
 *
 * Return: Always void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
