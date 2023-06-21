#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the search string
 * @accept: string containing bytes to search for
 *
 * Description: searches a string for any of a set of bytes
 * Return: if found, pointer to byte, otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *sp1, *sp2;

	for (sp1 = s; *sp1 != '\0'; sp1++)
	{
		for (sp2 = accept; *sp2 != '\0'; sp2++)
		{
			if (*sp2 == *sp1)
				return (sp1);
		}
	}

	return (NULL);
}
