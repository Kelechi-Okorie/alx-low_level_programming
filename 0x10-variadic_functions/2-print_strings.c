#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings seperated by @seperator
 * @seperator: string seperator
 * @n: number of strings to print
 *
 * Return: Always nothing
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str =  "(nil)";

		if (!seperator || (seperator && i == 0))
			printf("%s", str);
		else
			printf("%s%s", seperator, str);
	}

	va_end(ap);

	printf("\n");
}
