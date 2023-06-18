#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to return length of
 *
 * Description: returns length of string @s
 * using recursion
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
