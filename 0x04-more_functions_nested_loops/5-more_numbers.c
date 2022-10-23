#include "main.hi"

/**
 * more_numbers - prints 10 the numbers 0 to 14
 *
 * Return: always void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		j = 0;
		for (; j <= 14; j++)
		{
			_putchar((j / 10) + '0');

			if (j > 9)
				_putchar((j % 10) + '0');
		}

		_putchar('\n');
	}
}
