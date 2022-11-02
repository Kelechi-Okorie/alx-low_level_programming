#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: the strint to print
 *
 * Return: always void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
