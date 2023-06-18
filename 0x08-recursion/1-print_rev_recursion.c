#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: the string to print
 *
 * Description: prints the string @s in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *c;

	if (!*s)
	{
		return;
	}

	c = s;
	s++;

	_print_rev_recursion(s);
	_putchar(*c);
}
