int calc(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to compute square root of
 *
 * Return: Computed square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calc(n, 0));
}

int calc(int n, int i)
{
	int p;

	p = i * i;

	if (p > n)
		return (-1);
	if (p == n)
		return (i);
	return (calc(n, i + 1));
}
