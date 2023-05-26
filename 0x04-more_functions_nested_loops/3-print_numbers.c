#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Description: prints numbers 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
		_putchar(i++ + '0');

	_putchar('\n');
}

