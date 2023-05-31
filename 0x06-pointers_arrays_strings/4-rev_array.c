#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: the array to reverse
 * @n: number of elements in array
 *
 * Description: reverses an array of integers
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *l, *r, tmp;

	l = a;
	r = &a[n - 1];

	for (; r > l; l++, r--)
	{
		tmp = *l;

		*l = *r;
		*r = tmp;
	}
}
