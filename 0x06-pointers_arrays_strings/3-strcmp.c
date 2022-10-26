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
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;

		if (s1[i] > s2[i])
			return (15);
		else
			return (-15);
	}

	if (s1[i] != '\0')
		return (15);

	if (s2[i] != '\0')
		return (-15);

	return (0);
}
