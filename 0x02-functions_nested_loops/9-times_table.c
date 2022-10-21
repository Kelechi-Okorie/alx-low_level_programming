#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int r;
	int s;
	int t;

	for (i = 0; i <= 9; i++)
	{

		for ( j = 0; j <= 9; j++)
		{
			r = i * j;
			s = r / 10;
			t = r % 10;

			if (s != 0)
				_putchar(s + '0');

			_putchar(t + '0');

			if(j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');	
	}
}	
