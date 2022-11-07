#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: string containing characters to be matched
 *
 * Return: number of bytes in @s before first mistmatch
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;
	int len;

	k = 0;
	for (i  = 0; s[i] != '\0'; i++)
	{
		len = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				len = 1;
			}
		}
		if (len == 0)
			return (k);
	}

	return (0);
}
