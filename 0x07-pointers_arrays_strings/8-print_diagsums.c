#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals of square matrix
 * @a: the sqare matrix
 * @size: size of the matrix
 *
 * Return: Always void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1;
	int s2;

	s1 = 0;
	for (i = 0; i < size; i++)
	{
		s1 += a[(size * i) + i];
		s2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", s1, s2);
}
