#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 *
 * Description: prints first 98 fibonacci numbers
 * starting from 1 and 2
 * Return: always 0
 */
int main(void)
{
	unsigned long int a, b, n, t;

	a = 1;
	b = 2;
	n = 2;
	while (n < 98)
	{
		t = a + b;
		printf("%ld%s", t, (n < 98) ? ", " : "");
		a = b;
		b = t;
		n++;
	}
	printf("\n");

	return (0);
}
