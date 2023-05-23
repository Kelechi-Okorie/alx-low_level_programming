#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to print last digit of
 *
 * Description: prints last digit of n
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i *= -1;
	_putchar(i + '0');
	return (i);
}
