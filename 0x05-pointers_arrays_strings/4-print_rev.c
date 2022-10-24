#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string to print in reverse
 *
 * Return: Always void
 */
void print_rev(char *s)
{
	int i;
	char *c;

	i = 0;
	c = &s[0];
	while (*c != '\0')
	{
		i++;
		c++;
	}
	
	i--;
	for (; i >= 0; i--)
	{
		c = &s[i];
		_putchar(*c);
	}
	_putchar('\n');
}
