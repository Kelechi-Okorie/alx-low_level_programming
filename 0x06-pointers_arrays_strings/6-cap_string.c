/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize words of
 *
 * Return: char pointer
 */
char *cap_string(char *s)
{
	int i;
	int j;

	char chs[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
		')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == chs[j])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
			}
		}
	}

	return (s);
}
