#include "variadic_functions.h"

/**
 * sum_them_all - sums all it's parameters
 * @n: number of parameters
 *
 * Description: sums all it's parameters
 * Return: sum of it's parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int d, s;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (s = 0, i = 0; i < n; i++)
	{
		d = va_arg(ap, int);

		s += d;
	}

	va_end(ap);

	return (s);
}
