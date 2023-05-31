#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: buffer to copy string to
 * @src: buffer to copy string from
 * @n: number of strings to copy from @src
 *
 * Description: copies at most n strings from @src
 * Return: pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s;

	for (s = dest; n > 0  && *src != '\0'; n--)
		*s++ = *src++;

	for (; n > 0; n--)
		*s = '\0';

	return (dest);
}
