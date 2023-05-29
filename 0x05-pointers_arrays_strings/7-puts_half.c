#include "main.h"

/**
 * puts_half - prints half the string
 * @str: the string to print half of
 *
 * Description: prints half of string @s
 * Return: void
 */
void puts_half(char *str)
{
	const char *sp;
	int n;

	for (n = 0, sp = str; *sp != '\0'; sp++, n++)
		;

	for (n = n / 2; *(str + n) != '\0'; n++)
		_putchar(*(str + n));

	_putchar('\n');
}
