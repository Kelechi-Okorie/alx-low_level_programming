#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Description: duplicates a string and returs a
 * pointer to the duplicate
 * Return: Pointer to duplicated string if successful
 * Null otherwisw
 */
char *_strdup(char *str)
{
	char *s, *sp1, *sp2;
	int n;

	if (!str)
		return (NULL);

	for (sp1 = str; *sp1 != '\0'; sp1++)
		;

	n = sp1 - str;

	s = (char *) malloc((n + 1) * sizeof(char));

	if (!s)
		return (NULL);

	for (sp1 = str, sp2 = s; (*sp2 = *sp1) != '\0'; sp1++, sp2++)
		;

	return (s);
}
