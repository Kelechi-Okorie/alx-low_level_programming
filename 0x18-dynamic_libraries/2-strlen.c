#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to return length of
 *
 * Description: returns length of string @s
 * Return: length of @s
 */
int _strlen(char *s)
{
	const char *sc;

	for (sc = s; *sc != 0; ++sc)
		;
	return (sc - s);
}
