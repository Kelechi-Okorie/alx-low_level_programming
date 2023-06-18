#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: the number to return factorial of
 *
 * Description: calculates and returns factorial of n
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
