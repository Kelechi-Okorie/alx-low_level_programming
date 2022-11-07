/**
 * _memset - fills memory with a constant byte
 * @s: the buffer to fill
 * @b: the byte to fill the buffer with
 * @n: the number of bytes to fill in the buffer
 *
 * Return: pointer to the memory address copied to
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
