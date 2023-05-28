#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to print
 *
 * Description: prints the number @n using _putchar
 * Return: void
 */
void print_number(int n)
{
	int i;

	i = n;

	if (i < 0)
	{
		i = -1 * n;
		_putchar('-');
	}

	if (i / 10)
		print_number(i / 10);

	_putchar((i % 10) + '0');
}
