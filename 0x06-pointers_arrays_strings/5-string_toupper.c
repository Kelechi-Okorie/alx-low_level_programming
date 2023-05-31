#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: the string to change
 *
 * Description: changes lowercase letters to uppercase
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	char *sp;

	for (sp = s; *sp != '\0'; sp++)
		if (*sp >= 'a' && *sp <= 'z')
			*sp = *sp - 32;

	return (s);
}
