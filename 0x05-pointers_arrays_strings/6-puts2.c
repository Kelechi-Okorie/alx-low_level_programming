#include "main.h"

/**
 * puts2 - prints every ther character of a string
 * @str: the string to print every character of
 *
 * Return: Always void
 */
void puts2(char *str)
{
	char *c;
	int i;

	c = &str[0];
	i = 0;
	while (*c != '\0')
	{
		if (i % 2 == 0)
			_putchar(*c);
		c++;
		i++;
	}

	_putchar('\n');
}
