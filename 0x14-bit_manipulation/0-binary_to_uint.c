#include "main.h"

/**
 * binary_to_uint - converts binary to uint
 * @b: binary number to convert
 *
 * Return: decimal value of @b
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val;

	if (!b)
		return (0);

	i = 0;
	val = 0;
	while (b[i])
	{
		val = 2 * val + (b[i] - '0');
		i++;
	}

	return (val);
}
