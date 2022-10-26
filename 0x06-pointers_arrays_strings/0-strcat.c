/**
 * _strcat - concatenats two strings
 * @dest: the string to copy to
 * @src: the string to copy from
 *
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len;

	i = 0;
	dest_len = 0;
	while (dest[i] != '\0')
	{
		dest_len++;
		i++;
	}

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
