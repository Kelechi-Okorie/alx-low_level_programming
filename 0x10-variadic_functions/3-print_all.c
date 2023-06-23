#include "variadic_functions.h"

#include <stdio.h>

/**
 * print_all - prints anything
 * @format: the format string used for printing
 *
 * Description: prints anthing according to the format specifier
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *sep, *str;
	va_list ap;

	va_start(ap, format);
	sep = "";

	if (!format)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
