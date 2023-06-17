#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory to reallocate
 * @old_size: old size of @ptr
 * @new_size: new size of @ptr
 *
 * Description: reallocates @ptr from @old_size to @new_size
 * Return: pointer to reallocated memory on success,
 * NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *p1, *p2;
	unsigned int n, i;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		p = malloc(new_size);
		return (p);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (!p)
		return (NULL);

	if (new_size < old_size)
		n = new_size;
	else
		n = old_size;

	p1 = (char *) p;
	p2 = (char *) ptr;
	for (i = 0; i < n; i++)
		*(p1 + i) = *(p2 + i);

	return (p);
}
