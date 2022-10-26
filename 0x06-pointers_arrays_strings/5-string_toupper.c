/**
 * string_toupper - changes all lowercase to uppercase in a string
 * @s: the string to change
 *
 * Return: char pointer
 */
char *string_toupper(char *s)
{
	int i;

	i  = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;

		i++;
	}

	return (s);
}
