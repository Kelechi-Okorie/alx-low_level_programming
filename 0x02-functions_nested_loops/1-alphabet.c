#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Description: prints lowercase alphabet
 * with newline
 * Return: always 0
 */
void print_print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch >= 'a' && ch <= 'z')
		_putchar(ch++);

	_putchar('\n');

}
