#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * void print_numbers - prints numbers
 * @seperator: seperator in between numbers
 * @n: count of numbers to print
 * Description: prints numbers seperated by seperator
 * ending with a newline
 *
 * Return: Always nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (!seperator)
			printf("%d", va_arg(ap, int));
		else if (seperator && i == 0)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", seperator, va_arg(ap, int));
	}

	va_end(ap);

	printf("\n");
}
