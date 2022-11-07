/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 is s1 == s2,
 * >0 if first non-matching char in s1 > s2
 * <0 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
