#include "main.h"

int is_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Description: checks if the number @n is a prime
 * Return: 1 is n is a prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, n - 1));
}

/**
 * is_prime - checks if a number is prime
 * @n: the number to check
 * @i: the number to check if it can divide @n
 *
 * Description: checks if @n is divisible by @i
 * Return: returns 1 if @n is prime
 * 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime(n, i - 1));
}
