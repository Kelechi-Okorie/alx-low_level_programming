int calc(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to evaluate
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calc(n, n - 1));
}

/**
 * calc - checks prime recursively
 * @n: the number to check
 * @i: the iterator
 *
 * Return: 1 if prime, 0 therwise
 */
int calc(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (calc(n, i - 1));
}
