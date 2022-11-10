#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: base string
 * @s2: string to add to base string
 * @n: number of strings to add fron @s2
 *
 * Return: Pointer to char if successful,
 * Null otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int i;
	unsigned int len1;
	unsigned int len2;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char ) * (len1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[len1 + i] = '\0';

	return (ptr);
}
