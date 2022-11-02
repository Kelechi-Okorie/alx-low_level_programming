/**
 * factorial - computes factorial of an int
 * @n: the number to compute factorial of
 *
 * Return: factorial of n.
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
