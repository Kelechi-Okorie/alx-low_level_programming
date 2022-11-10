#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated by malloc
 * @old_size: size of @ptr
 * @new_size: size of reallocated memory
 *
 * Return: pointer to reallocated memory if successful
 * NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *buffer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	buffer = malloc(new_size);
	if (buffer == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			buffer[i] = ((char *) ptr)[i];
	}

	if (new_size > old_size)
	{
		for (i =  0; i < old_size; i++)
			buffer[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (buffer);
}
