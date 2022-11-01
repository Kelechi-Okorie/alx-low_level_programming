#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: string containing characters to be matched
 *
 * Return: number of bytes in @s before first mistmatch
 */

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char *p;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		p = _strchr(accept, s[i]);
		if (p != NULL)
			j++;
		else
			return j;

		i++;
	}

	return j;
}

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while(1)
	{
		i = *s++;
		if (i == c)
			return (s - 1);
		if (i == 0)
			return (NULL);
	}
}
