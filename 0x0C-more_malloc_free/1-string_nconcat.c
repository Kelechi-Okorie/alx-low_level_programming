#include "main.h"

unsigned int _strlen(char *s);

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from @s2
 *
 * Description: concatenates at most @n number of bytes
 * from @s2 to @s1
 * Return: pointer to concatenated string on success,
 * NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1, n2;
	char *s, *sp, *sp1, *sp2;

	n1 = _strlen(s1);
	n2 = _strlen(s2);

	if ((n1 + n2) == 0)
		return (NULL);

	if (n < n2)
		s = malloc((n1 + n + 1) * sizeof(char));
	else
		s = malloc((n1 + n2 + 1) * sizeof(char));

	if (!s)
		return (NULL);

	if (n > n2)
		n = n2;

	for (sp = s, sp1 = s1; (n1 > 0) && ((*sp = *sp1) != '\0'); sp++, sp1++)
		;

	for (sp2 = s2; (n2 > 0) && (n--) && ((*sp = *sp2) != '\0'); sp++, sp2++)
		;

	if (*sp != '\0')
		*sp = '\0';

	return (s);
}



/**
 * _strlen - returns length of a string
 * @s: the string to return length of
 *
 * Description: returns length of string @s
 * Return: length of @s
 */
unsigned int _strlen(char *s)
{
	char *sp;

	if (!s)
		return (0);

	for (sp = s; *sp != '\0'; sp++)
		;

	return (sp - s);
}
