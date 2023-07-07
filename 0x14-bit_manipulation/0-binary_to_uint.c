#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: binary string to convert to unsigned int
 *
 * Description: Converts the binary string @b to unsinged int
 * Return: @b converted to unsinged int on success,
 * NULL on failure
 */
unsigned int binary_to_uint(const char *b)
{
	const char *p;
	unsigned int n;

	n = 0;

	if (!b)
		return (0);

	for (p = b; *p != '\0'; p++)
	{
		if (*p != '0' && *p != '1')
			return (0);

		n = 2 * n + (*p - '0');
	}

	return (n);
}
