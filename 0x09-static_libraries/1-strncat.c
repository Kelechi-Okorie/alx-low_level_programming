/**
 * _strncat - concatenates two strin
 * @dest: the string to concatenate to
 * @src: the string to concatenate from
 * @n: the number of bytes to copy from @src
 *
 * Return: pointer to char
 */
char *_strncat(char *dest, char *src, int n)
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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
