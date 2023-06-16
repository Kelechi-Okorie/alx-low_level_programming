#include "main.h"

int _strlen(char *s);

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Description: concatenates the strings @s2 onto @s1
 * Return: pointer to the concatenated string on success
 * Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int n1, n2;
	char *s, *sp, *sp1;

	n1 = _strlen(s1);
	n2 = _strlen(s2);

	s = (char *) malloc((n1 + n2 + 1) * sizeof(char));

	if (!s)
		return (NULL);

	for (sp = s, sp1 = s1; (s1 && (*sp = *sp1) != '\0'); sp++, sp1++)
		;

	for (sp1 = s2; (s2 && (*sp = *sp1) != '\0'); sp++, sp1++)
		;

	if (s == sp)
		*s = '\0';

	return (s);
}

/**
 * _strlen - returns length of a string
 * @s: the string to return length of
 *
 * Description: returns length of string @s
 * Return: length of @s
 */
int _strlen(char *s)
{
	char *sp;

	if (!s)
		return (0);

	for (sp = s; *sp != '\0'; sp++)
		;

	return (sp - s);
}
