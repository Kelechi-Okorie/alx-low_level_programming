/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: Always void;
 */
void rev_string(char *s)
{
	int i;
	int len;
	int tmp;
	char *ch;

	len = 0;
	ch = &s[0];
	while (*ch != '\0')
	{
		len++;
		ch++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
