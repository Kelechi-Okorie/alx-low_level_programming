#include "main.h"

/**
 * print_line - prints straight line
 * @n: length of line
 *
 * Description: prints straight line n long on
 * the terminal
 * Return: always void;
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
