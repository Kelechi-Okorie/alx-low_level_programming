#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the binary string to convert
 *
 * Description: converts binary number to unsigned int
 * Return: the unsigned int representation of @b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	char c;

	for (n = 0; *b != '\0'; b++)
	{
		c = *b - '0';

		if (c > 1 || c < 0)
			return (0);

		n = n * 2 + c;
	}

	return (n);
}

