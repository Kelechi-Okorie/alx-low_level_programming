#include <stdlib.h>

/**
 * _strdup - duplicates string into a buffer
 * @str: the string to duplicate
 *
 * Return: buffer if successful, NULL otherwise
 */
char *_strdup(char *str)
{
	char *buffer = NULL;
	int i;
	int len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		len++;
		i++;
	}

	buffer = (char *) malloc((len + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(buffer + i) = *(str + i);
		i++;
	}

	return (buffer);
}
