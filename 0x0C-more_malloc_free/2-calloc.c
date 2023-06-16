#include "main.h"

/**
 * _calloc - allocates memory using malloc
 * @nmemb: number of elements
 * @size: size of each element in byte
 *
 * Description: allocates memory of size @nmemb x @size
 * using malloc and sets them to 0
 * Return: pointer to allocated memory on successful,
 * NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *s;
	unsigned int n, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;

	p = malloc(n);

	if (!p)
		return (NULL);

	s = p;
	for (i = 0; i < n; i++)
		s[i] = 0;

	return (s);
}
