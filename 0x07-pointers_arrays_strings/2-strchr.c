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
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	return (NULL);
}
