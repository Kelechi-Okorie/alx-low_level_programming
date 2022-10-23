#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 * @n: length of the line
 *
 * Return: Always void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			for (; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
