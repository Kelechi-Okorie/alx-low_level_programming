#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal
 * @n: lengthe of the diagonal
 *
 * Description: prints diagonal with length n
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j == i)
			{
				_putchar('\\');
				break;
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
