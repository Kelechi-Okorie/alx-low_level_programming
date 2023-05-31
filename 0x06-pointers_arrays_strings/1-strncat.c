#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: number of strings to copy from @src
 *
 * Description: copies at most n strings
 * from @src to @dest
 * Return: pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s;

	for (s = dest; *s != '\0'; s++)
		;

	for (; *src != '\0' && (n > 0); n--)
		*s++ = *src++;

	*s = '\0';

	return (dest);
}
