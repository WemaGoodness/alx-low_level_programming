#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - makes a dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: always a success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_len, owner_len;
	dog_t *d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	name_len = strlen(name);
	owner_len = strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(name_len + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(owner_len + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
