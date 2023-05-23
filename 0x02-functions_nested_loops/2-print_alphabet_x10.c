#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Description: prints the alphabets 10 times
 * each on a new line
 *
 * Return (0);
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		int c;

		c = 'a';
		while (c >= 'a' && c <= 'z')
			_putchar(c++);

		_putchar('\n');
		++i;
	}
}
