#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: string containing characters to be matched
 *
 * Return: number of bytes in @s before first mistmatch
 */
/*
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
}*/

unsigned int _strspn( char *s, char *accept)
{
	int i;
	int j;
	int f;
	int flag;

	f = 0;
	for (i  = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (f);
	}

	return (0);
}
