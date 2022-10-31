/**
 * _memcpy - copies memory are
 * @des: buffer to cpoy to
 * @src: buffer to copy from
 * @n: number of bytes to copy from @src to @dest
 *
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	return (dest);
}
