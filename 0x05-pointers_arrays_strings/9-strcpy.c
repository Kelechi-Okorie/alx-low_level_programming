#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: where to copy to
 * @src: where to copy from
 *
 * Description: copies string from @src to @dest
 * Return: pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	char *sp;

	for (sp = dest; (*sp++ = *src++) != '\0';)
		;
	return (dest);
}
