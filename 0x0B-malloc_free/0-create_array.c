#include "main.h"

/**
 * create_array - creates array of chars
 * @size: size of the array
 * @c: the char to initialize array with
 *
 * Description: creates an array of chars of @size size and
 * initializes it with @c char
 * Return: pointer to the created array character
 */
char *create_array(unsigned int size, char c)
{
	char *s, *sp;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	sp = s;

	for (; size > 0; size--)
		*sp++ = c;

	return (s);
}
