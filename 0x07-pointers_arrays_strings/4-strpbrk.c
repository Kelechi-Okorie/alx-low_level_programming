#include <stdio.h>

/**
 * _strpbrk - searches a; string for any of a set of bytes
 * @s: the string to search
 * @accept: string to accept any of its byte
 *
 * Return: pointer to the byte in s that matches one of the
 * bytes in @accept or NULL if none was found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	while (*s != 0)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		s++;
	}

	return (NULL);
}
