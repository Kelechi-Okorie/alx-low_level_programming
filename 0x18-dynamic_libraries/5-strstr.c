#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to search
 *
 * Description: locates the substring @needle
 * from the string @haystack
 * Return: pointer to beginning of substring,
 * or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *s, *sp1, *sp2;

	s = haystack;

	if (*needle == '\0')
		return (haystack);

	for (; (s = _strchr(s, *needle)) != NULL; s++)
	{
		for (sp1 = s, sp2 = needle; ;)
		{
			if (*++sp2 == '\0')
				return (s);
			else if (*++sp1 != *sp2)
				break;
		}
	}

	return (NULL);
}
