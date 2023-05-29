#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: the array to print
 * @n: the number of elements to print
 *
 * Description: prints @n elements from @a array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d%s", a[i], i == n - 1 ? "" : ", ");

	printf("\n");
}
