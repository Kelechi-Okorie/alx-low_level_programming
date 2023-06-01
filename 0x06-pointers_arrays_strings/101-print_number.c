#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Description: prints the integer @n to stdout
 * Return: void
 */
void print_number(int n)
{

	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}

	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}

	print_number(n / 10);
	_putchar(n % 10 + '0');
}
