#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a dog variable
 * @d: dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 *
 * Description: Initializes a dog struct @d with
 * the provided parameters
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
