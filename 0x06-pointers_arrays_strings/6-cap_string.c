/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize words of
 *
 * Return: char pointer
 */
char *cap_string(char *s)
{
	int i;
	int t;

	i = 0;
	while (s[i] != '\0')
	{
		t = s[i - 1];

		if ((s[i] >= 97 && s[i] <= 122) &&
				 (t == ' ' || t == '\t' || t == '\n'
				  || t == ',' || t == ';' || t == '.'
				  || t == '!' || t == '?' || t == '"'
				  || t == '(' || t == ')' || t == '{'
				  || t == '}'))
		{
			s[i] = s[i] - 32;
		}

		i++;
	}

	return (s);
}
