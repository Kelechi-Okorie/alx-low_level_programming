#include "main.h"

/**
 * print_line - draws straight line in the terminal
 * @n: The number of characters of _ to print
 *
 * Return: Always void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n + 1; i++)
			_putchar('_');
		_putchar('\n');
	}
}
