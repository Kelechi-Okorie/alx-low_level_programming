#include "main.h"

/**
 * _puts - prints a string to the standard ouuput
 * @str: the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	char *ch;

	ch = &str[0];
	while (*ch != '\0')
	{
		_putchar(*ch);
		ch++;
	}

	_putchar('\n');
}
