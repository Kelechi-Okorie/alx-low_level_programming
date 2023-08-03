#include "main.h"

/**
 * print_binary - converts and prints binary from unsigned long int
 * @n: the unsigned long int to convert to binary
 *
 * Description: conerts and prints binary from unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, flag;
	unsigned long int bit;

	flag = 0;

	for (i = 63; i >= 0; i--)
	{
		bit = n >> i;

		if (bit & 1)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1)
		{
			_putchar('0');
		}
	}

	if (!flag)
		_putchar('0');
}
