#include <stdio.h>

/**
 * main - computes sum of fibonacci numbers
 *
 * Description: computes sum of fibonacci numbers
 * whose values are even and less than 4,000,000
 * Return: always 0
 */
int main(void)
{
	long int a, b, t, s;

	a = 1;
	b = 2;
	s = 2;
	t = 2;
	while (t <= 4000000)
	{
		t = a + b;
		if (t % 2 == 0)
			s += t;

		a = b;
		b = t;
	}
	printf("%ld\n", s);

	return (0);
}
