#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill
 * @b: the byte to fill
 * @n: number of bytes to write in s
 *
 * Description: fills @n bytes of the memory area pointed
 * to by @s with @b
 * Return: always returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *sp;

	for (sp = s; n > 0; sp++, n--)
		*sp = b;

	return (s);
}
