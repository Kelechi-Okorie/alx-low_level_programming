#include <stdlib.h>
#include <string.h>

void calc_len(char *s, int *p);

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to string is successfuul, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1;
	int len2;
	char *buffer = NULL;

	i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s1 == NULL)
		s2 = "";

	calc_len(s1, &len1);
	calc_len(s2, &len2);

	buffer = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		*(buffer + i) = *(s1 + i);
	}

	for (i = 0; i < len1 + len2; i++)
	{
		*(buffer + len1 + i) = *(s2 + i);
	}

	*(buffer + len1 + len2 + 1) = '\0';

	return (buffer);
}

/**
 * calc_len - calculates length of string
 * @s: the string;
 * @p: int pointer to store the len
 *
 * Return: void
 */
void calc_len(char *s, int *p)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	*p = i;
}
