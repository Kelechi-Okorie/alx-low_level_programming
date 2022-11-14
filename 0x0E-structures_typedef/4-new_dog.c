#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: length of string @s
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i++] != '\0')
		;

	return (i);
}

/**
 * _strcpy - copies string from @src to #dest
 * @dest: buffer to copy to
 * @src: buffer to copy to
 *
 * Return: returns @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = _strlen(src);

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - craates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int name_len;
	int owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * (name_len + 1));

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(sizeof(char) * (owner_len + 1));

	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}

	_strcpy(ptr->name, name);
	_strcpy(ptr->owner, owner);

	ptr->age = age;

	return  (ptr);
}
