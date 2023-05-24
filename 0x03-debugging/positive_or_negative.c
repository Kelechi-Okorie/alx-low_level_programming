#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry point
 *
 * Description: determines whether a number is posive
 * negative or zero
 * Return: always 0
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
