#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @seperator: character to print between numbers
 * @n: count of the numbers
 *
 * Description: @n numbers seperated by @seperator
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	int d;
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		d = va_arg(ap, int);
		printf("%d%s", d, (seperator && i < n - 1) ? seperator : "");
	}
	va_end(ap);

	printf("\n");
}
