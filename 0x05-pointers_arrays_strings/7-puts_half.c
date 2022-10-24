#include "main.h"

/**
 * puts_half - prints half a string
 * @str: the stinr to print half of
 *
 * Return: Always void
 */
void puts_half(char *str)
{
	char *ch;
	int len;
	int i;

	ch = &str[0];
	len = 0;
	while (*ch != '\0')
	{
		len++;
		ch++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len + 1) / 2; i < len; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
