#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (!d)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
