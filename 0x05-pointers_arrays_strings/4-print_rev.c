#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Description: prints the string @s in reverse
 * Return: void
 */
void print_rev(char *s)
{
	const char *sp;

	for (sp = s; *sp != '\0'; ++sp)
		;
	for (sp = sp - 1; sp >= s; sp--)
		_putchar(*sp);

	_putchar('\n');
}
