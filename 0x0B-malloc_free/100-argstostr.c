#include "main.h"

/**
 * argstostr - concatenates all arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Description: concatenates all arguments passed to your
 * with a newline inbetween the words
 * Return: pointer to string containing all arguments passed to program
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, n;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, n = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			n++;
		n++;
	}

	s = (char *) malloc((n + 1) * sizeof(char));

	if (!s)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	return (s);
}
