#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: format specifier for the printing
 *
 * Return: Always void
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list ap;
	char *str;
	char *sep = "";

	va_start(ap, format);

	i = 0;
	if (format)
	{
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
	}

	va_end(ap);
	printf("\n");
}
