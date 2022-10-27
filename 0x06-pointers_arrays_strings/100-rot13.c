/**
 * rot13 - encodes a s tring using rot13
 * @s: the string to rotate
 *
 * Return: pointer to char
 */
char *rot13(char *s)
{
	int i;
	int j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghjiklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}

	return (s);
}
