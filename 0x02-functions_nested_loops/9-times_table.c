#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Description: prints 9 times table
 * starting with 0
 * Return: always 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;

			if (j > 0 && i < 10)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (k < 10 && j > 0)
				_putchar(' ');

			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
