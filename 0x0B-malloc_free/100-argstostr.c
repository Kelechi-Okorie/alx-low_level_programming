#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: arguments count
 * @av: argument vector
 *
 * Return: pointer to char, or NULL if @acc == 0  or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *buffer = NULL;
	int i;
	int j;
	int k;
	int len;

	len = 0;
	k = 0;

	if (ac <= 1 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	buffer = (char *) malloc((len + 1) + sizeof(char));

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			buffer[k] = av[i][j];
			k++;
		}
		buffer[k] = '\n';
		k++;
	}

	return (buffer);
}
