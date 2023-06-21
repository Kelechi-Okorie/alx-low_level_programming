#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c);

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

/**
 * _strchr - locates a character in a string
 * @s: the search string
 * @c: the character to search
 *
 * Description: locates first occurrence of @c in @s
 * Return: if found pointer to first occurrence of @c in @s
 * NULL otherwise
 */
char *_strchr(char *s, char c)
{
	char *sp;

	for (sp = s; *sp != c; sp++)
	{
		if (*sp == '\0')
			return (NULL);
	}

	return (sp);
}

