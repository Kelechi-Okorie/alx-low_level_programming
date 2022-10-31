#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to look in
 * @c: the character to locate in @s
 *
 * Return: pointer to first occurrence of @c
 * or NULL if @c does not occur in @s
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (1)
	{
		i = *s++;

		if (i == c)
			return (s - 1);
		if (i == 0)
			return (NULL);
	}
}
