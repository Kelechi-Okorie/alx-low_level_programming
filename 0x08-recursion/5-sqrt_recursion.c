#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - finds natural square root of a number
 * @n: the number to find square root of
 *
 * Description: finds the natural square root of @n
 * Return: the square root of @n on success,
 * -1 on failure
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}

/**
 * _sqrt - checks if i is the square root of n
 * @n: the number to check square root of
 * @i: the potential square root
 *
 * Description: checks if i * i == n
 * Return: i if i is square root of n,
 * -1 if n does not have a natrual square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
