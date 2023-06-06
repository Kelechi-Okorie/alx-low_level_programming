#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to scan
 * @accept: the prefix substring
 *
 * Description: returns length of the initial segment
 * of @s that consists entirely of characters from @accept
 * Return: length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	char *sp1, *sp2;

	for (sp1 = s; *sp1 != '\0'; sp1++)
	{
		for (sp2 = accept; ; sp2++)
		{
			if (*sp2 == '\0')
				return (sp1 - s);
			else if (*sp1 == *sp2)
				break;
		}
	}

	return (sp1 - s);
}
