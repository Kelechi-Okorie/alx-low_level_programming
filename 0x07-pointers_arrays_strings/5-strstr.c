#include <stddef.h>

/**
 * _strstr - locates a substring from a string
 * @haystack: the string to search in
 * @needle: the string to locate
 *
 * Return: pointer to the beginning of the substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if  (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}

	return (NULL);
}
