#ifndef _MAIN_H
#define _MAIN_H

/**
 * struct dog - a dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 *
 * Description: defines a dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _MAIN_H */
