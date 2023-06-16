#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Description: allocates @b bytes using malloc
 * Return: pointer to allocated byte if successful,
 * NULL otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
