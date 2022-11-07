/**
 * _strlen - returns length of string
 * @s: - the string to return the length of
 *
 * Return: Integer representing length of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
