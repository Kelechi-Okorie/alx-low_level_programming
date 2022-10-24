#include <stdio.h>

/**
 * swap_int - swaps 2 intgers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
