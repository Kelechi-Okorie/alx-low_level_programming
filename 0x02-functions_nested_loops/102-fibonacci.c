#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Description: prints first 50 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	long int a, b, n, t;

	a = 0;
	b = 1;
	n = 2;

	printf("%ld, ", a);
	printf("%ld, ", b);
	while (n < 50)
	{
		t = a + b;
		printf("%ld%s", t, (n != 49) ? ", " : "");
		a = b;
		b = t;
		n++;
	}
	printf("\n");

	return (0);
}
