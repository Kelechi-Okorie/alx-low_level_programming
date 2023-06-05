#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to copy
 *
 * Description: copies @n number of bytes from
 * @src to @dest
 * Return: destination buffer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *sp;

	for (sp = dest; n > 0; sp++, src++, n--)
		*sp = *src;

	return (dest);
}
