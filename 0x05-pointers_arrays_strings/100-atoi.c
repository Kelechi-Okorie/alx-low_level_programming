#include "main.h"

/**
 * atoi - converts a string to integer
 * @s: the string to convert
 *
 * Description: converts the string @s to integer
 * Return: integer representation of @s
 */
int _atoi(char *s)
{
	int i, n, sign;

	for (i = 0; s[i] == ' '; i++)
		;

	sign = (s[i] == '-') ? -1 : 1;

	if (s[i] == '+' || s[i] == '-')
		i++;

	for (n = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = n * 10 + (s[i] - '0');

	return (sign * n);
}
