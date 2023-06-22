#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @seperator: the strings seperator
 * @n: the number of strings passed
 *
 * Description: prints @n strings with @seperator
 * between them
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (!s)
		{
			printf("%s%s", "(nil)", (s && i < n - 1) ? seperator : "");
		}
		else
		{
			printf("%s%s", s, (s && i < n - 1) ? seperator : "");
		}
	}
	va_end(ap);
	printf("\n");
}
