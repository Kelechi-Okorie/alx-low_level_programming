#include "main.h"

/**
 * puts2 - prints every character in a string
 * @str: the string to print
 *
 * Description: prints every other character in a string
 * Return: void
 */
void puts2(char *str)
{
	const char *sp;
	int n;

	for (n = 0, sp = str; *(sp + n) != '\0'; n++)
	{
		if (n % 2 != 0)
			continue;
		_putchar(*(sp + n));
	}
	_putchar('\n');
}
