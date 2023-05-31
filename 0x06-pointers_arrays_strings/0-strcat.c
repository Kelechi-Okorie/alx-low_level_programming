#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Description: concatenates string @src to
 * the end of string @dest
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	char *s;

	for (s = dest; *s != '\0'; s++)
		;

	for (; (*s = *src) != '\0'; s++, src++)
		;

	return (dest);
}
