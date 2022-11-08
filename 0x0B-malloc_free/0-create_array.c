#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of the array
 * @c: character to initnalize array with
 * Description: creates array of chars of size @size
 * and initializes it with char @c
 *
 * Return: pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	char *buffer = NULL;
	unsigned int i;

	if (size == 0)
		return (buffer);

	buffer = (char *) malloc(size * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(buffer + i) = c;
	}

	return (buffer);
}
