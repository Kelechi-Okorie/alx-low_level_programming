#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string to print
 *
 * Description: prints the string @s to the stdout
 * Return: void
 */
void _puts(char *str)
{
	const char *sp;

	for (sp = str; *sp != '\0'; sp++)
		_putchar(*sp);

	_putchar('\n');
}
