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
	va_list ap;
	unsigned int i;

	if (n <= 0)
		return;

	va_start(ap, n);

	printf("%d", va_arg(ap, int));

	for (i = 1; i < n; i++)
	{
		if (seperator != NULL)
			printf("%s", seperator);

		printf("%d", va_arg(ap, int));
	}

	printf("\n");
}
