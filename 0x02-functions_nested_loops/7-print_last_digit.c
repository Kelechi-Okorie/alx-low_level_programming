#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number);
 * @n: The number to print the last digit of
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;

	r = n % 10;

	_putchar(r + '0');

	return (r);
}
