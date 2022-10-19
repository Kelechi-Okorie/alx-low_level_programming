#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check for its sign
 *
 * Return: 1 is n > 0, 0 if n == 0, and -1 if n <1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
