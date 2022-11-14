#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog struct
 * @d: the dog struct to free
 *
 * Return: Always void.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
