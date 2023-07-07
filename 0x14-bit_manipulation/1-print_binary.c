#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the number to print binary of
 *
 * Description: prints binary equivalent of @n
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int n;
	int flag;
	unsigned long int p;

	n = 0;
	flag = 0;

	for (i = 63; i >= 0; i--)
	{
		if (flag && 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}

	if (!flag)
		_putchar('0');
}
