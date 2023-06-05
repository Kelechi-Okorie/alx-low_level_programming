#include "main.h"
#include <stddef.h>

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

	for (sp = s; *sp != '\0'; sp++)
	{
		if (*sp == c)
			return (sp);
	}

	return (NULL);
}
